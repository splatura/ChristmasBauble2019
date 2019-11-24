//bitluni 2019
//CC BY-SA 4.0

const int soundsOffsets[] = {0, 7940, };
const signed char soundsSamples[] PROGMEM = {
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, -1, 0, 0, 0, 0, 0, -1, 5, 1, -3, -4, 
-7, 1, 11, 10, 0, -9, -17, -8, 9, 11, 11, 2, -10, -8, -8, -4, 6, 8, 2, 1, -4, 5, 16, 32, 12, -15, -38, -40, -13, 23, 40, 27, -3, -28, -33, -11, 11, 23, 16, 3, -8, -10, -11, -14, -13, -9, 5, 21, 35, 25, -14, -40, -45, -24, 15, 35, 26, 8, -13, -22, -12, -2, 12, 15, 
3, -7, -3, -2, 14, 28, 27, 40, 25, 0, -36, -43, -36, 0, 27, 32, 16, -7, -26, -24, -9, 11, 18, 16, -1, -15, -25, -27, -24, -14, -1, 14, 24, 27, 10, -10, -36, -33, -24, 1, 23, 22, 14, -4, -18, -17, -9, 7, 16, 15, 11, -8, -17, -11, -7, 33, 48, 65, 44, 15, -36, -62, -38, -13, 
34, 45, 22, -7, -24, -25, -12, 7, 9, 12, 11, 3, -8, -26, -41, -41, -15, 14, 39, 44, 23, -15, -34, -51, -34, -6, 14, 24, 20, 5, -15, -21, -26, -13, 12, 14, 29, -4, -11, -7, 40, 64, 46, 34, -33, -51, -40, -4, 22, 35, 23, -7, -11, -13, -15, -6, 3, 20, 26, 24, -12, -36, -56, -41, 
-8, 25, 48, 33, 6, -25, -43, -40, -21, 2, 11, 16, 12, -6, -14, -27, -19, -8, 11, 10, 6, 9, 12, 40, 60, 29, 28, -24, -55, -37, -11, 16, 34, 30, 4, -2, -3, -16, -9, 0, 13, 27, 28, 1, -30, -46, -40, -14, 26, 41, 22, -6, -19, -33, -31, -15, -9, 2, 18, 10, -4, -21, -23, -26, 
-2, 2, 6, 25, 42, 39, 38, -2, 8, -21, -17, -30, -17, -7, 21, 25, 18, 3, 0, -17, -1, 5, 20, 15, 11, -11, -18, -31, -15, 10, 21, 11, -13, -5, -14, -16, -5, -23, -14, 2, 12, 9, 4, -23, -24, -18, -17, 12, 24, 72, 46, 29, 18, -24, -36, -49, -18, -16, 29, 26, 5, 3, 1, -6, 
-8, -1, 6, 17, 28, 7, -10, -31, -26, -8, 12, 4, 3, 4, 5, -8, -20, -25, -25, -6, 3, 6, 12, 8, -3, -18, -24, -17, 19, 86, 55, 37, 29, -30, -42, -41, -39, -29, 16, 31, 19, 19, 2, -10, -13, -6, 0, 5, 14, 6, 0, 23, -6, -16, -44, -22, -8, 28, 22, -4, -13, -2, -25, -22, 
-18, 4, 17, 9, -1, -20, -7, 60, 59, 51, 16, -13, -45, -27, -25, -31, -12, 15, 19, 26, 11, -7, -12, 2, -3, -6, -5, -3, 11, 22, 1, -23, -29, -32, -4, 16, 5, 1, 3, -3, -24, -25, -21, -12, 20, 19, -2, -26, 81, 86, 73, -24, -34, -57, -6, -25, -62, -36, 39, 59, 42, -3, -5, -9, 
6, -41, -31, -18, 30, 21, 7, -5, 0, -5, -17, -30, -10, 6, 10, -10, -21, -24, -13, -10, 11, -4, -6, -5, 96, 94, 45, -21, -16, 1, -24, -58, -77, -29, 51, 40, 5, -4, 55, 41, -2, -57, -43, -5, 0, -41, -47, 6, 46, 18, 0, -8, 7, 14, -18, -49, -33, -16, -19, -11, 1, 15, 2, 111, 
88, 17, -21, 4, -7, -34, -47, -65, -21, 55, 20, -3, 12, 69, 19, -12, -28, -2, 14, -20, -72, -60, 0, 12, -19, -3, 27, 44, 23, -16, -42, -18, -28, -44, -41, -14, -3, 79, 127, 71, -18, 46, 21, -37, -69, -68, -40, 17, 26, -23, 25, 85, 59, -2, -11, 21, 13, -27, -69, -62, -18, -10, -27, -12, 
32, 28, 33, -3, -7, -4, -27, -53, -51, -28, -47, 70, 102, 57, -9, 102, 37, -31, -61, -66, -66, -22, -28, -30, 42, 113, 42, 30, 40, 64, -19, -47, -75, -38, -49, -55, -42, 17, 44, 20, 14, 40, 28, 28, -33, -61, -42, -59, 55, 20, 16, -11, 123, 42, 17, -6, -24, -40, -56, -73, -54, -10, 41, -1, 
43, 63, 92, 21, 5, -12, 0, -64, -84, -67, -34, -21, -17, 11, 45, 50, 53, 12, -4, -24, 35, 55, -33, -71, 90, 8, 0, -4, 32, 7, 0, -49, -50, 2, 13, -35, -5, 30, 64, 9, 10, 13, 17, -18, -43, -52, -29, -34, -37, -20, -3, 5, 2, 12, 10, 3, -13, 104, 7, -4, -13, 59, -20, -10, 
0, -11, 12, -9, -54, 3, -3, 1, -35, 39, 43, 47, 2, 17, 26, 3, -45, -33, -28, -23, -45, -32, -11, -10, -22, 1, -6, -8, -18, 112, 41, 35, 0, 94, -25, -9, -23, -24, -5, -38, -64, -6, 7, 6, -34, 39, 17, 68, 0, 27, 44, 27, -13, -14, -29, -44, -44, -32, -27, -23, -21, -11, -3, -1, 
-14, 19, 92, 26, -15, 80, 36, 28, -12, 10, -5, -26, -67, -72, -5, -57, -27, -13, 12, 53, 19, 16, 53, 47, 0, 0, 11, -37, -30, -34, -33, -44, -39, -34, -20, -27, -13, -14, 29, 85, 30, 3, 107, 29, 44, 2, 43, 0, -16, -52, -38, -29, -76, -49, -27, -21, 17, -5, 30, 60, 47, 24, 39, 15, 
-12, -7, -26, -43, -48, -45, -44, -31, -49, -30, -33, -11, 71, -13, 16, 84, 54, 53, 43, 63, 20, 14, -28, -22, -21, -80, -43, -60, -38, -29, -15, 12, 26, 31, 40, 46, 29, 24, 38, -7, -13, -27, -30, -52, -43, -53, -36, -49, -37, 45, -20, 17, 40, 69, 39, 51, 54, 48, 40, -8, 15, 11, -54, -23, 
-57, -37, -59, -28, -24, -12, 2, 23, 28, 25, 16, 37, 14, 12, 1, -4, -19, -14, -36, -34, -61, 27, -20, -6, -12, 77, -8, 61, 22, 54, 29, 16, 12, 22, -11, 0, -16, -11, -45, -10, -34, -12, -33, -1, -5, -12, -14, 12, -2, -2, 1, 6, -6, -6, -5, -11, -24, 45, -37, 17, 11, 32, 4, 21, 
41, 13, 21, 9, 20, -6, -16, 16, -35, -12, -21, 9, -18, -7, 10, 6, 3, -5, 1, -8, -21, -12, 0, -23, -21, -9, -7, -23, -29, 44, -29, 18, 2, 56, -6, 49, 33, 35, 13, 16, 27, -3, -23, 20, -23, -23, -24, 14, -34, -16, -3, 14, -26, 7, 14, 6, -10, 2, 6, -17, -25, -12, -22, -24, 
-29, 45, -46, 26, -4, 58, -18, 39, 32, 25, 6, 27, 26, -7, -11, 27, -18, -14, -25, 27, -35, -14, -8, 11, -32, 7, 7, -10, -21, 11, 4, -18, -4, 5, -20, -13, -20, 47, -47, 19, 0, 42, -23, 49, 26, 24, 6, 37, 17, -13, -2, 15, -29, -11, -14, 10, -36, -5, -3, -4, -30, 15, 0, -13, 
-7, 10, -9, -23, 4, 2, -32, -9, -11, -3, -6, 5, 17, 16, -4, 36, 25, 29, 16, 49, 19, 7, 10, 7, -6, -27, -10, -10, -36, -12, -17, -6, -18, 8, -8, -17, -4, 0, -3, -13, -4, -4, -20, -9, -9, -18, -8, 12, 2, -10, 17, 9, 31, 32, 37, 21, 38, 30, 21, 4, 20, -2, -10, -15, 
-4, -36, -18, -14, -20, -28, -4, -9, -14, -13, 5, -12, -10, -6, -5, -19, -9, -5, -12, -9, 28, -24, 5, 8, 26, 2, 31, 31, 20, 27, 39, 29, 12, 18, 20, -11, 4, -8, -11, -23, -8, -20, -23, -15, -5, -24, -11, -9, -8, -17, 0, -6, -10, -15, 3, -7, -2, -14, -5, 7, 2, 4, 1, 24, 
7, 30, 21, 20, 27, 34, 22, 17, 22, 17, 1, 0, -7, -10, -16, -10, -19, -17, -15, -7, -21, -12, -7, -11, -11, -11, -7, -10, -7, -4, -10, -8, -4, -9, -8, 2, 4, -3, 8, 4, 11, 12, 17, 21, 21, 22, 21, 23, 21, 21, 12, 7, 8, 0, -5, -6, -8, -13, -14, -12, -15, -12, -14, -13, 
-11, -11, -15, -12, -5, -12, -13, -6, 3, -10, -2, -2, 0, -1, 1, 0, 3, 5, 6, 4, 8, 13, 13, 10, 17, 13, 13, 12, 19, 12, 9, 10, 8, 4, 1, -4, -4, -6, -9, -13, -12, -13, -11, -10, -9, -8, -6, -6, -4, -6, -3, -4, -4, -7, -3, -7, -8, -1, -3, -4, 0, 4, 4, 3, 
9, 9, 9, 8, 12, 10, 9, 9, 8, 7, 5, 5, 3, 1, 2, 0, -1, -2, 1, -2, -1, -1, -2, -1, -1, -3, -2, -4, -6, -8, -6, -9, -9, -7, -6, -7, -7, -4, -2, -3, -1, 1, 4, 3, 6, 5, 6, 6, 5, 5, 3, 2, 2, 2, 3, -2, 0, 2, 1, 1, 2, 2, 0, 1, 
2, 0, 1, 1, -1, -2, 0, -2, -3, -1, -3, 0, -2, 0, 0, 2, 0, 0, 3, 4, 0, 0, 2, 0, -1, -1, 0, -2, -2, 0, -2, -1, 0, 1, -3, -2, -2, -4, -4, -4, -3, -5, -1, -2, -2, -2, 2, 0, 1, 1, 2, 2, 5, 2, 2, 6, 5, 3, 4, 5, 4, 1, 3, 4, 
1, 2, 2, 3, 3, 4, 2, 2, 1, 1, -2, -3, -5, -4, -6, -5, -7, -7, -6, -3, -6, -4, -2, -2, -1, 0, 0, -1, 0, 0, -1, -2, 1, -1, -2, 1, 3, 1, 1, 4, 3, 4, 5, 7, 5, 7, 6, 5, 4, 4, 2, 0, -1, -2, -3, -2, -2, -3, -3, -2, -1, -1, -2, 0, 
-1, -1, -1, -4, -3, -4, -4, -6, -4, -4, -5, -4, -2, -2, -2, 1, 0, 2, 4, 3, 4, 6, 5, 5, 6, 5, 4, 4, 3, 1, 0, -1, 0, 0, 1, 0, 3, 3, 2, 2, 0, -1, -1, -3, -4, -4, -5, -6, -6, -5, -6, -5, -6, -3, -3, -3, -3, 2, 1, 1, 3, 3, 5, 5, 
4, 3, 4, 3, 1, 2, 2, 2, 1, 3, 4, 3, 3, 3, 3, 1, 0, 0, 0, -3, -3, -3, -5, -5, -5, -6, -6, -3, -4, -4, -2, -1, -2, -1, 0, 1, 1, 1, 3, 3, 2, 3, 3, 4, 2, 3, 4, 4, 2, 4, 3, 3, 2, 2, 2, -1, -1, -2, -4, -3, -4, -4, -5, -4, 
-4, -3, -3, -2, -2, -2, 0, 0, -1, 0, 0, 1, -1, 1, 1, 2, 2, 3, 3, 4, 3, 4, 5, 4, 3, 3, 3, 1, 0, 0, -2, -3, -3, -4, -5, -4, -4, -4, -3, -2, -1, -1, 0, 0, 1, 0, 0, -1, -1, 0, 0, 0, -1, 1, 1, 1, 2, 3, 2, 4, 4, 4, 4, 3, 
3, 2, -1, -1, -2, -3, -5, -5, -6, -5, -5, -4, -4, -2, -1, 0, 1, 2, 2, 2, 2, 2, 1, 1, 0, 1, 0, 0, 0, 2, 1, 2, 3, 4, 4, 4, 4, 4, 2, 1, 0, -1, -3, -4, -4, -6, -6, -6, -5, -6, -5, -3, -3, -1, 0, 1, 1, 3, 3, 2, 2, 2, 2, 1, 
1, 2, 1, 2, 2, 2, 2, 3, 4, 4, 4, 4, 3, 3, 2, 1, 0, -2, -3, -4, -5, -5, -6, -5, -5, -5, -3, -2, -2, -1, 0, 0, 0, 1, 1, 1, 0, 2, 1, 1, 2, 2, 1, 4, 6, -8, -3, 1, -3, -1, -18, 60, -31, 25, -2, -1, 22, -2, 5, -15, 0, 4, -16, 4, 
-25, 42, -7, -6, -9, 7, -6, 5, -3, -10, -6, 2, -12, -3, -2, 1, 14, -10, -1, 8, -8, 29, -9, -2, -4, -2, -9, -13, 7, -4, 4, 22, -10, 15, 3, 15, 15, 12, 9, 8, 1, -4, 0, -4, -5, 5, -3, 5, 1, -4, -2, -8, -5, 6, 0, 8, 3, -1, -6, 7, -1, -8, 10, -12, 
0, 2, -3, -5, 13, -8, 2, -4, 15, -22, 12, -8, 10, -15, 4, 0, -4, -9, 1, -2, 9, -6, 5, -6, 3, 2, -5, 3, -8, 3, 11, -6, 2, -6, 4, -12, 11, 9, -13, 9, -4, -11, 6, -2, 10, -5, 16, -7, -6, 9, 0, 7, 0, 6, 0, 5, -7, -3, 3, -2, 0, 3, -8, -4, 
-10, -9, -3, -12, -12, 6, -7, -3, -17, 0, 2, 2, -1, 9, 15, 1, 9, -5, -5, 11, -7, 16, -12, 13, -2, 7, 19, 9, 9, 16, -5, -11, -5, 2, -10, -2, -10, -6, -17, 0, 0, -2, 4, -1, 14, -21, 1, -15, -2, 9, 10, -12, 0, -5, -2, -5, 11, -5, 5, 0, -4, -1, 0, -4, 
5, 3, -6, 21, -13, 17, -1, 1, 8, 0, -7, -2, 3, -4, -8, 1, 4, 6, 7, -1, 23, -1, 4, -10, -15, 9, -21, 2, -20, -5, -5, -9, -1, -3, 4, 8, 16, 3, -7, 17, -12, 20, 8, 2, 8, 4, -5, 1, -3, 2, -10, -19, -8, -9, -5, -14, 6, -7, 12, 7, 4, 8, 3, 21, 
-6, 17, 4, 3, 8, -5, -2, -5, -4, -8, -13, -11, -13, 6, -1, -5, 2, -3, 4, 17, -6, 2, 7, 18, -16, 7, 4, -8, 4, -11, -4, -14, 13, -17, 20, -15, 3, -1, -6, 9, -1, 3, -8, -6, 18, 8, 5, -25, 27, -27, -4, 8, 12, -19, 1, -12, 9, -13, 5, 8, -1, 8, 1, 0, 
10, 4, 19, -19, 16, 6, -12, -6, -6, 12, -22, 13, -4, -4, -10, -1, 9, 7, 3, 0, 14, 6, 5, 13, -1, 2, 22, -10, -12, 4, -10, -14, 1, -16, -3, -11, 4, -5, -5, 1, 6, 3, -12, 12, 9, -15, 3, 6, -13, 12, 11, -2, 9, -5, -5, 0, -12, 5, -9, 0, 9, -2, -9, 15, 
7, -8, 9, 9, -9, 15, -6, 6, -2, -5, -1, -6, -7, -7, -3, 3, -7, 3, -7, 4, 3, 13, -4, 1, -5, 10, -12, 9, 3, -8, 16, 3, -8, 12, -1, 4, 2, -1, -8, 9, -13, 9, 7, 3, -7, 14, -18, 2, 8, -4, -8, -3, 2, 6, -9, 3, 7, -11, 4, 8, -12, 2, -2, -1, 
-10, 17, 7, -9, 1, 5, -1, -5, -1, 11, -7, -2, -6, 0, -8, -7, 4, -6, -4, 15, 0, -4, -3, 3, 7, -2, 0, 10, -11, 1, 0, -2, -5, 2, 5, -12, 1, -2, -8, 6, 4, -2, 4, 4, 1, 5, 2, 2, 10, 1, -4, -3, 1, -5, 3, 4, -14, 8, -9, -2, -7, 6, 8, -2, 
1, 3, 2, -2, 3, 8, -8, 7, 10, -14, -1, 4, -1, -7, -8, -5, 3, -8, -1, 4, -6, 8, -2, 4, 1, 6, 1, -3, 2, 1, -7, 8, 4, 0, 0, 2, 6, 4, -8, 4, 1, 0, -3, 2, 4, -10, 4, 7, -4, 3, -2, 0, 0, 3, 7, 0, -2, 4, 8, -3, -2, 2, -9, -4, 
2, -1, 1, -4, 4, -3, 3, 4, -3, 5, -2, 4, 1, -5, 1, -1, -5, 0, -2, -5, 4, -5, 5, -9, -1, -4, -3, -3, -1, -3, -2, 0, 2, 4, 0, 3, 1, -1, 6, 0, 2, 2, 5, 1, 4, 5, 3, 8, 2, 4, 4, 2, 1, 2, -6, -1, -2, -6, -6, -6, -8, -10, -8, -10, 
-14, -7, -8, -12, -8, -2, -2, -3, -4, 5, 1, 44, 24, 19, 44, 58, 24, 26, 43, 24, -1, 1, -5, -29, -49, -39, -40, -59, -44, -31, -33, -41, -19, -7, -9, -11, 11, 12, 3, 10, 14, 17, 50, 52, 24, 49, 78, 36, 24, 37, 36, -8, -16, -14, -31, -59, -45, -38, -46, -26, -9, -11, 1, 10, 
13, 14, 14, 4, -3, -12, -19, -29, -39, -40, -45, -48, -19, 3, 26, 18, 39, 66, 70, 48, 69, 66, 37, 7, 1, -18, -42, -57, -53, -59, -49, -37, -22, -14, 4, 13, 27, 29, 25, 18, 19, 9, -10, -15, -18, -42, -71, -29, -20, -22, -8, 16, 37, 36, 64, 56, 67, 56, 53, 23, 14, 3, -18, -37, 
-37, -34, -43, -35, -18, -21, -12, -1, 8, -3, 11, 7, 7, 3, -6, -11, -18, -32, -32, -40, -8, 7, -7, -8, 47, 45, 24, 32, 62, 38, 10, 6, 12, -11, -29, -29, -19, -26, -20, -16, 3, -1, 6, 13, 11, 10, 9, 12, -6, -4, -17, -22, -33, -36, -40, -40, -2, 18, -6, 1, 53, 48, 13, 39, 
65, 34, 2, 7, 7, -16, -33, -31, -27, -32, -26, -21, -5, 0, 5, 11, 21, 16, 16, 15, 11, 4, -7, -19, -26, -35, -51, -34, 6, -12, -18, 21, 58, 21, 22, 57, 55, 17, 5, 13, -3, -21, -29, -25, -22, -24, -18, -12, -4, 5, 3, 5, 16, 14, 4, 0, 7, -7, -23, -21, -19, -46, -14, 23, 
-9, -22, 33, 57, 5, 14, 52, 41, 0, 1, 4, -14, -23, -28, -26, -18, -11, -12, -4, 11, 18, 7, 13, 20, 9, -5, 0, -7, -25, -35, -28, -36, -47, 7, 19, -15, 11, 71, 49, 14, 45, 54, 19, -6, 5, -11, -31, -31, -32, -30, -17, -9, -14, 4, 17, 17, 4, 17, 17, 1, -8, 2, -17, -34, 
-29, -25, -49, -5, 32, -10, -8, 53, 59, 5, 31, 52, 28, -14, 5, -4, -27, -34, -26, -32, -21, -6, -10, -2, 22, 23, 6, 14, 24, 5, -9, 1, -6, -29, -36, -22, -42, -7, 28, -5, -14, 46, 54, 5, 26, 47, 27, -16, -5, -6, -26, -35, -25, -29, -19, -8, 0, 1, 23, 26, 16, 17, 21, 7, 
-9, -3, -12, -28, -35, -30, -43, -12, 35, -5, -4, 44, 66, 5, 30, 45, 34, -14, -7, -9, -27, -42, -39, -37, -28, -18, -13, 0, 21, 27, 16, 23, 27, 14, -1, 2, -6, -22, -36, -27, -41, -14, 33, -6, -7, 41, 66, 3, 32, 43, 33, -13, -7, -10, -24, -41, -38, -35, -26, -13, -15, -6, 22, 29, 
12, 17, 28, 12, -8, -4, -6, -23, -37, -30, -39, -3, 26, -9, 4, 51, 65, 4, 41, 40, 31, -14, -7, -18, -26, -43, -37, -36, -25, -5, -10, -2, 24, 32, 15, 19, 25, 13, -11, -8, -18, -24, -44, -33, -49, 9, 16, -9, 8, 65, 55, 11, 45, 44, 28, -15, -7, -21, -28, -48, -40, -35, -22, -4, 
-8, 3, 27, 33, 17, 24, 25, 11, -15, -11, -17, -30, -45, -31, -47, 9, 16, -4, 6, 69, 54, 13, 43, 40, 30, -16, -11, -27, -23, -54, -43, -34, -17, -2, -2, 5, 29, 43, 24, 18, 26, 15, -19, -17, -17, -32, -53, -36, -51, 14, 12, -5, 10, 76, 44, 16, 42, 42, 26, -18, -17, -28, -21, -58, 
-45, -30, -10, -4, 1, 12, 30, 40, 33, 17, 17, 13, -13, -28, -22, -30, -54, -42, -48, 31, 12, -3, 20, 87, 37, 28, 40, 41, 21, -18, -30, -36, -26, -59, -56, -39, -5, 0, -7, 12, 41, 39, 30, 21, 21, 12, -7, -27, -25, -30, -50, -43, -45, 51, 1, -3, 21, 99, 23, 33, 31, 42, 7, -17, 
-42, -39, -30, -50, -59, -41, 11, 12, -7, 11, 53, 44, 20, 16, 19, 1, -17, -36, -34, -38, -46, -50, -42, 61, 10, 6, 26, 108, 27, 44, 25, 35, 4, -10, -58, -54, -26, -41, -69, -45, 19, 20, -1, 15, 55, 52, 35, 10, 9, 2, -10, -52, -45, -47, -41, -56, -53, 44, 37, 8, 20, 95, 55, 48, 
32, 18, 14, 6, -48, -73, -26, -25, -57, -60, 3, 26, 19, 5, 29, 47, 53, 14, -11, -7, 6, -33, -52, -55, -36, -36, -50, 3, 43, 30, 18, 56, 61, 47, 50, 3, 5, 10, -5, -66, -42, -23, -13, -44, -19, 6, 25, 16, 18, 5, 31, 34, 3, -33, -10, -4, -17, -45, -42, -27, -20, 12, 5, 13, 
24, 38, 37, 29, 31, 13, 13, -5, 2, -24, -23, -18, -4, -16, 0, 5, 10, 11, 15, 1, -1, 0, 2, -23, -27, -19, -11, -20, -23, -23, -13, 39, -1, 21, 9, 35, 21, 41, 2, 10, 4, 10, -1, -19, -16, -9, -4, -4, 1, -5, 6, 9, 8, -1, -7, -9, 2, -18, -22, -29, -14, -16, -16, -32, 
1, 26, 15, 23, 9, 37, 37, 45, 4, 10, 1, 20, -13, -27, -25, -9, -10, -10, -13, -6, 9, 8, 8, -2, 3, 1, 3, -16, -13, -21, -7, -20, -16, -33, -8, 21, 6, 21, 3, 29, 29, 50, 6, 15, -1, 27, -1, -18, -26, -8, -5, -3, -16, -12, 3, 11, 6, -8, -2, 3, 4, -14, -16, -25, 
-3, -20, -15, -35, -12, 25, 10, 16, 3, 29, 30, 51, 5, 14, 0, 23, 2, -18, -28, -12, -6, -2, -12, -17, 2, 12, 10, -6, -3, 3, 6, -7, -13, -24, -4, -14, -15, -34, -22, 21, 9, 15, 1, 18, 29, 50, 14, 12, 4, 19, 12, -13, -27, -15, -6, -2, -9, -20, 0, 9, 12, -4, -4, 0, 
9, -6, -10, -26, -7, -13, -15, -33, -28, 15, 9, 14, 1, 12, 30, 48, 22, 11, 10, 17, 18, -8, -23, -18, -6, -2, -10, -23, -5, 6, 10, -4, -8, -3, 11, -3, -9, -24, -6, -7, -12, -27, -29, 6, 19, 10, 4, 0, 33, 41, 29, 2, 14, 11, 24, -6, -21, -17, -4, -1, -6, -19, -8, 6, 
11, -1, -10, -7, 8, -1, -8, -26, -12, -5, -10, -23, -28, -1, 26, 14, 12, -6, 32, 37, 37, -3, 12, 4, 24, -4, -22, -24, -5, 0, -4, -19, -10, 8, 12, 4, -7, -8, 6, 1, -8, -23, -17, -3, -10, -20, -28, -8, 26, 12, 15, -9, 28, 32, 41, -4, 12, 1, 24, 0, -19, -26, -4, 1, 
-2, -18, -13, 8, 9, 6, -6, -8, 6, 3, -10, -16, -18, -2, -10, -17, -27, -12, 23, 9, 16, -9, 24, 29, 43, -1, 12, 3, 24, 6, -17, -24, -5, 2, -2, -17, -19, 6, 7, 6, -11, -9, 4, 9, -10, -11, -17, 3, -9, -14, -25, -15, 20, 8, 12, -8, 17, 27, 40, 4, 10, 6, 23, 14, 
-13, -23, -6, 2, -3, -16, -23, 2, 5, 4, -10, -11, 5, 10, -9, -10, -16, 4, -7, -14, -26, -18, 16, 10, 4, -2, 8, 29, 38, 15, 5, 17, 18, 22, -11, -19, -9, 2, -5, -12, -27, -1, 4, 1, -8, -13, 1, 8, -8, -11, -16, -2, -2, -15, -24, -20, 4, 21, -3, 7, 1, 32, 30, 31, 
-3, 25, 16, 27, -7, -16, -10, 3, -8, -9, -26, -8, 6, -4, -6, -12, 0, 8, -5, -12, -8, -8, 4, -16, -19, -21, -6, 19, -2, 1, 0, 22, 26, 32, 1, 18, 21, 23, 8, -14, -7, 6, -4, -8, -16, -15, 10, -3, -9, -10, -3, 6, -5, -15, -8, -10, 0, -12, -20, -19, -14, 6, 10, -9, 
8, 7, 28, 24, 21, 4, 33, 16, 22, -9, -5, 2, 2, -12, -7, -21, 5, 1, -9, -11, -3, 1, 0, -14, -8, -7, -4, -4, -20, -13, -13, -7, 12, -8, 0, 8, 12, 21, 21, 10, 21, 23, 16, 12, -7, 4, 4, -6, -6, -11, -7, 4, -6, -9, -6, -4, 1, -9, -13, -7, -8, -5, -12, -17, 
-11, -13, -6, 9, -11, 9, 3, 14, 15, 21, 10, 23, 16, 20, 6, 0, 8, 2, -5, -2, -9, -2, -1, -3, -11, -4, -4, -2, -14, -10, -9, -8, -6, -14, -13, -12, -11, -5, 6, -13, 13, -1, 17, 10, 25, 9, 25, 14, 23, 4, 6, 8, 2, -1, -1, -6, -5, 1, -6, -10, -9, -2, -7, -14, 
-11, -8, -9, -4, -14, -8, -12, -9, -4, 1, -15, 13, -5, 15, 8, 25, 7, 26, 15, 25, 4, 13, 10, 3, 0, 3, -6, -1, 0, -8, -13, -5, -6, -7, -17, -9, -10, -4, -9, -13, -9, -9, -13, -7, -5, -13, 8, -6, 9, 6, 24, 12, 23, 16, 28, 11, 15, 12, 5, 5, 4, -1, -2, -2, 
-5, -11, -11, -5, -12, -15, -14, -8, -9, -8, -14, -5, -12, -11, -14, -4, -15, 1, -6, -2, 7, 18, 18, 14, 25, 26, 22, 14, 18, 7, 12, 5, 3, -2, -2, -3, -9, -12, -6, -11, -13, -12, -12, -5, -10, -8, -10, -9, -13, -14, -19, -3, -15, -5, -11, -5, 13, 14, 17, 20, 33, 26, 25, 11, 
14, 18, 14, -3, -2, 1, 1, -14, -11, -11, -6, -7, -8, -10, -1, -1, -11, -7, -8, -4, -20, -15, -26, -9, -2, -20, -14, 7, 22, 1, 17, 28, 33, 19, 22, 13, 20, 16, -2, -7, 5, -2, -16, -12, -7, -8, -8, -11, -1, 7, -4, -1, 3, 5, -10, -1, -13, -11, -19, -16, -27, 2, -9, -18, 
1, 22, 13, 9, 29, 23, 30, 16, 15, 14, 14, -6, -3, -1, -7, -10, -11, -11, -6, -9, -13, 3, -6, -11, -3, 1, -8, 0, -10, -8, -9, -14, -26, -4, 12, -20, -4, 11, 21, 9, 25, 18, 35, 22, 10, 17, 18, 1, -4, 2, -5, -4, -11, -10, -4, -7, -13, -6, -13, -8, -10, -7, -11, -6, 
-12, -5, -10, -13, -16, 1, 14, -13, -3, 12, 19, 6, 21, 17, 28, 13, 10, 13, 13, 0, 2, 1, 1, 0, -9, -4, 0, -7, -11, -5, -11, -10, -14, -4, -11, -8, -15, -5, -13, -12, -17, 4, 0, -16, 4, 11, 16, 5, 19, 22, 30, 10, 17, 19, 16, 4, 7, 6, 3, 0, -6, -4, -8, -11, 
-15, -13, -14, -13, -15, -6, -14, -8, -8, -3, -15, -12, -13, 4, -1, -15, 0, 9, 13, 6, 19, 20, 28, 14, 22, 21, 18, 8, 12, 9, 4, -4, -4, -4, -11, -16, -15, -11, -15, -14, -13, -8, -12, -5, -5, -5, -12, -8, -14, -11, -3, -19, -2, 0, 3, 5, 10, 21, 27, 21, 22, 27, 22, 14, 
13, 12, 7, 0, -3, -1, -11, -12, -11, -6, -14, -14, -10, -7, -9, -7, -6, -5, -13, -11, -12, -18, -16, -8, -16, -4, -8, 3, 8, 15, 25, 25, 23, 27, 27, 22, 15, 14, 10, 6, 0, -2, -4, -8, -8, -9, -5, -13, -10, -8, -8, -9, -10, -9, -8, -17, -12, -16, -17, -21, -10, -19, -10, -4, 
5, 11, 12, 22, 27, 26, 27, 25, 22, 19, 14, 11, 7, 5, 0, 1, -4, -3, -7, -6, -8, -13, -9, -11, -13, -12, -11, -12, -16, -18, -12, -18, -22, -15, -8, -18, -1, -6, 11, 7, 16, 22, 26, 26, 25, 27, 24, 19, 17, 14, 10, 8, 4, 1, -2, -6, -10, -9, -11, -17, -16, -13, -14, -16, 
-16, -13, -14, -13, -13, -17, -17, -18, -6, -19, -4, -4, 8, 7, 15, 22, 26, 29, 27, 31, 28, 23, 21, 18, 15, 9, 3, 3, -5, -8, -13, -15, -16, -17, -22, -17, -18, -15, -15, -11, -12, -14, -10, -12, -14, -20, -5, -9, -11, -6, 0, 12, 8, 23, 23, 33, 31, 34, 31, 28, 22, 19, 14, 10, 
0, -2, -5, -8, -16, -15, -16, -16, -21, -16, -15, -17, -15, -13, -7, -14, -12, -11, -12, -16, -18, -4, -10, -9, -2, 6, 13, 13, 26, 28, 33, 30, 31, 31, 24, 19, 14, 11, 4, -2, -2, -4, -9, -12, -13, -13, -18, -17, -18, -14, -19, -15, -15, -10, -14, -10, -10, -10, -13, -12, -10, -5, -13, 4, 
2, 15, 9, 22, 27, 30, 28, 27, 31, 22, 18, 15, 12, 7, 2, 2, -2, -7, -11, -12, -13, -19, -17, -19, -15, -19, -15, -11, -10, -11, -8, -5, -6, -11, -9, -14, -1, -12, -6, -1, 2, 10, 8, 22, 22, 29, 26, 29, 29, 20, 19, 15, 13, 5, 0, 0, -4, -10, -13, -12, -15, -20, -16, -18, 
-12, -16, -12, -7, -9, -7, -7, -4, -7, -11, -10, -14, -9, -12, -8, -1, 2, 10, 10, 23, 23, 29, 26, 29, 26, 21, 18, 15, 11, 6, 4, 1, -4, -8, -11, -11, -15, -18, -17, -16, -18, -13, -14, -7, -14, -6, -8, -5, -12, -10, -11, -12, -14, -5, -13, 0, -4, 14, 7, 19, 22, 27, 29, 28, 
29, 26, 23, 19, 15, 11, 5, 3, -2, -7, -10, -14, -14, -19, -19, -19, -18, -15, -16, -13, -9, -9, -8, -9, -8, -9, -11, -12, -16, -11, -11, -8, -1, 4, 15, 12, 25, 27, 32, 30, 32, 32, 27, 21, 18, 14, 7, 2, -1, -7, -11, -16, -16, -19, -21, -20, -16, -19, -15, -15, -11, -10, -11, -10, 
-8, -10, -10, -11, -10, -14, -7, -6, -3, 3, 8, 18, 17, 27, 30, 34, 33, 31, 31, 23, 19, 16, 9, 4, -2, -6, -11, -15, -18, -19, -22, -22, -22, -19, -21, -16, -15, -11, -12, -8, -6, -5, -6, -6, -7, -6, -11, -3, -1, -3, 7, 8, 21, 16, 27, 31, 33, 32, 29, 31, 22, 18, 14, 7, 
2, -6, -7, -15, -18, -23, -21, -24, -26, -24, -21, -18, -15, -15, -8, -7, -5, -3, -2, -3, -2, -5, -6, -8, -6, 2, -6, 8, 9, 20, 19, 25, 33, 32, 32, 29, 31, 22, 15, 12, 4, 0, -10, -9, -18, -20, -23, -23, -24, -27, -22, -19, -18, -14, -11, -6, -4, -3, -2, 2, -2, -2, -3, -5, 
-7, -9, 7, -2, -1, 10, 16, 18, 20, 31, 30, 33, 27, 29, 26, 14, 13, 6, 1, -9, -11, -15, -19, -23, -26, -21, -26, -25, -19, -17, -14, -11, -6, -3, 1, -1, 3, 4, -3, -3, -3, -6, -13, -5, 4, -10, 6, 12, 19, 16, 28, 33, 32, 32, 26, 30, 21, 11, 8, 3, -6, -14, -13, -21, 
-24, -27, -25, -26, -24, -20, -19, -12, -8, -5, -2, 4, 2, 2, 6, 1, -3, -6, -5, -11, -18, 4, -2, -7, 4, 21, 18, 17, 36, 37, 34, 30, 31, 28, 17, 11, 3, -1, -12, -18, -21, -25, -27, -32, -27, -26, -24, -20, -14, -6, -5, -2, 4, 9, 4, 1, 5, 0, -6, -13, -10, -18, -14, 4, 
-6, -2, 13, 31, 18, 26, 46, 44, 33, 29, 38, 22, 7, 3, -2, -13, -24, -22, -31, -33, -33, -32, -30, -23, -15, -16, -8, 5, 6, 2, 9, 14, 3, -1, 0, -4, -17, -20, -18, -24, -3, 0, -4, 2, 33, 37, 26, 38, 53, 49, 29, 27, 31, 16, 3, -10, -15, -22, -26, -36, -40, -36, -32, -32, 
-32, -15, -6, -6, -2, 11, 14, 10, 10, 8, 0, -3, -9, -17, -24, -23, -29, -13, 2, 2, 3, 21, 44, 42, 40, 48, 54, 48, 33, 26, 15, 6, -5, -19, -32, -36, -31, -42, -49, -46, -30, -26, -24, -12, 1, 8, 15, 17, 18, 16, 17, 6, -7, -13, -17, -24, -34, -36, -30, -3, 8, 5, 11, 41, 
57, 56, 53, 56, 57, 49, 36, 17, -3, -9, -17, -33, -52, -49, -46, -50, -51, -42, -31, -23, -3, 10, 14, 15, 30, 34, 24, 15, 8, -4, -16, -21, -30, -44, -43, -40, -30, -5, 14, 24, 25, 47, 66, 73, 69, 61, 54, 43, 33, 15, -11, -30, -39, -45, -58, -61, -63, -59, -51, -37, -26, -15, 4, 23, 
31, 35, 39, 39, 32, 25, 9, -10, -27, -32, -38, -47, -52, -50, -45, -17, 15, 34, 36, 45, 64, 80, 84, 79, 63, 42, 27, 19, -1, -32, -55, -66, -71, -72, -67, -65, -61, -49, -26, -4, 14, 29, 42, 48, 54, 53, 46, 29, 10, -11, -27, -40, -48, -58, -64, -63, -53, -41, -12, 23, 48, 56, 69, 81, 
89, 91, 90, 73, 45, 18, -1, -22, -44, -62, -78, -90, -90, -76, -61, -50, -39, -19, 2, 22, 48, 66, 69, 59, 54, 47, 31, 12, -12, -40, -63, -68, -67, -68, -67, -60, -47, -29, 7, 51, 82, 89, 94, 95, 94, 95, 94, 71, 35, -3, -31, -56, -73, -81, -91, -103, -102, -83, -57, -32, -9, 10, 24, 40, 
61, 80, 84, 76, 57, 33, 6, -15, -33, -52, -71, -81, -84, -77, -62, -44, -26, -10, 18, 56, 90, 109, 113, 107, 94, 82, 71, 55, 27, -7, -42, -76, -102, -108, -105, -100, -92, -74, -54, -31, -3, 28, 51, 65, 74, 78, 77, 70, 58, 36, 8, -22, -48, -69, -80, -80, -74, -65, -57, -44, -23, 1, 24, 52, 
83, 106, 113, 111, 98, 78, 57, 40, 21, -6, -39, -70, -98, -115, -114, -101, -85, -68, -44, -21, 0, 25, 50, 68, 78, 80, 78, 66, 52, 35, 13, -12, -34, -56, -72, -81, -76, -66, -52, -36, -18, -1, 17, 34, 51, 77, 98, 108, 100, 82, 55, 28, 10, -3, -19, -40, -63, -87, -107, -109, -94, -71, -46, -19, 
3, 18, 31, 47, 60, 71, 78, 75, 60, 41, 21, 1, -19, -34, -47, -61, -69, -70, -63, -51, -32, -13, 5, 22, 36, 40, 47, 63, 80, 86, 81, 63, 34, 7, -9, -20, -31, -39, -51, -69, -86, -90, -81, -60, -29, 6, 27, 36, 40, 42, 43, 50, 59, 59, 51, 36, 16, -10, -30, -42, -49, -54, -51, -50, 
-49, -44, -31, -17, 0, 18, 31, 35, 35, 45, 55, 61, 65, 64, 49, 25, 3, -13, -26, -31, -36, -46, -63, -72, -73, -63, -43, -10, 17, 35, 45, 46, 39, 35, 37, 40, 41, 39, 28, 6, -17, -37, -53, -61, -57, -49, -40, -35, -29, -26, -18, -2, 16, 31, 36, 42, 49, 55, 61, 63, 57, 42, 22, 7, 
-8, -20, -31, -41, -55, -66, -69, -63, -48, -26, 0, 20, 36, 43, 46, 42, 38, 34, 30, 28, 24, 14, -5, -26, -49, -63, -66, -59, -49, -37, -26, -18, -11, -1, 11, 22, 32, 36, 44, 52, 60, 62, 58, 45, 29, 14, 3, -9, -20, -32, -44, -55, -61, -60, -53, -38, -17, 6, 25, 38, 45, 42, 34, 27, 
21, 17, 16, 13, 4, -12, -29, -45, -57, -58, -51, -38, -25, -12, -3, 4, 9, 14, 19, 24, 27, 33, 43, 49, 52, 51, 41, 28, 14, 6, -4, -13, -22, -31, -43, -53, -56, -53, -43, -25, -3, 15, 29, 34, 32, 24, 18, 13, 11, 13, 15, 12, 1, -13, -29, -44, -49, -45, -36, -23, -11, -1, 3, 5, 
5, 7, 12, 17, 22, 34, 45, 52, 53, 52, 40, 27, 13, 4, -9, -16, -27, -39, -54, -60, -61, -55, -41, -16, 6, 23, 32, 36, 29, 23, 18, 17, 17, 19, 19, 12, 0, -16, -33, -46, -51, -46, -35, -21, -9, -2, 0, 1, 4, 8, 13, 16, 22, 35, 46, 53, 57, 53, 40, 24, 10, -1, -15, -23, 
-33, -44, -55, -57, -55, -46, -30, -7, 10, 26, 35, 39, 32, 27, 20, 15, 13, 16, 15, 8, -2, -17, -35, -48, -53, -51, -40, -23, -8, 0, 5, 7, 5, 4, 6, 7, 12, 28, 45, 55, 60, 57, 43, 27, 14, 4, -10, -17, -25, -35, -47, -50, -52, -49, -38, -17, -1, 16, 30, 36, 32, 26, 19, 13, 
11, 15, 18, 14, 8, -5, -24, -41, -51, -54, -48, -34, -18, -7, 0, 2, 0, -4, 0, 4, 9, 24, 45, 58, 67, 70, 63, 46, 31, 16, 0, -15, -23, -34, -45, -54, -58, -63, -58, -44, -22, -3, 22, 37, 43, 39, 37, 28, 20, 19, 22, 18, 14, 5, -14, -38, -57, -70, -73, -63, -43, -23, -7, 5, 
10, 9, 9, 13, 18, 24, 41, 58, 70, 76, 74, 58, 36, 17, 0, -16, -26, -32, -43, -53, -59, -61, -62, -50, -29, -5, 19, 44, 55, 55, 46, 37, 21, 11, 5, 5, 0, -4, -15, -32, -53, -66, -75, -73, -58, -35, -11, 10, 23, 28, 25, 23, 22, 22, 25, 30, 40, 49, 55, 55, 48, 33, 20, 6, 
-3, -14, -18, -27, -34, -42, -44, -45, -39, -27, -9, 7, 25, 36, 37, 31, 21, 8, -3, -8, -11, -11, -11, -14, -22, -33, -44, -50, -53, -45, -29, -9, 9, 22, 27, 26, 20, 14, 9, 11, 14, 17, 26, 37, 47, 51, 54, 48, 39, 27, 17, 3, -9, -20, -31, -42, -48, -51, -50, -42, -28, -12, 2, 14, 
19, 18, 13, 7, 0, -3, -5, -4, -5, -4, -8, -14, -24, -29, -34, -33, -26, -14, -2, 9, 15, 16, 14, 11, 10, 11, 14, 17, 20, 27, 36, 45, 51, 55, 51, 43, 32, 20, 3, -14, -29, -44, -53, -55, -53, -49, -38, -26, -14, -5, 4, 8, 10, 8, 8, 5, 4, 2, 2, 0, 2, 0, -2, -6, 
-10, -16, -19, -21, -19, -16, -11, -5, -1, 3, 6, 8, 9, 11, 13, 16, 18, 21, 29, 38, 49, 57, 60, 54, 42, 26, 7, -13, -28, -41, -49, -53, -52, -51, -46, -39, -30, -22, -11, 0, 10, 16, 21, 21, 18, 14, 11, 8, 5, 5, 1, -3, -9, -16, -26, -32, -36, -34, -30, -20, -9, 2, 11, 18, 
21, 22, 23, 25, 27, 30, 30, 27, 30, 34, 38, 43, 45, 42, 32, 19, 5, -14, -29, -41, -49, -54, -52, -49, -44, -37, -27, -20, -12, -4, 3, 7, 10, 12, 11, 9, 7, 5, 1, -1, -2, -4, -8, -10, -15, -20, -24, -24, -22, -15, -5, 7, 18, 27, 33, 34, 32, 30, 26, 25, 26, 26, 23, 26, 
31, 35, 37, 39, 32, 20, 6, -7, -25, -38, -48, -55, -59, -57, -53, -50, -45, -34, -25, -16, -4, 5, 10, 14, 19, 18, 17, 17, 16, 11, 9, 5, 0, -8, -12, -18, -22, -22, -18, -12, -3, 9, 20, 28, 34, 37, 35, 31, 28, 24, 21, 20, 18, 12, 4, 1, -1, -2, 4, 11, 15, 16, 12, 3, 
-11, -25, -34, -43, -47, -47, -45, -43, -38, -32, -26, -19, -8, 0, 8, 15, 22, 23, 24, 22, 18, 11, 6, 2, -1, -4, -4, -7, -9, -10, -9, -8, -3, 4, 12, 19, 26, 30, 28, 25, 20, 14, 8, 5, 2, 1, 0, -2, -4, -1, 4, 12, 20, 26, 26, 20, 11, -1, -17, -29, -38, -44, -47, -44, 
-41, -36, -31, -24, -19, -11, -4, 4, 9, 15, 19, 22, 21, 19, 16, 11, 7, 6, 4, 1, -1, -5, -9, -12, -12, -11, -7, 0, 7, 12, 17, 19, 18, 15, 13, 10, 8, 8, 8, 8, 7, 5, 1, 2, 8, 15, 23, 32, 35, 31, 20, 7, -11, -28, -40, -47, -52, -51, -48, -46, -44, -38, -30, -21, 
-8, 7, 20, 31, 39, 40, 36, 28, 20, 8, -1, -6, -10, -15, -17, -20, -24, -27, -25, -21, -13, -1, 13, 24, 32, 36, 35, 30, 26, 22, 19, 19, 19, 18, 15, 10, 3, -6, -14, -13, -4, 6, 19, 29, 28, 21, 9, -5, -22, -33, -41, -45, -47, -43, -41, -40, -39, -34, -28, -18, -4, 9, 19, 26, 
27, 21, 13, 4, -2, -7, -6, -3, 0, -1, -1, -5, -9, -11, -6, 1, 12, 24, 35, 40, 42, 39, 34, 27, 24, 21, 19, 17, 15, 7, -1, -10, -18, -22, -23, -21, -10, 3, 16, 26, 29, 22, 10, -6, -21, -35, -44, -50, -53, -57, -57, -58, -55, -49, -36, -21, -3, 15, 29, 36, 38, 36, 30, 23, 
20, 19, 18, 17, 16, 12, 4, -3, -9, -11, -8, 1, 11, 22, 31, 36, 34, 31, 24, 18, 12, 10, 8, 5, 1, -5, -14, -23, -28, -29, -27, -20, -14, -10, -3, 6, 12, 16, 20, 19, 13, 4, -5, -18, -31, -41, -50, -56, -56, -50, -43, -32, -16, 1, 16, 31, 41, 46, 45, 43, 38, 31, 24, 18, 
8, 0, -8, -14, -21, -22, -21, -16, -10, 0, 9, 17, 22, 27, 29, 29, 27, 23, 17, 11, 3, -6, -14, -20, -26, -29, -28, -24, -21, -14, -9, -5, -2, -1, 0, 8, 18, 30, 40, 42, 37, 25, 7, -10, -27, -39, -45, -47, -46, -41, -36, -31, -25, -13, -1, 14, 27, 38, 41, 39, 32, 22, 10, 0, 
-7, -12, -15, -14, -14, -14, -13, -11, -9, -4, 3, 10, 17, 21, 24, 22, 18, 13, 8, 2, 0, -2, -3, -3, -3, -4, -4, -3, -1, 1, 6, 10, 13, 14, 14, 11, 8, 1, 3, 8, 15, 19, 22, 15, 3, -12, -28, -43, -52, -53, -51, -45, -37, -28, -22, -17, -8, 2, 12, 23, 30, 31, 25, 16, 
3, -9, -18, -19, -19, -14, -7, -2, 0, 3, 7, 12, 20, 31, 41, 48, 51, 49, 41, 29, 16, 4, -7, -13, -17, -18, -19, -19, -20, -20, -17, -13, -8, 0, 7, 12, 14, 14, 11, 7, 1, -4, -10, -14, -9, -5, 1, 5, 4, -5, -18, -29, -36, -43, -40, -33, -25, -20, -11, -6, -2, 3, 14, 20, 
28, 33, 34, 26, 17, 6, -4, -12, -12, -9, -4, 0, 5, 5, 4, 4, 7, 12, 20, 30, 35, 36, 32, 23, 11, -1, -9, -14, -16, -14, -12, -13, -14, -14, -16, -14, -10, -4, 1, 6, 7, 5, 2, 0, -3, -4, -5, -4, -5, -5, -7, -10, -8, -3, 3, 9, 14, 17, 12, 6, -1, -9, -15, -17, 
-18, -19, -19, -17, -16, -13, -7, 1, 7, 14, 19, 19, 16, 13, 9, 4, 2, 2, 1, -1, -3, -5, -9, -11, -10, -6, -1, 8, 15, 20, 22, 23, 19, 15, 11, 8, 4, 2, -1, -5, -10, -13, -15, -16, -13, -9, -5, -1, 1, 1, -1, 0, 1, 5, 8, 11, 10, 8, 5, 2, -3, -6, -2, 2, 
8, 12, 14, 10, 2, -6, -14, -21, -24, -24, -24, -24, -23, -22, -22, -20, -15, -8, 0, 9, 15, 18, 17, 16, 12, 9, 7, 7, 6, 5, 3, 1, -4, -5, -6, -4, 1, 8, 15, 19, 21, 19, 14, 10, 6, 4, 4, 5, 5, 4, 1, -2, -5, -6, -6, -4, -1, 1, 1, 0, -3, -5, -6, -5, 
-3, -1, 0, -1, -2, -4, -5, -5, -3, 1, 8, 14, 18, 17, 12, 3, -6, -16, -24, -29, -32, -33, -33, -32, -30, -26, -20, -12, -2, 7, 16, 21, 23, 21, 18, 14, 10, 8, 7, 6, 6, 5, 4, 1, 1, 1, 4, 8, 14, 19, 22, 22, 21, 17, 12, 7, 4, 1, 0, -1, -3, -5, -7, -8, 
-9, -9, -7, -5, -3, -1, -1, -2, -3, -3, -3, -2, -3, -4, -6, -8, -9, -9, -9, -8, -6, -4, 1, 6, 9, 11, 9, 6, 0, -5, -10, -15, -18, -20, -19, -20, -19, -17, -15, -12, -7, -1, 4, 9, 12, 13, 13, 12, 10, 10, 9, 10, 11, 11, 11, 10, 10, 10, 11, 13, 14, 15, 14, 13, 
10, 6, 1, -3, -6, -8, -8, -8, -7, -6, -5, -4, -4, -3, -1, 0, 1, 2, 1, 1, 0, -1, -2, -2, -3, -3, -4, -4, -5, -5, -4, -3, -3, -3, -1, 1, 3, 6, 7, 6, 4, 0, -6, -12, -17, -21, -23, -23, -21, -19, -17, -14, -11, -8, -4, 1, 5, 8, 11, 11, 10, 8, 6, 6, 
6, 7, 9, 12, 16, 19, 19, 19, 19, 17, 15, 14, 13, 11, 10, 8, 5, 2, 0, -1, -1, 0, 1, 1, 1, 0, -3, -6, -8, -9, -10, -11, -10, -10, -11, -11, -12, -12, -12, -10, -7, -4, -1, 1, 1, 1, -1, -3, -3, -2, 0, 3, 5, 4, 1, -4, -10, -16, -19, -21, -21, -19, -15, -12, 
-8, -4, 0, 5, 10, 15, 18, 20, 19, 16, 12, 9, 6, 5, 5, 7, 8, 9, 9, 9, 7, 7, 7, 8, 10, 12, 13, 12, 11, 8, 5, 2, 0, -1, -1, -1, -1, -2, -4, -5, -7, -8, -9, -9, -8, -7, -7, -8, -9, -10, -10, -9, -8, -6, -4, -3, -2, -3, -4, -5, -4, -2, 1, 3, 
3, 1, -2, -6, -11, -15, -17, -18, -17, -14, -11, -8, -5, -2, 1, 5, 8, 11, 13, 13, 14, 13, 13, 12, 11, 11, 12, 13, 13, 16, 13, 15, 11, 12, 9, 8, 7, 5, 6, 4, 5, 4, 5, 3, 4, 3, 3, 3, 1, -1, -4, -6, -10, -11, -14, -14, -16, -16, -17, -16, -14, -12, -11, -9, 
-8, -8, -7, -7, -6, -5, -4, -3, -3, -4, -4, -4, -4, -3, -3, -2, -1, 0, 1, 2, 2, 3, 3, 4, 4, 4, 4, 5, 5, 5, 6, 7, 8, 10, 10, 11, 11, 11, 11, 10, 9, 9, 8, 7, 7, 6, 5, 4, 3, 2, 1, 1, 0, 0, 0, 0, -1, -2, -3, -3, -4, -4, -4, -5, 
-5, -7, -8, -9, -10, -11, -10, -10, -9, -8, -8, -7, -7, -6, -6, -5, -4, -2, -1, 0, 0, 0, 0, -1, -1, -2, -2, -1, -1, 0, 1, 2, 3, 4, 4, 5, 6, 6, 7, 6, 6, 6, 5, 4, 4, 3, 2, 2, 1, 1, 1, 1, 1, 1, 1, 2, 3, 3, 3, 4, 4, 3, 2, 2, 
1, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, -1, -1, -2, -3, -4, -4, -4, -4, -4, -4, -4, -3, -3, -3, -2, -2, -2, -2, -2, -2, -2, -2, -3, -3, -3, -4, -4, -4, -3, -3, -3, -3, -3, -3, -3, -3, -2, -1, -1, 1, 2, 3, 4, 5, 6, 7, 7, 6, 6, 5, 
4, 4, 3, 2, 2, 2, 3, 3, 4, 4, 4, 4, 3, 3, 2, 2, 2, 2, 1, 1, 1, 0, -1, -2, -2, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -2, -2, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -2, -2, -2, -1, -1, -1, -1, -1, -1, -1, -2, -2, -2, -2, 
-1, -1, -1, 0, 0, 0, 0, 1, 1, 1, 1, 1, 2, 2, 2, 2, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 1, 1, 0, 0, -1, -1, -1, -2, 
-2, -2, -2, -2, -2, -2, -2, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, -1, -1, -2, -2, -3, -3, -4, -3, -3, -3, -2, -2, -1, 0, 1, 1, 2, 2, 2, 2, 
2, 3, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -2, -2, -2, -2, -2, -2, -2, -2, -2, -1, -1, -1, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0, -1, -1, -1, 0, 0, 0, 
0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 
2, 1, 1, 0, };

/*************************************************
 * Public Constants
 *************************************************/

#define NOTE_B0  31
#define NOTE_C1  33
#define NOTE_CS1 35
#define NOTE_D1  37
#define NOTE_DS1 39
#define NOTE_E1  41
#define NOTE_F1  44
#define NOTE_FS1 46
#define NOTE_G1  49
#define NOTE_GS1 52
#define NOTE_A1  55
#define NOTE_AS1 58
#define NOTE_B1  62
#define NOTE_C2  65
#define NOTE_CS2 69
#define NOTE_D2  73
#define NOTE_DS2 78
#define NOTE_E2  82
#define NOTE_F2  87
#define NOTE_FS2 93
#define NOTE_G2  98
#define NOTE_GS2 104
#define NOTE_A2  110
#define NOTE_AS2 117
#define NOTE_B2  123
#define NOTE_C3  131
#define NOTE_CS3 139
#define NOTE_D3  147
#define NOTE_DS3 156
#define NOTE_E3  165
#define NOTE_F3  175
#define NOTE_FS3 185
#define NOTE_G3  196
#define NOTE_GS3 208
#define NOTE_A3  220
#define NOTE_AS3 233
#define NOTE_B3  247
#define NOTE_C4  262
#define NOTE_CS4 277
#define NOTE_D4  294
#define NOTE_DS4 311
#define NOTE_E4  330
#define NOTE_F4  349
#define NOTE_FS4 370
#define NOTE_G4  392
#define NOTE_GS4 415
#define NOTE_A4  440
#define NOTE_AS4 466
#define NOTE_B4  494
#define NOTE_C5  523
#define NOTE_CS5 554
#define NOTE_D5  587
#define NOTE_DS5 622
#define NOTE_E5  659
#define NOTE_F5  698
#define NOTE_FS5 740
#define NOTE_G5  784
#define NOTE_GS5 831
#define NOTE_A5  880
#define NOTE_AS5 932
#define NOTE_B5  988
#define NOTE_C6  1047
#define NOTE_CS6 1109
#define NOTE_D6  1175
#define NOTE_DS6 1245
#define NOTE_E6  1319
#define NOTE_F6  1397
#define NOTE_FS6 1480
#define NOTE_G6  1568
#define NOTE_GS6 1661
#define NOTE_A6  1760
#define NOTE_AS6 1865
#define NOTE_B6  1976
#define NOTE_C7  2093
#define NOTE_CS7 2217
#define NOTE_D7  2349
#define NOTE_DS7 2489
#define NOTE_E7  2637
#define NOTE_F7  2794
#define NOTE_FS7 2960
#define NOTE_G7  3136
#define NOTE_GS7 3322
#define NOTE_A7  3520
#define NOTE_AS7 3729
#define NOTE_B7  3951
#define NOTE_C8  4186
#define NOTE_CS8 4435
#define NOTE_D8  4699
#define NOTE_DS8 4978
