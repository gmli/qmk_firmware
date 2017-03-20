#ifndef ATOMIC_H
#define ATOMIC_H

#include "quantum.h"
#include <stddef.h>
#include <avr/io.h>
#include <avr/interrupt.h>


extern bool iota_gfx_init(void);
extern void iota_gfx_task(void);

// This a shortcut to help you visually see your layout.
// The following is an example using the Planck MIT layout
// The first section contains all of the arguements
// The second converts the arguments into a two-dimensional array
#define KEYMAP_SEMI_STANDARD( \
    K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C,   K0E,    \
    K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, K1D, K1E, \
    K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B,    K2D,   K2E, \
    K30, K31, K32, K33, K34, K35, K36, K37, K38, K39, K3A,    K3C,   K3D, K3E, \
     K40,  K41,  K43,           K46,                  K4A, K4B, K4C, K4D, K4E  \
) { \
    { K00, K01, K02,   K03, K04,   K05,   K06, K07,   K08,   K09,   K0A, K0B,   K0C,   KC_NO, K0E }, \
    { K10, K11, K12,   K13, K14,   K15,   K16, K17,   K18,   K19,   K1A, K1B,   K1C,   K1D,   K1E }, \
    { K20, K21, K22,   K23, K24,   K25,   K26, K27,   K28,   K29,   K2A, K2B,   KC_NO, K2D,   K2E }, \
    { K30, K31, K32,   K33, K34,   K35,   K36, K37,   K38,   K39,   K3A, KC_NO, K3C,   K3D,   K3E }, \
    { K40, K41, KC_NO, K43, KC_NO, KC_NO, K46, KC_NO, KC_NO, KC_NO, K4A, K4B,   K4C,   K4D,   K4E }  \
}

// #define KEYMAP( \
//   k00, k01, k02, k03, k04,           k05, k06, k07, k08, k09, \
//   k10, k11, k12, k13, k14,           k15, k16, k17, k18, k19, \
//   k20, k21, k22, k23, k24,           k25, k26, k27, k28, k29, \
//   k30, k31, k32, k33, k34, k35, k36, k37, k38, k39, k3a, k3b \
// ) \
// { \
//     { k00, k01, k02, k03, k04, KC_NO, k05, k06, k07, k08, k09 }, \
//     { k10, k11, k12, k13, k14, KC_NO, k15, k16, k17, k18, k19 }, \
//     { k20, k21, k22, k23, k24, k35,   k25, k26, k27, k28, k29 }, \
//     { k30, k31, k32, k33, k34, k36,   k37, k38, k39, k3a, k3b } \
// }

#endif