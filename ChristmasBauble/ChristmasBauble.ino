//Based upon bitluni 2019 killer badge 1.0 https://bitluni.net/killerBadge
//Needed board library tinyMegaCore https://github.com/SpenceKonde/ATTinyCore
//Optimized for ATTiny1604
//compiler options "10MHz", "micros(),millis() enabled".
//license CC BY-SA 4.0

#include "sounds.h"
int mode = 0;

void setup() 
{
  pinMode(4, INPUT_PULLUP);
  pinMode(5, OUTPUT);
}

void off()
{
  PORTA.DIRCLR = 0b11110000;
  PORTA.OUT &= ~0b11110000;
}

const unsigned char pinDir[] = {
  0b00110000,
  0b00110000,
  0b01010000,
  0b01010000,
  0b10010000,
  0b10010000,
  0b01100000,
  0b01100000,
  0b10100000,
  0b10100000,
  0b11000000,
  0b11000000};
    
const unsigned char pinLvl[] = {
  0b00010000,
  0b00100000,
  0b00010000,
  0b01000000,
  0b00010000,
  0b10000000,
  0b00100000,
  0b01000000,
  0b00100000,
  0b10000000,
  0b01000000,
  0b10000000};

void led(int n)
{
  PORTA.DIRCLR = 0b11110000;
  PORTA.DIRSET = pinDir[n];
  PORTA.OUT = (PORTA.OUT & 0b00001111) | pinLvl[n];
}

const unsigned char chain[] = {6, 1, 7, 11, 2, 3, 8, 9, 0, 10, 5, 4};

void eyes(long t, long dt)
{
  static long n = 0;
  n++;
  static int dir = 1;
  static int eyes = 0;

  if (eyes <= ((n >> 1) & 31))
  {
    off();
  }
  else
  {
    led(4 + (n & 1));
  }
  
  if(dt && (t & 15) == 0)
  {
    eyes += dir;
    if(eyes == 20 || eyes == 0)
      dir = -dir;
  }
}

void saw(long t, long dt)
{
//  if(mode < 1) return;
  static int alt = 0;
  alt ^= 6;
  unsigned short l = ((t >> 6) + alt);
  led(chain[l % 12]);
}

const int notes = 11;
short melody[][3] = {
  {0, NOTE_E5, 400},
  {450, NOTE_E5, 400},
  {900, NOTE_E5, 800},
  
  {1900, NOTE_E5, 400},
  {2350, NOTE_E5, 400},
  {2800, NOTE_E5, 800},
  
  {3800, NOTE_E5, 400},
  {4250, NOTE_G5, 400},
  {4700, NOTE_C5, 600},
  {5350, NOTE_D5, 200},
  {5600, NOTE_E5, 800},
};

void sound(long dt)
{
  static long pos = 0;
  static int note = 0;  
  if(mode > 0)
  {
    if(dt)
    {
      pos += dt;
      if(note < notes && pos >= melody[note][0])
      {
        tone(5, melody[note][1], melody[note][2]);        
        note++;  
      }
    }
  }
  else
  {
    pos = 0;
    note = 0;
  }
}

long voiceT = 0;
void startVoice()
{
  voiceT = 0;
}

bool voice()
{
  voiceT++;
  long so = voiceT >> 4;
  if(so > soundsOffsets[1]) return false;
  int sample = pgm_read_word_near(soundsSamples + so);
  static int lastSample = 0; 
  if(lastSample < sample)
  {
    lastSample += 100;
    PORTB.OUT |= 0b100; //    digitalWrite(5, HIGH);
  }
  else
  {
    lastSample -= 100;
    PORTB.OUT &= ~0b100;  //    digitalWrite(5, LOW);
  }
  return true;
}

void button()
{
  mode += 1;
  if(mode == 2)
    mode = 0;
}

void loop() 
{
  static long ot = 0;
  static long lastPress = 0;
  long t = millis();
  long dt = t - ot;
  ot = t;
    
//  eyes(t, dt);
  saw(t, dt);
  sound(dt);
  
  static long longPress = 0;
  if(digitalRead(4) == LOW)
  {
    if(longPress > 2000)
    {
      off();
      startVoice();
      while(voice());
      digitalWrite(5, LOW);
      t = millis();
      longPress = 0;
    }
    longPress += dt;
    if(lastPress > 200)
    {
      button();
      lastPress = 0;
    }
  }
  else
  {
    longPress = 0;
    lastPress += dt;
  }
}
