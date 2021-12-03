#pragma once
#ifdef _REST
#undef _REST
#define _REST 1.00f
#endif
#ifdef TEMPO_DEFAULT
//#undef TEMPO_DEFAULT
//#define TEMPO_DEFAULT 60
#endif
#ifdef ALL_STAR
#undef ALL_STAR
#undef E1M1_DOOM
#endif
#define SCORE \
      H__NOTE(_C4), H__NOTE(_G4), H__NOTE(_C5), W__NOTE(_EF5), W__NOTE(_C5), H__NOTE(_B4), H__NOTE(_C5), W__NOTE(_D5), H__NOTE(_C5), \
  H__NOTE(_G4), H__NOTE(_EF4), H__NOTE(_C4), H__NOTE(_D4), H__NOTE(_EF4), W__NOTE(_GF4), H__NOTE(_G4), H__NOTE(_EF4), \
  H__NOTE(_C4), H__NOTE(_A3), H__NOTE(_B3), H__NOTE(_C4), W__NOTE(_D4), W__NOTE(_C4), H__NOTE(_C4), H__NOTE(_G4), \
  H__NOTE(_C5), HD_NOTE(_EF5), W__NOTE(_AF5), W__NOTE(_A5), W__NOTE(_BF5), H__NOTE(_A5), H__NOTE(_G5), W__NOTE(_A5), \
  H__NOTE(_BF5), H__NOTE(_G5), H__NOTE(_EF5), H__NOTE(_C5), H__NOTE(_B4), H__NOTE(_C5), W__NOTE(_D5), H__NOTE(_EF5), \
  H__NOTE(_C5), H__NOTE(_G4), H__NOTE(_EF4), H__NOTE(_B4), H__NOTE(_A4), W__NOTE(_B4), W__NOTE(_C5), W__NOTE(_B4), \
  W__NOTE(_C5), H__NOTE(_B4), W__NOTE(_C5), H__NOTE(_F4), H__NOTE(_AF4), H__NOTE(_C5), W__NOTE(_F5), W__NOTE(_C5), \
  H__NOTE(_B4), H__NOTE(_C5), W__NOTE(_D5), W__NOTE(_EF5), HD_NOTE(_D5), H__NOTE(_B4), H__NOTE(_G4), H__NOTE(_B4), \
  H__NOTE(_D5), HD_NOTE(_EF5), W__NOTE(_F5), W__NOTE(_EF5), H__NOTE(_D5), H__NOTE(_C5), W__NOTE(_C6), H__NOTE(_BF5), \
  H__NOTE(_AF5), HD_NOTE(_G5), W__NOTE(_AF5), W__NOTE(_G5), H__NOTE(_F5), H__NOTE(_AF5), B__NOTE(_G5), H__NOTE(_F4), \
  H__NOTE(_AF4), H__NOTE(_C5), W__NOTE(_F5), W__NOTE(_C5), H__NOTE(_B4), H__NOTE(_C5), W__NOTE(_D5), W__NOTE(_EF5), \
  HD_NOTE(_D5), H__NOTE(_B4), H__NOTE(_G4), H__NOTE(_B4), H__NOTE(_D5), HD_NOTE(_EF5), W__NOTE(_F5), W__NOTE(_EF5), \
  H__NOTE(_D5), H__NOTE(_C5), W__NOTE(_C6), W__NOTE(_DF6), H__NOTE(_D6), H__NOTE(_EF6), H__NOTE(_D6), H__NOTE(_C6), \
  H__NOTE(_B5), H__NOTE(_AF5), W__NOTE(_G5), W__NOTE(_AF5), HD_NOTE(_G5), W__NOTE(_G5), H__NOTE(_EF5), H__NOTE(_C5), \
  H__NOTE(_C5), W__NOTE(_EF5), W__NOTE(_AF5), H__NOTE(_G5), H__NOTE(_GF5), W__NOTE(_G5), H__NOTE(_C6), H__NOTE(_G5), \
  H__NOTE(_EF5), H__NOTE(_C5), H__NOTE(_G4), H__NOTE(_EF5), W__NOTE(_F5), H__NOTE(_G5), H__NOTE(_D5), H__NOTE(_C5), \
  H__NOTE(_A4), H__NOTE(_G4), H__NOTE(_A4), W__NOTE(_D5), W__NOTE(_C5), H__NOTE(_C4), H__NOTE(_G4), H__NOTE(_C5), \
  HD_NOTE(_EF5), W__NOTE(_AF5), W__NOTE(_A5), W__NOTE(_BF5), H__NOTE(_A5), H__NOTE(_G5), W__NOTE(_A5), H__NOTE(_BF5), \
  H__NOTE(_G5), H__NOTE(_EF5), H__NOTE(_C5), H__NOTE(_B4), H__NOTE(_C5), W__NOTE(_D5), H__NOTE(_EF5), H__NOTE(_C5), \
  H__NOTE(_G4), H__NOTE(_EF4), H__NOTE(_B4), H__NOTE(_A4), W__NOTE(_B4), W__NOTE(_C5), W__NOTE(_B4), W__NOTE(_C5), \
  H__NOTE(_B4), W__NOTE(_C5), H__NOTE(_F4), H__NOTE(_AF4), H__NOTE(_C5), W__NOTE(_F5), W__NOTE(_C5), H__NOTE(_B4), \
  H__NOTE(_C5), W__NOTE(_D5), W__NOTE(_EF5), HD_NOTE(_D5), H__NOTE(_B4), H__NOTE(_G4), H__NOTE(_B4), H__NOTE(_D5), \
  HD_NOTE(_EF5), W__NOTE(_F5), W__NOTE(_EF5), H__NOTE(_D5), H__NOTE(_C5), W__NOTE(_C6), H__NOTE(_BF5), H__NOTE(_AF5), \
  HD_NOTE(_G5), W__NOTE(_AF5), W__NOTE(_G5), H__NOTE(_F5), H__NOTE(_AF5), B__NOTE(_G5), H__NOTE(_F4), H__NOTE(_AF4), \
  H__NOTE(_C5), W__NOTE(_F5), W__NOTE(_C5), H__NOTE(_B4), H__NOTE(_C5), W__NOTE(_D5), W__NOTE(_EF5), HD_NOTE(_D5), \
  H__NOTE(_B4), H__NOTE(_G4), H__NOTE(_B4), H__NOTE(_D5), HD_NOTE(_EF5), W__NOTE(_F5), W__NOTE(_EF5), H__NOTE(_D5), \
  H__NOTE(_C5), W__NOTE(_C6), W__NOTE(_DF6), H__NOTE(_D6), H__NOTE(_EF6), H__NOTE(_D6), H__NOTE(_C6), H__NOTE(_B5), \
  H__NOTE(_AF5), W__NOTE(_G5), W__NOTE(_AF5), HD_NOTE(_G5), W__NOTE(_G5), H__NOTE(_F5), H__NOTE(_AF5), H__NOTE(_C6), \
  W__NOTE(_F6), W__NOTE(_C6), H__NOTE(_B5), H__NOTE(_C6), W__NOTE(_D6), W__NOTE(_EF6), HD_NOTE(_D6), H__NOTE(_B5), \
  H__NOTE(_G5), H__NOTE(_B5), H__NOTE(_D6), HD_NOTE(_EF6), W__NOTE(_F6), W__NOTE(_EF6), H__NOTE(_D6), H__NOTE(_C6), \
  W__NOTE(_C7), H__NOTE(_BF6), H__NOTE(_AF6), HD_NOTE(_G6), W__NOTE(_AF6), W__NOTE(_G6), H__NOTE(_F6), H__NOTE(_AF6), \
  B__NOTE(_G6), H__NOTE(_F4), H__NOTE(_AF4), H__NOTE(_C5), HD_NOTE(_F5), W__NOTE(_GF5), W__NOTE(_G5), W__NOTE(_AF5), \
  H__NOTE(_G5), H__NOTE(_F5), W__NOTE(_D5), HD_NOTE(_B4), W__NOTE(_DF5), W__NOTE(_D5), H__NOTE(_EF5), H__NOTE(_D5), \
  H__NOTE(_C5), H__NOTE(_B4), H__NOTE(_C5), H__NOTE(_D5), W__NOTE(_EF5), W__NOTE(_C5), H__NOTE(_B4), H__NOTE(_C5), \
  W__NOTE(_D5), W__NOTE(_C5), W__NOTE(_C6)
#define ALL_STAR \
    E__NOTE(_AS4), Q__NOTE(_FS4), S__NOTE(_FS4), S__NOTE(_DS4), E__NOTE(_FS4), Q__NOTE(_FS4), S__NOTE(_FS4), S__NOTE(_DS4), \
    E__NOTE(_FS4), Q__NOTE(_FS4), Q__NOTE(_FS4), QD_NOTE(_AS4), \
    E__NOTE(_AS4), Q__NOTE(_FS4), S__NOTE(_FS4), S__NOTE(_DS4), E__NOTE(_FS4), Q__NOTE(_FS4), S__NOTE(_FS4), S__NOTE(_DS4), \
    E__NOTE(_FS4), Q__NOTE(_FS4), Q__NOTE(_FS4), Q__NOTE(_AS4), E__NOTE(_REST),\
    Q__NOTE(_AS4), Q__NOTE(_CS5), E__NOTE(_B4), E__NOTE(_CS5), E__NOTE(_DS5), Q__NOTE(_FS5), \
    E__NOTE(_GS5), Q__NOTE(_GS5), E__NOTE(_FS4), E__NOTE(_FS4), E__NOTE(_GS4), E__NOTE(_FS4), \
    E__NOTE(_AS4), Q__NOTE(_GS4), Q__NOTE(_GS4), Q__NOTE(_FS4), Q__NOTE(_GS4), \
    E__NOTE(_AS4), HD_NOTE(_DS4)
#define MEGALO \
  Q__NOTE(_D4), Q__NOTE(_D4), H__NOTE(_D5), HD_NOTE(_A4), H__NOTE(_AF4), H__NOTE(_G4), H__NOTE(_F4), \
  Q__NOTE(_D4), Q__NOTE(_F4), Q__NOTE(_G4), Q__NOTE(_C4), Q__NOTE(_C4), H__NOTE(_D5), HD_NOTE(_A4), \
  H__NOTE(_AF4), H__NOTE(_G4), H__NOTE(_F4), Q__NOTE(_D4), Q__NOTE(_F4), Q__NOTE(_G4), \
  Q__NOTE(_B3), Q__NOTE(_B3), H__NOTE(_D5), HD_NOTE(_A4), H__NOTE(_AF4), H__NOTE(_G4), H__NOTE(_F4), \
  Q__NOTE(_D4), Q__NOTE(_F4), Q__NOTE(_G4), Q__NOTE(_BF3), Q__NOTE(_BF3), H__NOTE(_D5), \
  HD_NOTE(_A4), H__NOTE(_AF4), H__NOTE(_G4), H__NOTE(_F4), Q__NOTE(_D4), Q__NOTE(_F4), \
  Q__NOTE(_G4),
#define BONE \
  Q__NOTE(_C4), Q__NOTE(_G4), Q__NOTE(_C5), H__NOTE(_E5), H__NOTE(_C5), \
  Q__NOTE(_B5), Q__NOTE(_C5), H__NOTE(_D5), Q__NOTE(_C5), Q__NOTE(_G4), Q__NOTE(_E4), Q__NOTE(_C4), \
  Q__NOTE(_D4), Q__NOTE(_E4), H__NOTE(_FS4), Q__NOTE(_G4), Q__NOTE(_E4), Q__NOTE(_C4), Q__NOTE(_A4), \
  Q__NOTE(_B4), Q__NOTE(_C4), H__NOTE(_D4), Q__NOTE(_C4), \
  Q__NOTE(_C4), Q__NOTE(_G4), Q__NOTE(_C5), Q__NOTE(_E5), S__NOTE(_A6), S__NOTE(_A6), H__NOTE(_B6), \
  Q__NOTE(_A6), Q__NOTE(_G5), H__NOTE(_A6), Q__NOTE(_B6), Q__NOTE(_G5), Q__NOTE(_E5), Q__NOTE(_C5), \
  Q__NOTE(_B5), Q__NOTE(_C5), H__NOTE(_D5), Q__NOTE(_E5), Q__NOTE(_C5), Q__NOTE(_G4), Q__NOTE(_E4), \
  Q__NOTE(_B5), Q__NOTE(_A5), H__NOTE(_B5), Q__NOTE(_C5), Q__NOTE(_REST), H__NOTE(_REST)
#define E1M1_DOOM  \
    Q__NOTE(_E3 ), \
    Q__NOTE(_E3 ), \
    Q__NOTE(_E4 ), \
    Q__NOTE(_E3 ), \
    Q__NOTE(_E3 ), \
    Q__NOTE(_D4 ), \
    Q__NOTE(_E3 ), \
    Q__NOTE(_E3 ), \
    Q__NOTE(_C4 ), \
    Q__NOTE(_E3 ), \
    Q__NOTE(_E3 ), \
    Q__NOTE(_BF3), \
    Q__NOTE(_E3 ), \
    Q__NOTE(_E3 ), \
    Q__NOTE(_B3 ), \
    Q__NOTE(_C4 ), \
    Q__NOTE(_E3 ), \
    Q__NOTE(_E3 ), \
    Q__NOTE(_E4 ), \
    Q__NOTE(_E3 ), \
    Q__NOTE(_E3 ), \
    Q__NOTE(_D4 ), \
    Q__NOTE(_E3 ), \
    Q__NOTE(_E3 ), \
    Q__NOTE(_C4 ), \
    Q__NOTE(_E3 ), \
    Q__NOTE(_E3 ), \
    H__NOTE(_BF3),

//#Q__NOTE(_REST), H__NOTE(_REST),
#ifdef AUDIO_ENABLE
//    #define STARTUP_SONG SONG(QWERTY_SOUND)
//    #define STARTUP_SONG SONG(E1M1_DOOM)
    #define STARTUP_SONG SONG(SCORE)
//    #define STARTUP_SONG SONG(MEGALO)
    // #define STARTUP_SONG SONG(NO_SOUND)

    #define DEFAULT_LAYER_SONGS { SONG(QWERTY_SOUND), \
                                  SONG(COLEMAK_SOUND), \
                                  SONG(DVORAK_SOUND) \
                                }
#endif


#define MUSIC_MASK (keycode != KC_NO)

/*
 * MIDI options
 */

/* enable basic MIDI features:
   - MIDI notes can be sent when in Music mode is on
*/

#define MIDI_BASIC

/* enable advanced MIDI features:
   - MIDI notes can be added to the keymap
   - Octave shift and transpose
   - Virtual sustain, portamento, and modulation wheel
   - etc.
*/
//#define MIDI_ADVANCED

/* override number of MIDI tone keycodes (each octave adds 12 keycodes and allocates 12 bytes) */
//#define MIDI_TONE_KEYCODE_OCTAVES 2
