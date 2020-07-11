/*
Copyright 2018 Massdrop Inc.

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifdef USE_MASSDROP_CONFIGURATOR

#    include "led_matrix.h"

// A E S T H E T I C
led_setup_t leds_cyberpunk[] = {
    {.hs = 0,  .he = 15,  .rs = 0,   .re = 255, .gs = 0,   .ge = 0,   .bs = 255, .be = 255, .ef = EF_OVER | EF_SCR_R},
    {.hs = 15, .he = 20,  .rs = 255, .re = 255, .gs = 255, .ge = 255, .bs = 255, .be = 255, .ef = EF_OVER | EF_SCR_R},
    {.hs = 20, .he = 45,  .rs = 255, .re = 255, .gs = 0,   .ge = 0,   .bs = 255, .be = 0,   .ef = EF_OVER | EF_SCR_R},
    {.hs = 45, .he = 100, .rs = 0,   .re = 0,   .gs = 0,   .ge = 0,   .bs = 0,   .be = 0,   .ef = EF_NONE},
    {.end = 1},
};

led_setup_t hypno[] = {
    {.hs = 0,  .he = 10,  .rs = 255, .re = 255, .gs = 255, .ge = 255, .bs = 255, .be = 255, .ef = EF_SCR_R},
    {.hs = 10, .he = 20,  .rs = 0,   .re = 0,   .gs = 0,   .ge = 0,   .bs = 0,   .be = 0,   .ef = EF_SCR_R},
    {.hs = 20, .he = 30,  .rs = 255, .re = 255, .gs = 255, .ge = 255, .bs = 255, .be = 255, .ef = EF_SCR_R},
    {.hs = 30, .he = 40,  .rs = 0,   .re = 0,   .gs = 0,   .ge = 0,   .bs = 0,   .be = 0,   .ef = EF_SCR_R},
    {.hs = 40, .he = 50,  .rs = 255, .re = 255, .gs = 255, .ge = 255, .bs = 255, .be = 255, .ef = EF_SCR_R},
    {.hs = 50, .he = 60,  .rs = 0,   .re = 0,   .gs = 0,   .ge = 0,   .bs = 0,   .be = 0,   .ef = EF_SCR_R},
    {.hs = 60, .he = 70,  .rs = 255, .re = 255, .gs = 255, .ge = 255, .bs = 255, .be = 255, .ef = EF_SCR_R},
    {.hs = 70, .he = 80,  .rs = 0,   .re = 0,   .gs = 0,   .ge = 0,   .bs = 0,   .be = 0,   .ef = EF_SCR_R},
    {.hs = 80, .he = 90,  .rs = 255, .re = 255, .gs = 255, .ge = 255, .bs = 255, .be = 255, .ef = EF_SCR_R},
    {.hs = 90, .he = 100, .rs = 0,   .re = 0,   .gs = 0,   .ge = 0,   .bs = 0,   .be = 0,   .ef = EF_SCR_R},
    {.end = 1},
};

// Yellow
led_setup_t leds_yellow[] = {
    {.hs = 0, .he = 100, .rs = 255, .re = 255, .gs = 255, .ge = 255, .bs = 0, .be = 0, .ef = EF_NONE},
    {.end = 1},
};

// Off
led_setup_t leds_off[] = {
    {.hs = 0, .he = 100, .rs = 0, .re = 0, .gs = 0, .ge = 0, .bs = 0, .be = 0, .ef = EF_NONE},
    {.end = 1},
};

// Red
led_setup_t leds_red[] = {
    {.hs = 0, .he = 100, .rs = 255, .re = 255, .gs = 0, .ge = 0, .bs = 0, .be = 0, .ef = EF_NONE},
    {.end = 1},
};

// Green
led_setup_t leds_green[] = {
    {.hs = 0, .he = 100, .rs = 0, .re = 0, .gs = 255, .ge = 255, .bs = 0, .be = 0, .ef = EF_NONE},
    {.end = 1},
};

// Blue
led_setup_t leds_blue[] = {
    {.hs = 0, .he = 100, .rs = 0, .re = 0, .gs = 0, .ge = 0, .bs = 255, .be = 255, .ef = EF_NONE},
    {.end = 1},
};

// White
led_setup_t leds_white[] = {
    {.hs = 0, .he = 100, .rs = 255, .re = 255, .gs = 255, .ge = 255, .bs = 255, .be = 255, .ef = EF_NONE},
    {.end = 1},
};

// White with moving red stripe
led_setup_t leds_white_with_red_stripe[] = {
    {.hs = 0, .he = 100, .rs = 255, .re = 255, .gs = 255, .ge = 255, .bs = 255, .be = 255, .ef = EF_NONE},
    {.hs = 0, .he = 15, .rs = 0, .re = 0, .gs = 0, .ge = 255, .bs = 0, .be = 255, .ef = EF_SCR_R | EF_SUBTRACT},
    {.hs = 15, .he = 30, .rs = 0, .re = 0, .gs = 255, .ge = 0, .bs = 255, .be = 0, .ef = EF_SCR_R | EF_SUBTRACT},
    {.end = 1},
};

// Black with moving red stripe
led_setup_t leds_black_with_red_stripe[] = {
    {.hs = 0, .he = 15, .rs = 0, .re = 255, .gs = 0, .ge = 0, .bs = 0, .be = 0, .ef = EF_SCR_R},
    {.hs = 15, .he = 30, .rs = 255, .re = 0, .gs = 0, .ge = 0, .bs = 0, .be = 0, .ef = EF_SCR_R},
    {.end = 1},
};

// Rainbow scrolling
led_setup_t leds_rainbow_s[] = {
    {.hs = 0,     .he = 16.67, .rs = 255, .re = 255, .gs = 0,   .ge = 255, .bs = 0,   .be = 0,   .ef = EF_OVER | EF_SCR_R},
    {.hs = 16.67, .he = 33.33, .rs = 255, .re = 0,   .gs = 255, .ge = 255, .bs = 0,   .be = 0,   .ef = EF_OVER | EF_SCR_R},
    {.hs = 33.33, .he = 50,    .rs = 0,   .re = 0,   .gs = 255, .ge = 255, .bs = 0,   .be = 255, .ef = EF_OVER | EF_SCR_R},
    {.hs = 50,    .he = 66.67, .rs = 0,   .re = 0,   .gs = 255, .ge = 0,   .bs = 255, .be = 255, .ef = EF_OVER | EF_SCR_R},
    {.hs = 66.67, .he = 83.33, .rs = 0,   .re = 255, .gs = 0,   .ge = 0,   .bs = 255, .be = 255, .ef = EF_OVER | EF_SCR_R},
    {.hs = 83.33, .he = 100,   .rs = 255, .re = 255, .gs = 0,   .ge = 0,   .bs = 255, .be = 0,   .ef = EF_OVER | EF_SCR_R},
    {.end = 1},
};

// Add new LED animations here using one from above as example
// The last entry must be { .end = 1 }
// Add the new animation name to the list below following its format

void *led_setups[] = {leds_rainbow_s, leds_cyberpunk, hypno, leds_white, leds_white_with_red_stripe, leds_black_with_red_stripe, leds_off};

const uint8_t led_setups_count = sizeof(led_setups) / sizeof(led_setups[0]);

#endif
