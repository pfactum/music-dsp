/*
 * lmtypes.h
 *
 *  Defines types specific for libmusic
 */

#pragma once

#include <complex>
#include <stdint.h>

typedef double amplitude_t;
typedef double freq_hz_t;
typedef std::complex<amplitude_t> complex_t;

typedef enum {
    note_C,
    note_C_sharp,
    note_D,
    note_D_sharp,
    note_E,
    note_F,
    note_F_sharp,
    note_G,
    note_G_sharp,
    note_A,
    note_A_sharp,
    note_B,
    note_Unknown,
    note_Min = note_C,
    note_Max = note_B
} note_t;

typedef enum : int32_t {
    OCTAVE_1,
    OCTAVE_2,
    OCTAVE_3,
    OCTAVE_4,
    OCTAVE_5,
    OCTAVE_6,
    OCTAVE_7,
    OCTAVE_8,
    OCTAVE_MIN = OCTAVE_1,
    OCTAVE_MAX = OCTAVE_8
} octave_t;
