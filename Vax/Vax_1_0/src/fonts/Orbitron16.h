

/*
 *
 * Orbitron16
 *
 * created with FontCreator
 * written by F. Maximilian Thiele
 *
 * http://www.apetech.de/fontCreator
 * me@apetech.de
 *
 * File Name           : Orbitron16.h
 * Date                : 23.12.2017
 * Font size in bytes  : 10485
 * Font width          : 10
 * Font height         : 16
 * Font first char     : 32
 * Font last char      : 127
 * Font used chars     : 95
 *
 * The font data are defined as
 *
 * struct _FONT_ {
 *     uint16_t   font_Size_in_Bytes_over_all_included_Size_it_self;
 *     uint8_t    font_Width_in_Pixel_for_fixed_drawing;
 *     uint8_t    font_Height_in_Pixel_for_all_characters;
 *     unit8_t    font_First_Char;
 *     uint8_t    font_Char_Count;
 *
 *     uint8_t    font_Char_Widths[font_Last_Char - font_First_Char +1];
 *                  // for each character the separate width in pixels,
 *                  // characters < 128 have an implicit virtual right empty row
 *
 *     uint8_t    font_data[];
 *                  // bit field of all characters
 */

#ifndef ORBITRON16_H
#define ORBITRON16_H

#define ORBITRON16_WIDTH 10
#define ORBITRON16_HEIGHT 16

GLCDFONTDECL(Orbitron16) = {
    0x28, 0xF5, // size
    0x0A, // width
    0x10, // height
    0x20, // first char
    0x5F, // char count
    
    // char widths
    0x00, 0x01, 0x03, 0x0A, 0x0A, 0x0B, 0x0B, 0x01, 
    0x02, 0x02, 0x06, 0x05, 0x01, 0x05, 0x01, 0x07, 
    0x09, 0x04, 0x09, 0x09, 0x09, 0x09, 0x09, 0x08, 
    0x09, 0x09, 0x01, 0x01, 0x05, 0x06, 0x05, 0x09, 
    0x09, 0x09, 0x09, 0x09, 0x09, 0x08, 0x08, 0x09, 
    0x09, 0x01, 0x09, 0x09, 0x09, 0x0A, 0x09, 0x09, 
    0x09, 0x0A, 0x09, 0x09, 0x0A, 0x09, 0x0D, 0x0F, 
    0x09, 0x0A, 0x09, 0x02, 0x07, 0x02, 0x07, 0x09, 
    0x02, 0x07, 0x07, 0x07, 0x08, 0x07, 0x04, 0x07, 
    0x07, 0x01, 0x02, 0x07, 0x03, 0x0B, 0x07, 0x07, 
    0x07, 0x08, 0x05, 0x07, 0x04, 0x07, 0x0A, 0x0E, 
    0x07, 0x07, 0x07, 0x03, 0x01, 0x02, 0x05, 
    
    // font data
    0xF0, 0x13, // 33
    0x10, 0x00, 0x10, 0x00, 0x00, 0x00, // 34
    0x00, 0x40, 0x40, 0xE0, 0x50, 0x40, 0x40, 0xC0, 0x70, 0x50, 0x04, 0x14, 0x0F, 0x05, 0x04, 0x14, 0x1C, 0x07, 0x04, 0x04, // 35
    0xE0, 0xF0, 0x10, 0x10, 0x10, 0xFC, 0x10, 0x10, 0x10, 0x30, 0x08, 0x19, 0x11, 0x11, 0x11, 0x3F, 0x11, 0x11, 0x11, 0x0F, // 36
    0xF0, 0x90, 0x90, 0x70, 0x00, 0x00, 0x80, 0x40, 0x20, 0x30, 0x00, 0x10, 0x08, 0x0C, 0x06, 0x03, 0x01, 0x00, 0x1E, 0x12, 0x12, 0x1E, // 37
    0x70, 0x90, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x30, 0x00, 0x00, 0x1F, 0x10, 0x11, 0x11, 0x12, 0x12, 0x14, 0x14, 0x1E, 0x08, 0x10, // 38
    0x10, 0x00, // 39
    0xF0, 0x10, 0x1F, 0x10, // 40
    0x10, 0xE0, 0x10, 0x0F, // 41
    0x20, 0x20, 0xC0, 0xF0, 0xA0, 0x20, 0x00, 0x01, 0x00, 0x00, 0x01, 0x00, // 42
    0x00, 0x00, 0x80, 0x00, 0x00, 0x02, 0x02, 0x0F, 0x02, 0x02, // 43
    0x00, 0x70, // 44
    0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x02, 0x02, 0x02, 0x02, // 45
    0x00, 0x10, // 46
    0x00, 0x00, 0x00, 0x80, 0xC0, 0x20, 0x10, 0x18, 0x04, 0x02, 0x01, 0x00, 0x00, 0x00, // 47
    0xF0, 0x10, 0x10, 0x10, 0x10, 0x90, 0x50, 0x70, 0xF0, 0x1F, 0x14, 0x16, 0x13, 0x11, 0x10, 0x10, 0x10, 0x1F, // 48
    0x40, 0x20, 0x10, 0xF0, 0x00, 0x00, 0x00, 0x1F, // 49
    0x30, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0xF0, 0x1F, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, // 50
    0x30, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0xF0, 0x18, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x1F, // 51
    0x00, 0x00, 0x80, 0xC0, 0x60, 0x30, 0x10, 0xF0, 0x00, 0x06, 0x05, 0x05, 0x04, 0x04, 0x04, 0x04, 0x1F, 0x04, // 52
    0xF0, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x19, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x1F, // 53
    0xF0, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x00, 0x1F, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x1F, // 54
    0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, // 55
    0xF0, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0xF0, 0x1F, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x1F, // 56
    0xF0, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0xF0, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x1F, // 57
    0x20, 0x10, // 58
    0x20, 0x70, // 59
    0x00, 0x00, 0x80, 0x80, 0x40, 0x03, 0x07, 0x04, 0x08, 0x18, // 60
    0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, // 61
    0x40, 0x80, 0x80, 0x00, 0x00, 0x18, 0x08, 0x04, 0x07, 0x03, // 62
    0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0xF0, 0x00, 0x00, 0x12, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, // 63
    0xF0, 0x10, 0x90, 0x50, 0x50, 0x50, 0x90, 0x10, 0xF0, 0x1F, 0x10, 0x13, 0x14, 0x14, 0x14, 0x17, 0x14, 0x17, // 64
    0xF0, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0xF0, 0x1F, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x1F, // 65
    0xF0, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0xF0, 0x1F, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x1F, // 66
    0xF0, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x1F, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, // 67
    0xF0, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0xF0, 0x1F, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x1F, // 68
    0xF0, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x1F, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x10, // 69
    0xF0, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x1F, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, // 70
    0xF0, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x30, 0x1F, 0x10, 0x10, 0x10, 0x10, 0x10, 0x11, 0x11, 0x1F, // 71
    0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0x1F, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x1F, // 72
    0xF0, 0x1F, // 73
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0x18, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x1F, // 74
    0xF0, 0x00, 0x00, 0x00, 0x80, 0x40, 0x20, 0x10, 0x10, 0x1F, 0x01, 0x01, 0x01, 0x03, 0x06, 0x0C, 0x10, 0x10, // 75
    0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, // 76
    0xF0, 0x30, 0x60, 0xC0, 0x00, 0x00, 0x80, 0x60, 0x30, 0xF0, 0x1F, 0x00, 0x00, 0x00, 0x03, 0x01, 0x00, 0x00, 0x00, 0x1F, // 77
    0xF0, 0x30, 0x60, 0xC0, 0x00, 0x00, 0x00, 0x00, 0xF0, 0x1F, 0x00, 0x00, 0x00, 0x01, 0x02, 0x0C, 0x18, 0x1F, // 78
    0xF0, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0xF0, 0x1F, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x1F, // 79
    0xF0, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0xF0, 0x1F, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x01, // 80
    0xF0, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0xF0, 0x00, 0x1F, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x1F, 0x10, // 81
    0xF0, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0xF0, 0x1F, 0x03, 0x03, 0x03, 0x03, 0x03, 0x0F, 0x1B, 0x11, // 82
    0xF0, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x30, 0x19, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x1F, // 83
    0x10, 0x10, 0x10, 0x10, 0xF0, 0x10, 0x10, 0x10, 0x10, 0x10, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, // 84
    0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0x1F, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x1F, // 85
    0x10, 0x10, 0x60, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x60, 0x10, 0x10, 0x00, 0x00, 0x00, 0x01, 0x06, 0x0C, 0x10, 0x0C, 0x07, 0x01, 0x00, 0x00, 0x00, // 86
    0x10, 0x70, 0xC0, 0x00, 0x00, 0x00, 0xE0, 0x30, 0x70, 0x80, 0x00, 0x00, 0x80, 0xF0, 0x10, 0x00, 0x00, 0x01, 0x0E, 0x18, 0x07, 0x00, 0x00, 0x00, 0x03, 0x1C, 0x1C, 0x03, 0x00, 0x00, // 87
    0x10, 0x30, 0x60, 0x80, 0x80, 0xC0, 0x20, 0x10, 0x10, 0x10, 0x08, 0x04, 0x03, 0x01, 0x06, 0x0C, 0x18, 0x10, // 88
    0x10, 0x10, 0x60, 0xC0, 0x00, 0x00, 0xC0, 0x60, 0x30, 0x10, 0x00, 0x00, 0x00, 0x00, 0x01, 0x1F, 0x00, 0x00, 0x00, 0x00, // 89
    0x10, 0x10, 0x10, 0x10, 0x90, 0x90, 0x50, 0x30, 0x30, 0x18, 0x14, 0x16, 0x13, 0x11, 0x10, 0x10, 0x10, 0x10, // 90
    0xF0, 0x10, 0x1F, 0x10, // 91
    0x10, 0x60, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0x0C, 0x18, // 92
    0x10, 0xF0, 0x10, 0x1F, // 93
    0x00, 0x80, 0x60, 0x18, 0x60, 0x80, 0x00, 0x02, 0x01, 0x00, 0x00, 0x00, 0x01, 0x02, // 94
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, // 95
    0x01, 0x03, 0x00, 0x00, // 96
    0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0xC0, 0x1E, 0x12, 0x12, 0x12, 0x12, 0x12, 0x1F, // 97
    0xF8, 0x60, 0x60, 0x60, 0x60, 0x60, 0xC0, 0x1F, 0x10, 0x10, 0x10, 0x10, 0x10, 0x1F, // 98
    0xC0, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x1F, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, // 99
    0xC0, 0x40, 0x60, 0x60, 0x60, 0x60, 0x60, 0xF8, 0x0F, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x1F, // 100
    0xC0, 0x60, 0x60, 0x60, 0x60, 0x60, 0xC0, 0x1F, 0x12, 0x12, 0x12, 0x12, 0x12, 0x13, // 101
    0xF8, 0x68, 0x68, 0x68, 0x1F, 0x00, 0x00, 0x00, // 102
    0xC0, 0x60, 0x60, 0x60, 0x60, 0x60, 0xC0, 0x1F, 0x90, 0x90, 0x90, 0x90, 0x90, 0xFF, // 103
    0xF8, 0x60, 0x60, 0x60, 0x60, 0x60, 0xC0, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, // 104
    0xE8, 0x1F, // 105
    0x00, 0xE8, 0x80, 0xFF, // 106
    0xF8, 0x00, 0x00, 0x00, 0x80, 0x40, 0x20, 0x1F, 0x02, 0x02, 0x03, 0x0C, 0x18, 0x10, // 107
    0xF8, 0x00, 0x00, 0x1F, 0x10, 0x10, // 108
    0xE0, 0x60, 0x60, 0x60, 0x60, 0xE0, 0x60, 0x60, 0x60, 0x60, 0xC0, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x1F, // 109
    0xE0, 0x60, 0x60, 0x60, 0x60, 0x60, 0xC0, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, // 110
    0xC0, 0x60, 0x60, 0x60, 0x60, 0x60, 0xC0, 0x1F, 0x10, 0x10, 0x10, 0x10, 0x10, 0x1F, // 111
    0xE0, 0x60, 0x60, 0x60, 0x60, 0x60, 0xC0, 0xFF, 0x10, 0x10, 0x10, 0x10, 0x10, 0x1F, // 112
    0xC0, 0x40, 0x60, 0x60, 0x60, 0x60, 0x60, 0xE0, 0x0F, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0xFF, // 113
    0xC0, 0x60, 0x60, 0x60, 0x60, 0x1F, 0x00, 0x00, 0x00, 0x00, // 114
    0xC0, 0x60, 0x60, 0x60, 0x60, 0x60, 0x40, 0x1B, 0x12, 0x12, 0x12, 0x12, 0x12, 0x1E, // 115
    0xF8, 0x60, 0x60, 0x60, 0x1F, 0x10, 0x10, 0x10, // 116
    0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0x1F, 0x10, 0x10, 0x10, 0x10, 0x10, 0x1F, // 117
    0x20, 0xE0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x80, 0xC0, 0x20, 0x00, 0x00, 0x01, 0x06, 0x18, 0x18, 0x0E, 0x03, 0x00, 0x00, // 118
    0x20, 0xE0, 0x00, 0x00, 0x00, 0x80, 0xE0, 0xE0, 0x80, 0x00, 0x00, 0x00, 0xE0, 0x20, 0x00, 0x00, 0x07, 0x1C, 0x1C, 0x03, 0x00, 0x00, 0x03, 0x0E, 0x18, 0x07, 0x00, 0x00, // 119
    0x60, 0xC0, 0x80, 0x00, 0x80, 0xC0, 0x20, 0x10, 0x08, 0x07, 0x03, 0x05, 0x18, 0x10, // 120
    0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0x1F, 0x90, 0x90, 0x90, 0x90, 0x90, 0xFF, // 121
    0x60, 0x60, 0x60, 0x60, 0x60, 0xE0, 0xE0, 0x18, 0x14, 0x16, 0x12, 0x11, 0x10, 0x10, // 122
    0x00, 0xF0, 0x10, 0x01, 0x1E, 0x10, // 123
    0xFC, 0x7F, // 124
    0x10, 0xE0, 0x10, 0x0F, // 125
    0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x02, 0x02, 0x02 // 126
    
};

#endif