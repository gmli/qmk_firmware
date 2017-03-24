// This is the 'classic' fixed-space bitmap font for Adafruit_GFX since 1.0.
// See gfxfont.h for newer custom bitmap font info.

#ifndef FONT5X7_H
#define FONT5X7_H

#ifdef __AVR__
 #include <avr/io.h>
 #include <avr/pgmspace.h>
#elif defined(ESP8266)
 #include <pgmspace.h>
#else
 #define PROGMEM
#endif

// Standard ASCII 5x7 font

static const unsigned char font[] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x00,
	0x3E, 0x5B, 0x4F, 0x5B, 0x3E,
	0x3E, 0x6B, 0x4F, 0x6B, 0x3E,
	0x1C, 0x3E, 0x7C, 0x3E, 0x1C,
	0x18, 0x3C, 0x7E, 0x3C, 0x18,
	0x1C, 0x57, 0x7D, 0x57, 0x1C,
	0x1C, 0x5E, 0x7F, 0x5E, 0x1C,
	0x00, 0x18, 0x3C, 0x18, 0x00,
	0xFF, 0xE7, 0xC3, 0xE7, 0xFF,
	0x00, 0x18, 0x24, 0x18, 0x00,
	0xFF, 0xE7, 0xDB, 0xE7, 0xFF,
	0x30, 0x48, 0x3A, 0x06, 0x0E,
	0x26, 0x29, 0x79, 0x29, 0x26,
	0x40, 0x7F, 0x05, 0x05, 0x07,
	0x40, 0x7F, 0x05, 0x25, 0x3F,
	0x5A, 0x3C, 0xE7, 0x3C, 0x5A,
	0x7F, 0x3E, 0x1C, 0x1C, 0x08,
	0x08, 0x1C, 0x1C, 0x3E, 0x7F,
	0x14, 0x22, 0x7F, 0x22, 0x14,
	0x5F, 0x5F, 0x00, 0x5F, 0x5F,
	0x06, 0x09, 0x7F, 0x01, 0x7F,
	0x00, 0x66, 0x89, 0x95, 0x6A,
	0x60, 0x60, 0x60, 0x60, 0x60,
	0x94, 0xA2, 0xFF, 0xA2, 0x94,
	0x08, 0x04, 0x7E, 0x04, 0x08,
	0x10, 0x20, 0x7E, 0x20, 0x10,
	0x08, 0x08, 0x2A, 0x1C, 0x08,
	0x08, 0x1C, 0x2A, 0x08, 0x08,
	0x1E, 0x10, 0x10, 0x10, 0x10,
	0x0C, 0x1E, 0x0C, 0x1E, 0x0C,
	0x30, 0x38, 0x3E, 0x38, 0x30,
	0x06, 0x0E, 0x3E, 0x0E, 0x06,
	0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x5F, 0x00, 0x00,
	0x00, 0x07, 0x00, 0x07, 0x00,
	0x14, 0x7F, 0x14, 0x7F, 0x14,
	0x24, 0x2A, 0x7F, 0x2A, 0x12,
	0x23, 0x13, 0x08, 0x64, 0x62,
	0x36, 0x49, 0x56, 0x20, 0x50,
	0x00, 0x08, 0x07, 0x03, 0x00,
	0x00, 0x1C, 0x22, 0x41, 0x00,
	0x00, 0x41, 0x22, 0x1C, 0x00,
	0x2A, 0x1C, 0x7F, 0x1C, 0x2A,
	0x08, 0x08, 0x3E, 0x08, 0x08,
	0x00, 0x80, 0x70, 0x30, 0x00,
	0x08, 0x08, 0x08, 0x08, 0x08,
	0x00, 0x00, 0x60, 0x60, 0x00,
	0x20, 0x10, 0x08, 0x04, 0x02,
	0x3E, 0x51, 0x49, 0x45, 0x3E,
	0x00, 0x42, 0x7F, 0x40, 0x00,
	0x72, 0x49, 0x49, 0x49, 0x46,
	0x21, 0x41, 0x49, 0x4D, 0x33,
	0x18, 0x14, 0x12, 0x7F, 0x10,
	0x27, 0x45, 0x45, 0x45, 0x39,
	0x3C, 0x4A, 0x49, 0x49, 0x31,
	0x41, 0x21, 0x11, 0x09, 0x07,
	0x36, 0x49, 0x49, 0x49, 0x36,
	0x46, 0x49, 0x49, 0x29, 0x1E,
	0x00, 0x00, 0x14, 0x00, 0x00,
	0x00, 0x40, 0x34, 0x00, 0x00,
	0x00, 0x08, 0x14, 0x22, 0x41,
	0x14, 0x14, 0x14, 0x14, 0x14,
	0x00, 0x41, 0x22, 0x14, 0x08,
	0x02, 0x01, 0x59, 0x09, 0x06,
	0x3E, 0x41, 0x5D, 0x59, 0x4E,
	0x7C, 0x12, 0x11, 0x12, 0x7C,
	0x7F, 0x49, 0x49, 0x49, 0x36,
	0x3E, 0x41, 0x41, 0x41, 0x22,
	0x7F, 0x41, 0x41, 0x41, 0x3E,
	0x7F, 0x49, 0x49, 0x49, 0x41,
	0x7F, 0x09, 0x09, 0x09, 0x01,
	0x3E, 0x41, 0x41, 0x51, 0x73,
	0x7F, 0x08, 0x08, 0x08, 0x7F,
	0x00, 0x41, 0x7F, 0x41, 0x00,
	0x20, 0x40, 0x41, 0x3F, 0x01,
	0x7F, 0x08, 0x14, 0x22, 0x41,
	0x7F, 0x40, 0x40, 0x40, 0x40,
	0x7F, 0x02, 0x1C, 0x02, 0x7F,
	0x7F, 0x04, 0x08, 0x10, 0x7F,
	0x3E, 0x41, 0x41, 0x41, 0x3E,
	0x7F, 0x09, 0x09, 0x09, 0x06,
	0x3E, 0x41, 0x51, 0x21, 0x5E,
	0x7F, 0x09, 0x19, 0x29, 0x46,
	0x26, 0x49, 0x49, 0x49, 0x32,
	0x03, 0x01, 0x7F, 0x01, 0x03,
	0x3F, 0x40, 0x40, 0x40, 0x3F,
	0x1F, 0x20, 0x40, 0x20, 0x1F,
	0x3F, 0x40, 0x38, 0x40, 0x3F,
	0x63, 0x14, 0x08, 0x14, 0x63,
	0x03, 0x04, 0x78, 0x04, 0x03,
	0x61, 0x59, 0x49, 0x4D, 0x43,
	0x00, 0x7F, 0x41, 0x41, 0x41,
	0x02, 0x04, 0x08, 0x10, 0x20,
	0x00, 0x41, 0x41, 0x41, 0x7F,
	0x04, 0x02, 0x01, 0x02, 0x04,
	0x40, 0x40, 0x40, 0x40, 0x40,
	0x00, 0x03, 0x07, 0x08, 0x00,
	0x20, 0x54, 0x54, 0x78, 0x40,
	0x7F, 0x28, 0x44, 0x44, 0x38,
	0x38, 0x44, 0x44, 0x44, 0x28,
	0x38, 0x44, 0x44, 0x28, 0x7F,
	0x38, 0x54, 0x54, 0x54, 0x18,
	0x00, 0x08, 0x7E, 0x09, 0x02,
	0x18, 0xA4, 0xA4, 0x9C, 0x78,
	0x7F, 0x08, 0x04, 0x04, 0x78,
	0x00, 0x44, 0x7D, 0x40, 0x00,
	0x20, 0x40, 0x40, 0x3D, 0x00,
	0x7F, 0x10, 0x28, 0x44, 0x00,
	0x00, 0x41, 0x7F, 0x40, 0x00,
	0x7C, 0x04, 0x78, 0x04, 0x78,
	0x7C, 0x08, 0x04, 0x04, 0x78,
	0x38, 0x44, 0x44, 0x44, 0x38,
	0xFC, 0x18, 0x24, 0x24, 0x18,
	0x18, 0x24, 0x24, 0x18, 0xFC,
	0x7C, 0x08, 0x04, 0x04, 0x08,
	0x48, 0x54, 0x54, 0x54, 0x24,
	0x04, 0x04, 0x3F, 0x44, 0x24,
	0x3C, 0x40, 0x40, 0x20, 0x7C,
	0x1C, 0x20, 0x40, 0x20, 0x1C,
	0x3C, 0x40, 0x30, 0x40, 0x3C,
	0x44, 0x28, 0x10, 0x28, 0x44,
	0x4C, 0x90, 0x90, 0x90, 0x7C,
	0x44, 0x64, 0x54, 0x4C, 0x44,
	0x00, 0x08, 0x36, 0x41, 0x00,
	0x00, 0x00, 0x77, 0x00, 0x00,
	0x00, 0x41, 0x36, 0x08, 0x00,
	0x02, 0x01, 0x02, 0x04, 0x02,
	0x3C, 0x26, 0x23, 0x26, 0x3C,
	0x1E, 0xA1, 0xA1, 0x61, 0x12,
	0x3A, 0x40, 0x40, 0x20, 0x7A,
	0x38, 0x54, 0x54, 0x55, 0x59,
	0x21, 0x55, 0x55, 0x79, 0x41,
	0x22, 0x54, 0x54, 0x78, 0x42, // a-umlaut
	0x21, 0x55, 0x54, 0x78, 0x40,
	0x20, 0x54, 0x55, 0x79, 0x40,
	0x0C, 0x1E, 0x52, 0x72, 0x12,
	0x39, 0x55, 0x55, 0x55, 0x59,
	0x39, 0x54, 0x54, 0x54, 0x59,
	0x39, 0x55, 0x54, 0x54, 0x58,
	0x00, 0x00, 0x45, 0x7C, 0x41,
	0x00, 0x02, 0x45, 0x7D, 0x42,
	0x00, 0x01, 0x45, 0x7C, 0x40,
	0x7D, 0x12, 0x11, 0x12, 0x7D, // A-umlaut
	0xF0, 0x28, 0x25, 0x28, 0xF0,
	0x7C, 0x54, 0x55, 0x45, 0x00,
	0x20, 0x54, 0x54, 0x7C, 0x54,
	0x7C, 0x0A, 0x09, 0x7F, 0x49,
	0x32, 0x49, 0x49, 0x49, 0x32,
	0x3A, 0x44, 0x44, 0x44, 0x3A, // o-umlaut
	0x32, 0x4A, 0x48, 0x48, 0x30,
	0x3A, 0x41, 0x41, 0x21, 0x7A,
	0x3A, 0x42, 0x40, 0x20, 0x78,
	0x00, 0x9D, 0xA0, 0xA0, 0x7D,
	0x3D, 0x42, 0x42, 0x42, 0x3D, // O-umlaut
	0x3D, 0x40, 0x40, 0x40, 0x3D,
	0x3C, 0x24, 0xFF, 0x24, 0x24,
	0x48, 0x7E, 0x49, 0x43, 0x66,
	0x2B, 0x2F, 0xFC, 0x2F, 0x2B,
	0xFF, 0x09, 0x29, 0xF6, 0x20,
	0xC0, 0x88, 0x7E, 0x09, 0x03,
	0x20, 0x54, 0x54, 0x79, 0x41,
	0x00, 0x00, 0x44, 0x7D, 0x41,
	0x30, 0x48, 0x48, 0x4A, 0x32,
	0x38, 0x40, 0x40, 0x22, 0x7A,
	0x00, 0x7A, 0x0A, 0x0A, 0x72,
	0x7D, 0x0D, 0x19, 0x31, 0x7D,
	0x26, 0x29, 0x29, 0x2F, 0x28,
	0x26, 0x29, 0x29, 0x29, 0x26,
	0x30, 0x48, 0x4D, 0x40, 0x20,
	0x38, 0x08, 0x08, 0x08, 0x08,
	0x08, 0x08, 0x08, 0x08, 0x38,
	0x2F, 0x10, 0xC8, 0xAC, 0xBA,
	0x2F, 0x10, 0x28, 0x34, 0xFA,
	0x00, 0x00, 0x7B, 0x00, 0x00,
	0x08, 0x14, 0x2A, 0x14, 0x22,
	0x22, 0x14, 0x2A, 0x14, 0x08,
	0x55, 0x00, 0x55, 0x00, 0x55, // #176 (25% block) missing in old code
	0xAA, 0x55, 0xAA, 0x55, 0xAA, // 50% block
	0xFF, 0x55, 0xFF, 0x55, 0xFF, // 75% block
	0x00, 0x00, 0x00, 0xFF, 0x00,
	0x10, 0x10, 0x10, 0xFF, 0x00,
	0x14, 0x14, 0x14, 0xFF, 0x00,
	0x10, 0x10, 0xFF, 0x00, 0xFF,
	0x10, 0x10, 0xF0, 0x10, 0xF0,
	0x14, 0x14, 0x14, 0xFC, 0x00,
	0x14, 0x14, 0xF7, 0x00, 0xFF,
	0x00, 0x00, 0xFF, 0x00, 0xFF,
	0x14, 0x14, 0xF4, 0x04, 0xFC,
	0x14, 0x14, 0x17, 0x10, 0x1F,
	0x10, 0x10, 0x1F, 0x10, 0x1F,
	0x14, 0x14, 0x14, 0x1F, 0x00,
	0x10, 0x10, 0x10, 0xF0, 0x00,
	0x00, 0x00, 0x00, 0x1F, 0x10,
	0x10, 0x10, 0x10, 0x1F, 0x10,
	0x10, 0x10, 0x10, 0xF0, 0x10,
	0x00, 0x00, 0x00, 0xFF, 0x10,
	0x10, 0x10, 0x10, 0x10, 0x10,
	0x10, 0x10, 0x10, 0xFF, 0x10,
	0x00, 0x00, 0x00, 0xFF, 0x14,
	0x00, 0x00, 0xFF, 0x00, 0xFF,
	0x00, 0x00, 0x1F, 0x10, 0x17,
	0x00, 0x00, 0xFC, 0x04, 0xF4,
	0x14, 0x14, 0x17, 0x10, 0x17,
	0x14, 0x14, 0xF4, 0x04, 0xF4,
	0x00, 0x00, 0xFF, 0x00, 0xF7,
	0x14, 0x14, 0x14, 0x14, 0x14,
	0x14, 0x14, 0xF7, 0x00, 0xF7,
	0x14, 0x14, 0x14, 0x17, 0x14,
	0x10, 0x10, 0x1F, 0x10, 0x1F,
	0x14, 0x14, 0x14, 0xF4, 0x14,
	0x10, 0x10, 0xF0, 0x10, 0xF0,
	0x00, 0x00, 0x1F, 0x10, 0x1F,
	0x00, 0x00, 0x00, 0x1F, 0x14,
	0x00, 0x00, 0x00, 0xFC, 0x14,
	0x00, 0x00, 0xF0, 0x10, 0xF0,
	0x10, 0x10, 0xFF, 0x10, 0xFF,
	0x14, 0x14, 0x14, 0xFF, 0x14,
	0x10, 0x10, 0x10, 0x1F, 0x00,
	0x00, 0x00, 0x00, 0xF0, 0x10,
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
	0xF0, 0xF0, 0xF0, 0xF0, 0xF0,
	0xFF, 0xFF, 0xFF, 0x00, 0x00,
	0x00, 0x00, 0x00, 0xFF, 0xFF,
	0x0F, 0x0F, 0x0F, 0x0F, 0x0F,
	0x38, 0x44, 0x44, 0x38, 0x44,
	0xFC, 0x4A, 0x4A, 0x4A, 0x34, // sharp-s or beta
	0x7E, 0x02, 0x02, 0x06, 0x06,
	0x02, 0x7E, 0x02, 0x7E, 0x02,
	0x63, 0x55, 0x49, 0x41, 0x63,
	0x38, 0x44, 0x44, 0x3C, 0x04,
	0x40, 0x7E, 0x20, 0x1E, 0x20,
	0x06, 0x02, 0x7E, 0x02, 0x02,
	0x99, 0xA5, 0xE7, 0xA5, 0x99,
	0x1C, 0x2A, 0x49, 0x2A, 0x1C,
	0x4C, 0x72, 0x01, 0x72, 0x4C,
	0x30, 0x4A, 0x4D, 0x4D, 0x30,
	0x30, 0x48, 0x78, 0x48, 0x30,
	0xBC, 0x62, 0x5A, 0x46, 0x3D,
	0x3E, 0x49, 0x49, 0x49, 0x00,
	0x7E, 0x01, 0x01, 0x01, 0x7E,
	0x2A, 0x2A, 0x2A, 0x2A, 0x2A,
	0x44, 0x44, 0x5F, 0x44, 0x44,
	0x40, 0x51, 0x4A, 0x44, 0x40,
	0x40, 0x44, 0x4A, 0x51, 0x40,
	0x00, 0x00, 0xFF, 0x01, 0x03,
	0xE0, 0x80, 0xFF, 0x00, 0x00,
	0x08, 0x08, 0x6B, 0x6B, 0x08,
	0x36, 0x12, 0x36, 0x24, 0x36,
	0x06, 0x0F, 0x09, 0x0F, 0x06,
	0x00, 0x00, 0x18, 0x18, 0x00,
	0x00, 0x00, 0x10, 0x10, 0x00,
	0x30, 0x40, 0xFF, 0x01, 0x01,
	0x00, 0x1F, 0x01, 0x01, 0x1E,
	0x00, 0x19, 0x1D, 0x17, 0x12,
	0x00, 0x3C, 0x3C, 0x3C, 0x3C,
	0x00, 0x00, 0x00, 0x00, 0x00  // #255 NBSP
};
#endif // FONT5X7_H

static const unsigned char font2[] PROGMEM = {
  0x49, 0x24, 0x92, 0x48, 0x01, 0xF8, 0xE7, 0xE7, 0x67, 0x42, 0x42, 0x42,
  0x42, 0x09, 0x02, 0x41, 0x10, 0x44, 0x11, 0x1F, 0xF1, 0x10, 0x4C, 0x12,
  0x3F, 0xE1, 0x20, 0x48, 0x12, 0x04, 0x81, 0x20, 0x48, 0x04, 0x07, 0xA2,
  0x19, 0x02, 0x40, 0x10, 0x03, 0x00, 0x3C, 0x00, 0x80, 0x10, 0x06, 0x01,
  0xE0, 0xA7, 0xC0, 0x40, 0x10, 0x04, 0x00, 0x3C, 0x19, 0x84, 0x21, 0x08,
  0x66, 0x0F, 0x00, 0x0C, 0x1C, 0x78, 0x01, 0xE0, 0xCC, 0x21, 0x08, 0x43,
  0x30, 0x78, 0x3E, 0x30, 0x10, 0x08, 0x02, 0x03, 0x03, 0x47, 0x14, 0x8A,
  0x43, 0x11, 0x8F, 0x60, 0xFD, 0xA4, 0x90, 0x05, 0x25, 0x24, 0x92, 0x48,
  0x92, 0x24, 0x11, 0x24, 0x89, 0x24, 0x92, 0x92, 0x90, 0x00, 0x04, 0x02,
  0x11, 0x07, 0xF0, 0xC0, 0x50, 0x48, 0x42, 0x00, 0x08, 0x04, 0x02, 0x01,
  0x00, 0x87, 0xFC, 0x20, 0x10, 0x08, 0x04, 0x02, 0x00, 0x3B, 0x9C, 0xCE,
  0x62, 0x00, 0xFF, 0xE0, 0xFF, 0x80, 0x00, 0x80, 0xC0, 0x40, 0x20, 0x20,
  0x10, 0x10, 0x08, 0x08, 0x04, 0x04, 0x02, 0x02, 0x01, 0x01, 0x00, 0x80,
  0x80, 0x40, 0x00, 0x1C, 0x31, 0x90, 0x58, 0x38, 0x0C, 0x06, 0x03, 0x01,
  0x80, 0xC0, 0x60, 0x30, 0x34, 0x13, 0x18, 0x70, 0x30, 0xE1, 0x44, 0x81,
  0x02, 0x04, 0x08, 0x10, 0x20, 0x40, 0x81, 0x1F, 0xC0, 0x1E, 0x10, 0x90,
  0x68, 0x10, 0x08, 0x0C, 0x04, 0x04, 0x04, 0x06, 0x06, 0x06, 0x06, 0x0E,
  0x07, 0xFE, 0x3E, 0x10, 0x40, 0x08, 0x02, 0x00, 0x80, 0x40, 0xE0, 0x04,
  0x00, 0x80, 0x10, 0x04, 0x01, 0x00, 0xD8, 0x63, 0xE0, 0x06, 0x0A, 0x0A,
  0x12, 0x22, 0x22, 0x42, 0x42, 0x82, 0x82, 0xFF, 0x02, 0x02, 0x02, 0x0F,
  0x7F, 0x20, 0x10, 0x08, 0x04, 0x02, 0xF1, 0x8C, 0x03, 0x00, 0x80, 0x40,
  0x20, 0x18, 0x16, 0x18, 0xF0, 0x0F, 0x8C, 0x08, 0x08, 0x04, 0x04, 0x02,
  0x79, 0x46, 0xC1, 0xE0, 0x60, 0x28, 0x14, 0x19, 0x08, 0x78, 0xFF, 0x81,
  0x81, 0x02, 0x02, 0x02, 0x02, 0x04, 0x04, 0x04, 0x04, 0x08, 0x08, 0x08,
  0x08, 0x3E, 0x31, 0xB0, 0x70, 0x18, 0x0C, 0x05, 0x8C, 0x38, 0x63, 0x40,
  0x60, 0x30, 0x18, 0x1B, 0x18, 0xF8, 0x3C, 0x31, 0x30, 0x50, 0x28, 0x0C,
  0x0F, 0x06, 0x85, 0x3C, 0x80, 0x40, 0x40, 0x20, 0x20, 0x63, 0xE0, 0xFF,
  0x80, 0x07, 0xFC, 0x39, 0xCE, 0x00, 0x00, 0x06, 0x33, 0x98, 0xC4, 0x00,
  0x00, 0xC0, 0x60, 0x18, 0x0C, 0x06, 0x01, 0x80, 0x0C, 0x00, 0x60, 0x03,
  0x00, 0x30, 0x01, 0x00, 0xFF, 0xF0, 0x00, 0x00, 0x0F, 0xFF, 0xC0, 0x06,
  0x00, 0x30, 0x01, 0x80, 0x18, 0x01, 0x80, 0xC0, 0x30, 0x18, 0x0C, 0x02,
  0x00, 0x00, 0x3E, 0x60, 0xA0, 0x20, 0x10, 0x08, 0x08, 0x18, 0x10, 0x08,
  0x00, 0x00, 0x00, 0x01, 0xC0, 0xE0, 0x1C, 0x31, 0x10, 0x50, 0x28, 0x14,
  0x3A, 0x25, 0x22, 0x91, 0x4C, 0xA3, 0xF0, 0x08, 0x02, 0x01, 0x80, 0x7C,
  0x3F, 0x00, 0x0C, 0x00, 0x48, 0x01, 0x20, 0x04, 0x40, 0x21, 0x00, 0x84,
  0x04, 0x08, 0x1F, 0xE0, 0x40, 0x82, 0x01, 0x08, 0x04, 0x20, 0x13, 0xE1,
  0xF0, 0xFF, 0x08, 0x11, 0x01, 0x20, 0x24, 0x04, 0x81, 0x1F, 0xC2, 0x06,
  0x40, 0x68, 0x05, 0x00, 0xA0, 0x14, 0x05, 0xFF, 0x00, 0x1E, 0x48, 0x74,
  0x05, 0x01, 0x80, 0x20, 0x08, 0x02, 0x00, 0x80, 0x20, 0x04, 0x01, 0x01,
  0x30, 0x87, 0xC0, 0xFE, 0x10, 0x44, 0x09, 0x02, 0x40, 0x50, 0x14, 0x05,
  0x01, 0x40, 0x50, 0x14, 0x0D, 0x02, 0x41, 0x3F, 0x80, 0xFF, 0xC8, 0x09,
  0x01, 0x20, 0x04, 0x00, 0x88, 0x1F, 0x02, 0x20, 0x40, 0x08, 0x01, 0x00,
  0xA0, 0x14, 0x03, 0xFF, 0xC0, 0xFF, 0xE8, 0x05, 0x00, 0xA0, 0x04, 0x00,
  0x88, 0x1F, 0x02, 0x20, 0x40, 0x08, 0x01, 0x00, 0x20, 0x04, 0x01, 0xF0,
  0x00, 0x1F, 0x46, 0x19, 0x01, 0x60, 0x28, 0x01, 0x00, 0x20, 0x04, 0x00,
  0x83, 0xF0, 0x0B, 0x01, 0x20, 0x23, 0x0C, 0x3E, 0x00, 0xE1, 0xD0, 0x24,
  0x09, 0x02, 0x40, 0x90, 0x27, 0xF9, 0x02, 0x40, 0x90, 0x24, 0x09, 0x02,
  0x40, 0xB8, 0x70, 0xFE, 0x20, 0x40, 0x81, 0x02, 0x04, 0x08, 0x10, 0x20,
  0x40, 0x81, 0x1F, 0xC0, 0x0F, 0xE0, 0x10, 0x02, 0x00, 0x40, 0x08, 0x01,
  0x00, 0x20, 0x04, 0x80, 0x90, 0x12, 0x02, 0x40, 0xC6, 0x30, 0x7C, 0x00,
  0xF1, 0xE4, 0x0C, 0x41, 0x04, 0x20, 0x44, 0x04, 0x80, 0x5C, 0x06, 0x60,
  0x43, 0x04, 0x10, 0x40, 0x84, 0x08, 0x40, 0xCF, 0x07, 0xF8, 0x04, 0x00,
  0x80, 0x10, 0x02, 0x00, 0x40, 0x08, 0x01, 0x00, 0x20, 0x04, 0x04, 0x80,
  0x90, 0x12, 0x03, 0xFF, 0xC0, 0xE0, 0x3B, 0x01, 0x94, 0x14, 0xA0, 0xA4,
  0x89, 0x24, 0x49, 0x14, 0x48, 0xA2, 0x45, 0x12, 0x10, 0x90, 0x04, 0x80,
  0x24, 0x01, 0x78, 0x3C, 0xE0, 0xF6, 0x02, 0x50, 0x25, 0x02, 0x48, 0x24,
  0xC2, 0x44, 0x24, 0x22, 0x43, 0x24, 0x12, 0x40, 0xA4, 0x0A, 0x40, 0x6F,
  0x06, 0x0F, 0x03, 0x0C, 0x60, 0x64, 0x02, 0x80, 0x18, 0x01, 0x80, 0x18,
  0x01, 0x80, 0x18, 0x01, 0x40, 0x26, 0x06, 0x30, 0xC0, 0xF0, 0xFF, 0x10,
  0x64, 0x05, 0x01, 0x40, 0x50, 0x34, 0x19, 0xFC, 0x40, 0x10, 0x04, 0x01,
  0x00, 0x40, 0x3E, 0x00, 0x0F, 0x03, 0x0C, 0x60, 0x64, 0x02, 0x80, 0x18,
  0x01, 0x80, 0x18, 0x01, 0x80, 0x18, 0x01, 0x40, 0x26, 0x06, 0x30, 0xC1,
  0xF0, 0x0C, 0x01, 0xF1, 0x30, 0xE0, 0xFF, 0x04, 0x18, 0x40, 0xC4, 0x04,
  0x40, 0x44, 0x0C, 0x41, 0x87, 0xE0, 0x43, 0x04, 0x10, 0x40, 0x84, 0x04,
  0x40, 0x4F, 0x03, 0x1F, 0x48, 0x34, 0x05, 0x01, 0x40, 0x08, 0x01, 0xC0,
  0x0E, 0x00, 0x40, 0x18, 0x06, 0x01, 0xE1, 0xA7, 0xC0, 0xFF, 0xF0, 0x86,
  0x10, 0x82, 0x00, 0x40, 0x08, 0x01, 0x00, 0x20, 0x04, 0x00, 0x80, 0x10,
  0x02, 0x00, 0x40, 0x7F, 0x00, 0xF0, 0xF4, 0x02, 0x40, 0x24, 0x02, 0x40,
  0x24, 0x02, 0x40, 0x24, 0x02, 0x40, 0x24, 0x02, 0x40, 0x22, 0x04, 0x30,
  0xC0, 0xF0, 0xF8, 0x7C, 0x80, 0x22, 0x01, 0x04, 0x04, 0x10, 0x20, 0x40,
  0x80, 0x82, 0x02, 0x10, 0x08, 0x40, 0x11, 0x00, 0x48, 0x01, 0xA0, 0x03,
  0x00, 0x0C, 0x00, 0xF8, 0x7C, 0x80, 0x22, 0x00, 0x88, 0xC2, 0x23, 0x10,
  0x8E, 0x42, 0x29, 0x09, 0x24, 0x24, 0x90, 0x91, 0x41, 0x85, 0x06, 0x14,
  0x18, 0x70, 0x60, 0x80, 0xF0, 0xF2, 0x06, 0x30, 0x41, 0x08, 0x09, 0x80,
  0x50, 0x06, 0x00, 0x60, 0x0D, 0x00, 0x88, 0x10, 0xC2, 0x04, 0x60, 0x2F,
  0x0F, 0xF0, 0xF2, 0x02, 0x10, 0x41, 0x04, 0x08, 0x80, 0x50, 0x05, 0x00,
  0x20, 0x02, 0x00, 0x20, 0x02, 0x00, 0x20, 0x02, 0x01, 0xFC, 0xFF, 0x40,
  0xA0, 0x90, 0x40, 0x40, 0x40, 0x20, 0x20, 0x20, 0x10, 0x50, 0x30, 0x18,
  0x0F, 0xFC, 0xF2, 0x49, 0x24, 0x92, 0x49, 0x24, 0x9C, 0x80, 0x60, 0x10,
  0x08, 0x02, 0x01, 0x00, 0x40, 0x20, 0x08, 0x04, 0x01, 0x00, 0x80, 0x20,
  0x10, 0x04, 0x02, 0x00, 0x80, 0x40, 0xE4, 0x92, 0x49, 0x24, 0x92, 0x49,
  0x3C, 0x08, 0x0C, 0x09, 0x0C, 0x4C, 0x14, 0x04, 0xFF, 0xFC, 0x84, 0x21,
  0x3E, 0x00, 0x60, 0x08, 0x02, 0x3F, 0x98, 0x28, 0x0A, 0x02, 0xC3, 0x9F,
  0x30, 0xE0, 0x01, 0x00, 0x08, 0x00, 0x40, 0x02, 0x00, 0x13, 0xE0, 0xA0,
  0x86, 0x02, 0x20, 0x09, 0x00, 0x48, 0x02, 0x40, 0x13, 0x01, 0x14, 0x1B,
  0x9F, 0x00, 0x1F, 0x4C, 0x19, 0x01, 0x40, 0x28, 0x01, 0x00, 0x20, 0x02,
  0x00, 0x60, 0x43, 0xF0, 0x00, 0xC0, 0x08, 0x01, 0x00, 0x20, 0x04, 0x3C,
  0x98, 0x52, 0x06, 0x80, 0x50, 0x0A, 0x01, 0x40, 0x24, 0x0C, 0xC2, 0x87,
  0x98, 0x3F, 0x18, 0x68, 0x06, 0x01, 0xFF, 0xE0, 0x08, 0x03, 0x00, 0x60,
  0xC7, 0xC0, 0x0F, 0x98, 0x08, 0x04, 0x02, 0x07, 0xF8, 0x80, 0x40, 0x20,
  0x10, 0x08, 0x04, 0x02, 0x01, 0x03, 0xF8, 0x1E, 0x6C, 0x39, 0x03, 0x40,
  0x28, 0x05, 0x00, 0xA0, 0x12, 0x06, 0x61, 0x43, 0xC8, 0x01, 0x00, 0x20,
  0x08, 0x3E, 0x00, 0xC0, 0x10, 0x04, 0x01, 0x00, 0x40, 0x13, 0x87, 0x11,
  0x82, 0x40, 0x90, 0x24, 0x09, 0x02, 0x40, 0x90, 0x2E, 0x1C, 0x08, 0x04,
  0x02, 0x00, 0x00, 0x03, 0xC0, 0x20, 0x10, 0x08, 0x04, 0x02, 0x01, 0x00,
  0x80, 0x43, 0xFE, 0x04, 0x08, 0x10, 0x00, 0x1F, 0xC0, 0x81, 0x02, 0x04,
  0x08, 0x10, 0x20, 0x40, 0x81, 0x02, 0x0B, 0xE0, 0xE0, 0x02, 0x00, 0x20,
  0x02, 0x00, 0x20, 0x02, 0x3C, 0x21, 0x02, 0x60, 0x2C, 0x03, 0x80, 0x24,
  0x02, 0x20, 0x21, 0x02, 0x08, 0xE1, 0xF0, 0x78, 0x04, 0x02, 0x01, 0x00,
  0x80, 0x40, 0x20, 0x10, 0x08, 0x04, 0x02, 0x01, 0x00, 0x80, 0x43, 0xFE,
  0xDC, 0xE3, 0x19, 0x90, 0x84, 0x84, 0x24, 0x21, 0x21, 0x09, 0x08, 0x48,
  0x42, 0x42, 0x17, 0x18, 0xC0, 0x67, 0x83, 0x84, 0x20, 0x22, 0x02, 0x20,
  0x22, 0x02, 0x20, 0x22, 0x02, 0x20, 0x2F, 0x07, 0x1F, 0x04, 0x11, 0x01,
  0x40, 0x18, 0x03, 0x00, 0x60, 0x0A, 0x02, 0x20, 0x83, 0xE0, 0xCF, 0x85,
  0x06, 0x60, 0x24, 0x01, 0x40, 0x14, 0x01, 0x40, 0x16, 0x02, 0x50, 0x44,
  0xF8, 0x40, 0x04, 0x00, 0x40, 0x0F, 0x00, 0x1E, 0x6C, 0x3B, 0x03, 0x40,
  0x28, 0x05, 0x00, 0xA0, 0x12, 0x06, 0x61, 0x43, 0xC8, 0x01, 0x00, 0x20,
  0x04, 0x03, 0xC0, 0xE3, 0x8B, 0x13, 0x80, 0x80, 0x20, 0x08, 0x02, 0x00,
  0x80, 0x20, 0x3F, 0x80, 0x1F, 0x58, 0x34, 0x05, 0x80, 0x1E, 0x00, 0x60,
  0x06, 0x01, 0xC0, 0xAF, 0xC0, 0x20, 0x04, 0x00, 0x80, 0x10, 0x0F, 0xF0,
  0x40, 0x08, 0x01, 0x00, 0x20, 0x04, 0x00, 0x80, 0x10, 0x03, 0x04, 0x3F,
  0x00, 0xC1, 0xC8, 0x09, 0x01, 0x20, 0x24, 0x04, 0x80, 0x90, 0x12, 0x02,
  0x61, 0xC7, 0xCC, 0xF8, 0xF9, 0x01, 0x08, 0x10, 0x60, 0x81, 0x08, 0x08,
  0x40, 0x22, 0x01, 0x20, 0x05, 0x00, 0x30, 0x00, 0xF0, 0x7A, 0x01, 0x10,
  0x08, 0x8C, 0x42, 0x62, 0x12, 0x90, 0xA5, 0x05, 0x18, 0x28, 0xC0, 0x86,
  0x00, 0x78, 0xF3, 0x04, 0x18, 0x80, 0xD0, 0x06, 0x00, 0x70, 0x09, 0x81,
  0x0C, 0x20, 0x6F, 0x8F, 0xF0, 0xF2, 0x02, 0x20, 0x41, 0x04, 0x10, 0x80,
  0x88, 0x09, 0x00, 0x50, 0x06, 0x00, 0x20, 0x04, 0x00, 0x40, 0x08, 0x0F,
  0xE0, 0xFF, 0x41, 0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x40, 0xBF,
  0xC0, 0x19, 0x08, 0x42, 0x10, 0x84, 0x64, 0x18, 0x42, 0x10, 0x84, 0x20,
  0xC0, 0xFF, 0xFF, 0xC0, 0xC1, 0x08, 0x42, 0x10, 0x84, 0x10, 0x4C, 0x42,
  0x10, 0x84, 0x26, 0x00, 0x38, 0x13, 0x38, 0x38 };