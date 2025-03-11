/*******************************************************************************
 * Size: 16 px
 * Bpp: 1
 * Opts: --bpp 1 --size 16 --no-compress --font PixelOperatorMono-Bold.ttf --range 32-127 --format lvgl -o pixel_operator_mono.c
 ******************************************************************************/

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include <lvgl.h>
#endif

#ifndef PIXEL_OPERATOR_MONO
#define PIXEL_OPERATOR_MONO 1
#endif

#if PIXEL_OPERATOR_MONO

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xff, 0xfc, 0xc0,

    /* U+0022 "\"" */
    0xde, 0xf6,

    /* U+0023 "#" */
    0x6c, 0xdb, 0xfb, 0x66, 0xcd, 0xbf, 0xb6, 0x6c,

    /* U+0024 "$" */
    0x10, 0x21, 0xf6, 0xbd, 0x1a, 0x1f, 0xb, 0x17,
    0xad, 0xf0, 0x81, 0x0,

    /* U+0025 "%" */
    0x41, 0x42, 0x92, 0x41, 0x4, 0x92, 0x85, 0x4,

    /* U+0026 "&" */
    0x7b, 0x3c, 0x30, 0x7b, 0x3c, 0xf3, 0x7c,

    /* U+0027 "'" */
    0xfc,

    /* U+0028 "(" */
    0x36, 0xcc, 0xcc, 0xc6, 0x30,

    /* U+0029 ")" */
    0xc6, 0x33, 0x33, 0x36, 0xc0,

    /* U+002A "*" */
    0x25, 0x7e, 0xef, 0xd4, 0x80,

    /* U+002B "+" */
    0x30, 0xcf, 0xcc, 0x30,

    /* U+002C "," */
    0x6f, 0x0,

    /* U+002D "-" */
    0xf0,

    /* U+002E "." */
    0xc0,

    /* U+002F "/" */
    0x33, 0x36, 0x66, 0xcc, 0xc0,

    /* U+0030 "0" */
    0x7b, 0x3c, 0xf7, 0xff, 0xbc, 0xf3, 0x78,

    /* U+0031 "1" */
    0x37, 0xf3, 0x33, 0x33, 0x30,

    /* U+0032 "2" */
    0x7b, 0x30, 0xc6, 0x31, 0x8c, 0x30, 0xfc,

    /* U+0033 "3" */
    0x7b, 0x30, 0xc3, 0x38, 0x30, 0xf3, 0x78,

    /* U+0034 "4" */
    0xc, 0x73, 0xdb, 0xcf, 0xf0, 0xc3, 0xc,

    /* U+0035 "5" */
    0xff, 0xc, 0x3e, 0xc, 0x30, 0xf3, 0x78,

    /* U+0036 "6" */
    0x7b, 0x3c, 0x30, 0xfb, 0x3c, 0xf3, 0x78,

    /* U+0037 "7" */
    0xfc, 0x30, 0xc6, 0x31, 0x8c, 0x30, 0xc0,

    /* U+0038 "8" */
    0x7b, 0x3c, 0xf3, 0x7b, 0x3c, 0xf3, 0x78,

    /* U+0039 "9" */
    0x7b, 0x3c, 0xf3, 0x7c, 0x30, 0xf3, 0x78,

    /* U+003A ":" */
    0xc0, 0xc,

    /* U+003B ";" */
    0x60, 0x0, 0x1b, 0xc0,

    /* U+003C "<" */
    0x36, 0xc6, 0x30,

    /* U+003D "=" */
    0xf0, 0xf0,

    /* U+003E ">" */
    0xc6, 0x36, 0xc0,

    /* U+003F "?" */
    0x7b, 0x30, 0xc6, 0x30, 0xc3, 0x0, 0x30,

    /* U+0040 "@" */
    0x7d, 0x6, 0x6d, 0x5a, 0xb5, 0x67, 0x40, 0x7c,

    /* U+0041 "A" */
    0x7b, 0x3c, 0xf3, 0xcf, 0xfc, 0xf3, 0xcc,

    /* U+0042 "B" */
    0xfb, 0x3c, 0xf3, 0xfb, 0x3c, 0xf3, 0xf8,

    /* U+0043 "C" */
    0x7b, 0x3c, 0x30, 0xc3, 0xc, 0x33, 0x78,

    /* U+0044 "D" */
    0xfb, 0x3c, 0xf3, 0xcf, 0x3c, 0xf3, 0xf8,

    /* U+0045 "E" */
    0xff, 0xc, 0x30, 0xf3, 0xc, 0x30, 0xfc,

    /* U+0046 "F" */
    0xff, 0xc, 0x30, 0xf3, 0xc, 0x30, 0xc0,

    /* U+0047 "G" */
    0x7b, 0x3c, 0x30, 0xdf, 0x3c, 0xf3, 0x7c,

    /* U+0048 "H" */
    0xcf, 0x3c, 0xf3, 0xff, 0x3c, 0xf3, 0xcc,

    /* U+0049 "I" */
    0xff, 0xff, 0xc0,

    /* U+004A "J" */
    0xc, 0x30, 0xc3, 0xc, 0x30, 0xf3, 0x78,

    /* U+004B "K" */
    0xcf, 0x3d, 0xbc, 0xe3, 0xcd, 0xb3, 0xcc,

    /* U+004C "L" */
    0xc3, 0xc, 0x30, 0xc3, 0xc, 0x30, 0xfc,

    /* U+004D "M" */
    0xc7, 0x8f, 0xbf, 0xfd, 0x78, 0xf1, 0xe3, 0xc6,

    /* U+004E "N" */
    0xcf, 0x3c, 0xfb, 0xff, 0x7c, 0xf3, 0xcc,

    /* U+004F "O" */
    0x7b, 0x3c, 0xf3, 0xcf, 0x3c, 0xf3, 0x78,

    /* U+0050 "P" */
    0xfb, 0x3c, 0xf3, 0xfb, 0xc, 0x30, 0xc0,

    /* U+0051 "Q" */
    0x7b, 0x3c, 0xf3, 0xcf, 0x3f, 0xf6, 0x6c,

    /* U+0052 "R" */
    0xfb, 0x3c, 0xf3, 0xfb, 0xcd, 0xb3, 0xcc,

    /* U+0053 "S" */
    0x7b, 0x3c, 0x30, 0x78, 0x30, 0xf3, 0x78,

    /* U+0054 "T" */
    0xfc, 0xc3, 0xc, 0x30, 0xc3, 0xc, 0x30,

    /* U+0055 "U" */
    0xcf, 0x3c, 0xf3, 0xcf, 0x3c, 0xf3, 0x78,

    /* U+0056 "V" */
    0xcf, 0x3c, 0xf3, 0xcf, 0x3c, 0xde, 0x30,

    /* U+0057 "W" */
    0xc7, 0x8f, 0x5e, 0xbd, 0x7a, 0xf5, 0xeb, 0x6c,

    /* U+0058 "X" */
    0xcf, 0x3c, 0xde, 0x31, 0xec, 0xf3, 0xcc,

    /* U+0059 "Y" */
    0xcf, 0x3c, 0xde, 0x30, 0xc3, 0xc, 0x30,

    /* U+005A "Z" */
    0xfc, 0x30, 0xc6, 0x31, 0x8c, 0x30, 0xfc,

    /* U+005B "[" */
    0xfc, 0xcc, 0xcc, 0xcc, 0xf0,

    /* U+005C "\\" */
    0xcc, 0xc6, 0x66, 0x33, 0x30,

    /* U+005D "]" */
    0xf3, 0x33, 0x33, 0x33, 0xf0,

    /* U+005E "^" */
    0x31, 0xec, 0xc0,

    /* U+005F "_" */
    0xfc,

    /* U+0060 "`" */
    0xcc,

    /* U+0061 "a" */
    0x7b, 0x30, 0xdf, 0xcf, 0x37, 0xc0,

    /* U+0062 "b" */
    0xc3, 0xf, 0xb3, 0xcf, 0x3c, 0xf3, 0xf8,

    /* U+0063 "c" */
    0x7b, 0x3c, 0x30, 0xc3, 0x37, 0x80,

    /* U+0064 "d" */
    0xc, 0x37, 0xf3, 0xcf, 0x3c, 0xf3, 0x7c,

    /* U+0065 "e" */
    0x7b, 0x3c, 0xff, 0xc3, 0x37, 0x80,

    /* U+0066 "f" */
    0x3d, 0x86, 0x3e, 0x61, 0x86, 0x18, 0x60,

    /* U+0067 "g" */
    0x7f, 0x3c, 0xf3, 0xcd, 0xf0, 0xf3, 0x78,

    /* U+0068 "h" */
    0xc3, 0xf, 0xb3, 0xcf, 0x3c, 0xf3, 0xcc,

    /* U+0069 "i" */
    0xcf, 0xff, 0xc0,

    /* U+006A "j" */
    0xc, 0x0, 0xc3, 0xc, 0x30, 0xc3, 0xf, 0x37,
    0x80,

    /* U+006B "k" */
    0xc3, 0xc, 0xf6, 0xf3, 0x8f, 0x36, 0xcc,

    /* U+006C "l" */
    0xff, 0xff, 0xc0,

    /* U+006D "m" */
    0xed, 0xaf, 0x5e, 0xbd, 0x78, 0xf1, 0x80,

    /* U+006E "n" */
    0xfb, 0x3c, 0xf3, 0xcf, 0x3c, 0xc0,

    /* U+006F "o" */
    0x7b, 0x3c, 0xf3, 0xcf, 0x37, 0x80,

    /* U+0070 "p" */
    0xfb, 0x3c, 0xf3, 0xcf, 0x3f, 0xb0, 0xc0,

    /* U+0071 "q" */
    0x7f, 0x3c, 0xf3, 0xcf, 0x37, 0xc3, 0xc,

    /* U+0072 "r" */
    0xcf, 0x7e, 0x30, 0xc3, 0xc, 0x0,

    /* U+0073 "s" */
    0x7b, 0x3c, 0x1e, 0xf, 0x37, 0x80,

    /* U+0074 "t" */
    0x63, 0xe6, 0x18, 0x61, 0x86, 0xf,

    /* U+0075 "u" */
    0xcf, 0x3c, 0xf3, 0xcf, 0x37, 0x80,

    /* U+0076 "v" */
    0xcf, 0x3c, 0xf3, 0xcd, 0xe3, 0x0,

    /* U+0077 "w" */
    0xc7, 0x8f, 0x5e, 0xbd, 0x7a, 0xdb, 0x0,

    /* U+0078 "x" */
    0xcf, 0x37, 0x8c, 0x7b, 0x3c, 0xc0,

    /* U+0079 "y" */
    0xcf, 0x3c, 0xf3, 0xcd, 0xf0, 0xf3, 0x78,

    /* U+007A "z" */
    0xfc, 0x31, 0x8c, 0x63, 0xf, 0xc0,

    /* U+007B "{" */
    0x3b, 0x18, 0xcc, 0x31, 0x8c, 0x38,

    /* U+007C "|" */
    0xff, 0xff, 0xc0,

    /* U+007D "}" */
    0xe1, 0x8c, 0x61, 0x98, 0xc6, 0xe0,

    /* U+007E "~" */
    0x77, 0xb8
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 128, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 128, .box_w = 2, .box_h = 9, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 4, .adv_w = 128, .box_w = 5, .box_h = 3, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 6, .adv_w = 128, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 14, .adv_w = 128, .box_w = 7, .box_h = 13, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 26, .adv_w = 128, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 34, .adv_w = 128, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 41, .adv_w = 128, .box_w = 2, .box_h = 3, .ofs_x = 3, .ofs_y = 6},
    {.bitmap_index = 42, .adv_w = 128, .box_w = 4, .box_h = 9, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 47, .adv_w = 128, .box_w = 4, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 52, .adv_w = 128, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 57, .adv_w = 128, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 61, .adv_w = 128, .box_w = 3, .box_h = 3, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 63, .adv_w = 128, .box_w = 4, .box_h = 1, .ofs_x = 2, .ofs_y = 4},
    {.bitmap_index = 64, .adv_w = 128, .box_w = 2, .box_h = 1, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 65, .adv_w = 128, .box_w = 4, .box_h = 9, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 70, .adv_w = 128, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 77, .adv_w = 128, .box_w = 4, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 82, .adv_w = 128, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 89, .adv_w = 128, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 96, .adv_w = 128, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 103, .adv_w = 128, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 110, .adv_w = 128, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 117, .adv_w = 128, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 124, .adv_w = 128, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 131, .adv_w = 128, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 138, .adv_w = 128, .box_w = 2, .box_h = 7, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 140, .adv_w = 128, .box_w = 3, .box_h = 9, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 144, .adv_w = 128, .box_w = 4, .box_h = 5, .ofs_x = 3, .ofs_y = 2},
    {.bitmap_index = 147, .adv_w = 128, .box_w = 4, .box_h = 3, .ofs_x = 2, .ofs_y = 3},
    {.bitmap_index = 149, .adv_w = 128, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 152, .adv_w = 128, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 159, .adv_w = 128, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 167, .adv_w = 128, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 174, .adv_w = 128, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 181, .adv_w = 128, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 188, .adv_w = 128, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 195, .adv_w = 128, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 202, .adv_w = 128, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 209, .adv_w = 128, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 216, .adv_w = 128, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 223, .adv_w = 128, .box_w = 2, .box_h = 9, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 226, .adv_w = 128, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 233, .adv_w = 128, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 240, .adv_w = 128, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 247, .adv_w = 128, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 255, .adv_w = 128, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 262, .adv_w = 128, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 269, .adv_w = 128, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 276, .adv_w = 128, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 283, .adv_w = 128, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 290, .adv_w = 128, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 297, .adv_w = 128, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 304, .adv_w = 128, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 311, .adv_w = 128, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 318, .adv_w = 128, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 326, .adv_w = 128, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 333, .adv_w = 128, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 340, .adv_w = 128, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 347, .adv_w = 128, .box_w = 4, .box_h = 9, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 352, .adv_w = 128, .box_w = 4, .box_h = 9, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 357, .adv_w = 128, .box_w = 4, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 362, .adv_w = 128, .box_w = 6, .box_h = 3, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 365, .adv_w = 128, .box_w = 6, .box_h = 1, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 366, .adv_w = 128, .box_w = 3, .box_h = 2, .ofs_x = 2, .ofs_y = 7},
    {.bitmap_index = 367, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 373, .adv_w = 128, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 380, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 386, .adv_w = 128, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 393, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 399, .adv_w = 128, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 406, .adv_w = 128, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 413, .adv_w = 128, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 420, .adv_w = 128, .box_w = 2, .box_h = 9, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 423, .adv_w = 128, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 432, .adv_w = 128, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 439, .adv_w = 128, .box_w = 2, .box_h = 9, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 442, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 449, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 455, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 461, .adv_w = 128, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 468, .adv_w = 128, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 475, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 481, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 487, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 493, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 499, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 505, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 512, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 518, .adv_w = 128, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 525, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 531, .adv_w = 128, .box_w = 5, .box_h = 9, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 537, .adv_w = 128, .box_w = 2, .box_h = 9, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 540, .adv_w = 128, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 546, .adv_w = 128, .box_w = 7, .box_h = 2, .ofs_x = 0, .ofs_y = 7}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 95, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};



/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LVGL_VERSION_MAJOR == 8
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
#endif

#if LVGL_VERSION_MAJOR >= 8
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = NULL,
    .kern_scale = 0,
    .cmap_num = 1,
    .bpp = 1,
    .kern_classes = 0,
    .bitmap_format = 0,
#if LVGL_VERSION_MAJOR == 8
    .cache = &cache
#endif
};



/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LVGL_VERSION_MAJOR >= 8
const lv_font_t pixel_operator_mono = {
#else
lv_font_t pixel_operator_mono = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 13,          /*The maximum line height required by the font*/
    .base_line = 2,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -3,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = NULL,
#endif
    .user_data = NULL,
};



#endif /*#if PIXEL_OPERATOR_MONO*/