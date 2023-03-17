/*************************************************
 * Public Constants
 *************************************************/

#define B0  31
#define C1  33
#define CS1 35
#define D1  37
#define DS1 39
#define E1  41
#define F1  44
#define FS1 46
#define G1  49
#define GS1 52
#define A1  55
#define AS1 58
#define B1  62
#define C2  65
#define CS2 69
#define D2  73
#define DS2 78
#define E2  82
#define F2  87
#define FS2 93
#define G2  98
#define GS2 104
#define A2  110
#define AS2 117
#define B2  123
#define C3  131
#define CS3 139
#define D3  147
#define DS3 156
#define E3  165
#define F3  175
#define FS3 185
#define G3  196
#define GS3 208
#define A3  220
#define AS3 233
#define B3  247
#define C4  262
#define CS4 277
#define D4  294
#define DS4 311
#define E4  330
#define F4  349
#define FS4 370
#define G4  392
#define GS4 415
#define A4  440
#define AS4 466
#define B4  494
#define C5  523
#define CS5 554
#define D5  587
#define DS5 622
#define E5  659
#define F5  698
#define FS5 740
#define G5  784
#define GS5 831
#define A5  880
#define AS5 932
#define B5  988
#define C6  1047
#define CS6 1109
#define D6  1175
#define DS6 1245
#define E6  1319
#define F6  1397
#define FS6 1480
#define G6  1568
#define GS6 1661
#define A6  1760
#define AS6 1865
#define B6  1976
#define C7  2093
#define CS7 2217
#define D7  2349
#define DS7 2489
#define E7  2637
#define F7  2794
#define FS7 2960
#define G7  3136
#define GS7 3322
#define A7  3520
#define AS7 3729
#define B7  3951
#define C8  4186
#define CS8 4435
#define D8  4699
#define DS8 4978

#define EUP 329.628
#define GUP 391.995
#define AUP 440.767
#define ASHARPUP 466.164
#define BUP 493.883
#define C 523.251
#define D 587.33
#define DSHARP 622.254
#define E 659.255
#define F 698
#define G 783.991
#define A 880

               // E(up)     G (up)   A(up)    A#(up)    B(up)    C        D        D#       E      F     G      A
float tones[] = {329.628, 391.995, 440.767, 466.164, 493.883, 523.251, 587.33, 622.254, 659.255, 698, 783.991, 880  };          //set the frequencies of the musical notes desired
             //    1         2       3        4        5       6        7        8       9        10       11        12

float tones2[] = {261.626, 277.183, 293.665, 311.127, 329.628, 349.228, 369.994, 391.995, 415.305, 440, 466.164, 493.883};      //second set of notes
 //                   C       C#       D         D#        E       F          F#        G        G#    A    A#       B
