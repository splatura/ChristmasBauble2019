# CLAUDE.md - AI Assistant Guide for ChristmasBauble2019

## Project Overview

ChristmasBauble2019 is an Arduino-based interactive Christmas decoration featuring LED animations and audio playback. The project runs on an ATTiny1604 microcontroller and is inspired by bitluni's KillerBadge work.

**License:** Creative Commons Attribution ShareAlike 4.0 (CC BY-SA 4.0)

## Repository Structure

```
ChristmasBauble2019/
├── CLAUDE.md              # This file - AI assistant guide
├── readme.MD              # Project documentation and setup instructions
└── ChristmasBauble/
    ├── ChristmasBauble.ino  # Main Arduino sketch (201 lines)
    └── sounds.h             # Audio data and musical note definitions (224 lines)
```

## Key Files

### ChristmasBauble.ino
The main Arduino sketch containing:
- **Pin Configuration:** Pin 4 (button input with pull-up), Pin 5 (audio output)
- **LED Control:** `off()`, `led(int n)`, `eyes()`, `saw()` - functions for LED animations
- **Audio Functions:** `sound()` for melody playback, `voice()` for PCM audio samples
- **Button Handling:** `button()` with debouncing (200ms) and long-press detection (2000ms)
- **Melody Definition:** 11 musical notes (E5, G5, C5, D5) with timing

### sounds.h
Audio data header containing:
- `soundsSamples[]` - 7940+ signed char PCM audio samples stored in PROGMEM
- `soundsOffsets[]` - Array marking boundaries for sound segments
- Musical note frequency constants (B0 through D8, covering all chromatic notes)

## Hardware Requirements

- **Microcontroller:** ATTiny1604
- **Clock Speed:** 10MHz
- **I/O Connections:**
  - Pin 4: Button input (internal pull-up)
  - Pin 5: Audio output (PWM)
  - PORTA pins 4-7: LED control
  - PORTB pin 2: Speaker/buzzer

## Development Setup

### Required Software
1. Arduino IDE
2. **tinyMegaCore** board library: https://github.com/SpenceKonde/ATTinyCore

### Compiler Settings
- **Board:** ATTiny1604
- **Clock:** 10MHz
- **Features:** micros(), millis() enabled

### Programming
- Requires UPDI programmer (can be built from Arduino Nano)
- Uses jtag2updi software
- Connect programmer to ATTiny1604 UPDI pin

## Code Conventions

### Memory Optimization
- Use `PROGMEM` for large constant arrays (audio data, lookup tables)
- The ATTiny1604 has limited resources (~4KB Flash, 256 bytes RAM)

### GPIO Access
- Direct register manipulation for performance: `PORTA.DIRCLR`, `PORTA.OUT`, `PORTB.OUT`
- Bitwise operations for fast LED control
- Example: `PORTA.DIRCLR = 0xFF` clears all direction bits

### Timing
- Use integer arithmetic and bit shifting for timing calculations
- `millis()` for button debouncing and mode timing
- Microsecond-level timing for audio playback

### Function Naming
- Clear, descriptive names: `eyes()`, `saw()`, `sound()`, `voice()`
- Animation functions use static variables for state persistence

## Device Functionality

### Operating Modes

**Mode 0 (Default):** LED chasing animation via `saw()` function
**Mode 1:** Melody playback with simultaneous LED animation

### User Interaction
- **Short press:** Toggle between modes (0 ↔ 1)
- **Long press (>2s):** Play stored audio message, LEDs off during playback

## Development Guidelines for AI Assistants

### When Modifying Code
1. Preserve memory optimization patterns (PROGMEM usage)
2. Maintain direct register access for GPIO operations
3. Test timing-critical code changes carefully
4. Keep audio sample data format consistent (8-bit signed PCM)

### When Adding Features
1. Consider ATTiny1604 memory constraints
2. Use existing coding patterns for consistency
3. Update this file if adding new major components
4. Maintain CC BY-SA 4.0 license compliance

### Common Tasks
- **Adding LEDs:** Modify `led(int n)` function and LED sequence array
- **Changing melody:** Edit note arrays and timing in `ChristmasBauble.ino`
- **Adding sounds:** Update `soundsSamples[]` in `sounds.h` with new PCM data
- **Modifying animations:** Adjust `eyes()` or `saw()` timing parameters

## Build and Upload

1. Open `ChristmasBauble/ChristmasBauble.ino` in Arduino IDE
2. Select Board: ATTiny1604 (via tinyMegaCore)
3. Set Clock: 10MHz
4. Connect UPDI programmer
5. Upload sketch

## Git Workflow

- Main branch: `master`
- Feature branches: `claude/*` prefix for AI-assisted changes
- Commit messages should be descriptive of changes made
