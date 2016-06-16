// Joshimuz 2016

#include "Sprites.h"

PROGMEM const unsigned char titleScreen[] =
{
	0x00, 0x80, 0xc0, 0xe0, 0xf0, 0x70, 0x78, 0x38,
	0x3c, 0x1c, 0x1c, 0x1e, 0x0e, 0x0e, 0x0e, 0x0e,
	0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07,
	0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07,
	0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07,
	0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07,
	0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07,
	0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07,
	0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07,
	0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07,
	0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07,
	0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07,
	0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07,
	0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07,
	0x0e, 0x0e, 0x0e, 0x0e, 0x1e, 0x1c, 0x1c, 0x3c,
	0x38, 0x78, 0x70, 0xf0, 0xe0, 0xc0, 0x80, 0x00,
	0xfe, 0xff, 0xff, 0x03, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x02, 0x82, 0xbe, 0x82, 0x82,
	0x80, 0xbe, 0x88, 0x88, 0x88, 0xbe, 0x80, 0xbe,
	0xaa, 0x2a, 0x2a, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00,
	0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00,
	0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
	0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80,
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
	0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80,
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
	0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x03, 0xff, 0xff, 0xfe,
	0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0xff, 0xff, 0x03, 0x01, 0xf9,
	0xf9, 0x89, 0x89, 0x89, 0x89, 0xf9, 0x71, 0x01,
	0x83, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff,
	0xff, 0x03, 0x01, 0x03, 0xff, 0xff, 0x00, 0x00,
	0xff, 0xff, 0x03, 0x01, 0x03, 0xff, 0xff, 0x00,
	0x00, 0xff, 0xff, 0x03, 0x01, 0x01, 0x01, 0x01,
	0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x03, 0xff,
	0xff, 0x00, 0x00, 0xff, 0xff, 0x03, 0x01, 0x01,
	0x01, 0x81, 0xc1, 0xc1, 0xc1, 0xc1, 0xc1, 0xc1,
	0xe3, 0x7f, 0x3e, 0x00, 0x00, 0xff, 0xff, 0x03,
	0x01, 0x01, 0xe1, 0xf1, 0xb1, 0xb1, 0xb1, 0xb1,
	0xb1, 0xb1, 0x3b, 0x3f, 0x1f, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0xf8,
	0xf8, 0x88, 0x88, 0x88, 0x88, 0xf8, 0x70, 0x07,
	0x0f, 0xfd, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff,
	0xff, 0x00, 0x00, 0x00, 0x3f, 0x7f, 0x60, 0x60,
	0x7f, 0x3f, 0x00, 0x00, 0x00, 0xff, 0xff, 0x00,
	0x00, 0xff, 0xff, 0x00, 0x00, 0x00, 0xfe, 0xff,
	0x03, 0x03, 0xff, 0xfe, 0x00, 0x00, 0x00, 0xff,
	0xff, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0x00,
	0x00, 0x0f, 0x1f, 0x18, 0x18, 0x18, 0x18, 0x18,
	0x38, 0xf0, 0xe0, 0x00, 0x00, 0xff, 0xff, 0x00,
	0x00, 0x00, 0x38, 0x7d, 0x6d, 0x6d, 0x6d, 0x6d,
	0x6d, 0x6f, 0xe7, 0xe0, 0xc0, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x07, 0x0f, 0x0c, 0x0c, 0x0c,
	0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c,
	0x0e, 0x07, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07,
	0x0f, 0x0e, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c,
	0x0c, 0x0c, 0x0c, 0x0c, 0x0e, 0x0f, 0x07, 0x00,
	0x00, 0x07, 0x0f, 0x0e, 0x0c, 0x0e, 0x0f, 0x07,
	0x00, 0x00, 0x07, 0x0f, 0x0e, 0x0c, 0x0e, 0x0f,
	0x07, 0x00, 0x00, 0x07, 0x0f, 0x0e, 0x0c, 0x0c,
	0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c,
	0x0e, 0x07, 0x03, 0x00, 0x00, 0x07, 0x0f, 0x0c,
	0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c,
	0x0c, 0x0c, 0x0e, 0x0f, 0x07, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff,
	0x7f, 0xff, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0xc0, 0xff, 0xff, 0x7f,
	0x00, 0x01, 0x03, 0x07, 0x0f, 0x0e, 0x1e, 0x1c,
	0x3c, 0x38, 0x38, 0x78, 0x70, 0x70, 0x70, 0x70,
	0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0,
	0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0,
	0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0,
	0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0,
	0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0,
	0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0,
	0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0,
	0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0,
	0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0,
	0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0,
	0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0,
	0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0,
	0x70, 0x70, 0x70, 0x70, 0x78, 0x38, 0x38, 0x3c,
	0x1c, 0x1e, 0x0e, 0x0f, 0x07, 0x03, 0x01, 0x00
};

PROGMEM const unsigned char playButton[] =
{
	0xff, 0xff, 0xff, 0xff, 0x01, 0xed, 0xed, 0xed,
	0xe1, 0xff, 0x01, 0xff, 0xff, 0xff, 0xff, 0xff,
	0x03, 0xdd, 0xdd, 0xdd, 0x03, 0xff, 0xf1, 0xcf,
	0x3f, 0xcf, 0xf1, 0xff, 0xff, 0xff, 0xff, 0x3f,
	0x3f, 0x3f, 0x3f, 0x3c, 0x3f, 0x3f, 0x3f, 0x3f,
	0x3f, 0x3c, 0x3d, 0x3d, 0x3d, 0x3d, 0x3f, 0x3c,
	0x3f, 0x3f, 0x3f, 0x3c, 0x3f, 0x3f, 0x3f, 0x3c,
	0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f,
};

PROGMEM const unsigned char configButton[] = 
{
	0xff, 0xff, 0xff, 0xff, 0x01, 0xfd, 0xfd, 0xfd,
	0xfd, 0xff, 0x01, 0xfd, 0xfd, 0xfd, 0x01, 0xff,
	0x01, 0xfd, 0xfd, 0xfd, 0x01, 0xff, 0x01, 0xed,
	0xed, 0xed, 0xed, 0xff, 0xff, 0xff, 0xff, 0x3f,
	0x3f, 0x3f, 0x3f, 0x3c, 0x3d, 0x3d, 0x3d, 0x3d,
	0x3f, 0x3c, 0x3d, 0x3d, 0x3d, 0x3c, 0x3f, 0x3c,
	0x3f, 0x3f, 0x3f, 0x3c, 0x3f, 0x3c, 0x3f, 0x3f,
	0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f
};

PROGMEM const unsigned char abButtons[] = 
{
	0x80, 0xc0, 0xe0, 0x30, 0xb0, 0xb0, 0x30, 0xe0,
	0xc0, 0x80, 0x78, 0xfc, 0xfe, 0x03, 0x6b, 0x6b,
	0x87, 0xfe, 0xfc, 0x78, 0x07, 0x0f, 0x1f, 0x30,
	0x3d, 0x3d, 0x30, 0x1f, 0x0f, 0x07, 0x00, 0x00,
	0x01, 0x03, 0x03, 0x03, 0x03, 0x01, 0x00, 0x00
};

PROGMEM const unsigned char buttonBase[] = 
{
	0x08, 0x0c, 0x0a, 0x09, 0x09, 0x09, 0x09, 0x09,
	0x09, 0x09, 0x09, 0x09, 0x09, 0x0a, 0x0c, 0x08
};

PROGMEM const unsigned char menuBall[] =
{
	0xc0, 0xf0, 0x38, 0x0c, 0x06, 0x06, 0x03, 0x03,
	0x03, 0x03, 0x06, 0x06, 0x0c, 0x38, 0xf0, 0xc0,
	0x03, 0x0f, 0x1c, 0x30, 0x60, 0x60, 0xc0, 0xc0,
	0xc0, 0xc0, 0x60, 0x60, 0x30, 0x1c, 0x0f, 0x03,
};