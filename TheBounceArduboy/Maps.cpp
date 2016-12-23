// Joshimuz 2016

#include "Maps.h"

// Levels stored in Flash to save RAM, copied to currentMapData when needed
PROGMEM const MapObject level1[LEVEL1ARRAYSIZE] =
{
	{ 0, 64, 64, 4, 0 },
	{ 60, 68, 4, 32, 0 },
	{ 0, 16, 4, 48, 0 },
	{ 0, 12, 86, 4, 0 },
	{ 86, 12, 4, 32, 0 },
	{ 60, 100, 170, 4, 0 },
	{ 86, 44, 100, 4, 0 },
	{ 120, 90, 10, 10, 0 },
	{ 155, 85, 15, 15, 0 },
	{ 200, 85, 15, 15, 0 },
	{ 215, 85, 15, 15, 0 },
	{ 220, 75, 10, 10, 0 },
	{ 230, 75, 100, 4, 0 },
	{ 300, 45, 30, 30, 0 },
	{ 330, 15, 30, 30, 0 },
	{ 360, 15, 70, 4, 0 },
	{ 186, 24, 4, 24, 0 },
	{ 186, 20, 80, 4, 0 },
	{ 266, -30, 4, 54, 0 },
	{ 270, -30, 160, 4, 0 },
	{ 426, -26, 4, 41, 0 },
	{ 406, -10, 10, 25, 2 }
};
PROGMEM const MapObject level2[LEVEL2ARRAYSIZE] =
{
	{ -84, 64, 148, 4, 0 },
	{ 64, 28, 4, 40, 0 },
	{ 0, 28, 64, 4, 0 },
	{ -32, 28, 32, 14, 0 },
	{ -64, 28, 32, 20, 0 },
	{ -96, 28, 32, 24, 0 },
	{ -192, 128, 108, 4, 0 },
	{ -84, 68, 4, 64, 0 },
	{ -160, 95, 32, 23, 0 },
	{ -132, 63, 4, 32, 0 },
	{ -192, 64, 4, 64, 0 },
	{ -192, 60, 64, 4, 0 },
	{ -150, 70, 10, 25, 2 }
};
PROGMEM const MapObject level3[LEVEL3ARRAYSIZE] =
{
	{ 0, 64, 224, 4, 0 },
	{ 64, 40, 32, 4, 0 },
	{ 96, 16, 30, 4, 0 },
	{ 128, -12, 28, 4, 0 },
	{ 160, -36, 224, 4, 0 },
	{ 224, -60, 20, 4, 0 },
	{ 256, -84, 18, 4, 0 },
	{ 288, -108, 16, 4, 0 },
	{ 320, -132, 128, 4, 0 },
	{ 352, -156, 20, 4, 0 },
	{ 384, -180, 18, 4, 0 },
	{ 352, -204, 16, 4, 0 },
	{ 384, -228, 64, 4, 0 },
	{ 410, -253, 10, 25, 2 }
};
PROGMEM const MapObject level4[LEVEL4ARRAYSIZE] =
{
	{ 0, 64, 255, 4, 0 },
	{ -4, -32, 4, 100, 0 },
	{ 64, 49, 15, 15, 0 },
	{ 96, -32, 15, 81, 0 },
	{ 160, 44, 20, 20, 0 },
	{ 192, -32, 15, 86, 0 },
	{ 254, 44, 5, 20, 3 },
	{ 255, 64, 255, 4, 0 },
	{ 302, 56, 4, 7, 1 },
	{ 326, -32, 11, 80, 0 },
	{ 364, 49, 15, 15, 0 },
	{ 394, 39, 4, 7, 11 },
	{ 390, -32, 11, 70, 0 },
	{ 430, 56, 4, 7, 1 },
	{ 458, 39, 4, 7, 11 },
	{ 454, -32, 11, 70, 0 },
	{ 490, 39, 10, 25, 2 },
	{ 510, -32, 4, 100, 0 }
};
PROGMEM const MapObject level5[LEVEL5ARRAYSIZE] =
{
	{ 0, 64, 255, 4, 0 },
	{ 0, 0, 4, 64, 0 },
	{ 66, 57, 4, 7, 1 },
	{ 130, 57, 4, 7, 1 },
	{ 140, 57, 4, 7, 1 },
	{ 150, 57, 4, 7, 1 },
	{ 214, 57, 4, 7, 1 },
	{ 224, 57, 4, 7, 1 },
	{ 249, 57, 4, 7, 1 },
	{ 259, 57, 4, 7, 1 },
	{ 254, 64, 192, 4, 0 },
	{ 313, 56, 44, 8, 15 },
	{ 363, 57, 4, 7, 1 },
	{ 333, 44, 14, 4, 0 },
	{ 393, 44, 5, 20, 3 },
	{ 446, 64, 4, 14, 0 },
	{ 446, 78, 64, 4, 0 },
	{ 506, 64, 4, 14, 0 },
	{ 452, 71, 4, 7, 1 },
	{ 464, 71, 4, 7, 1 },
	{ 476, 71, 4, 7, 1 },
	{ 488, 71, 4, 7, 1 },
	{ 500, 71, 4, 7, 1 },
	{ 510, 64, 200, 4, 0 },
	{ 522, 56, 44, 8, 15 },
	{ 631, 57, 4, 7, 1 },
	{ 637, 54, 11, 10, 0 },
	{ 641, 47, 4, 7, 1 },
	{ 647, 44, 11, 10, 0 },
	{ 647, 54, 11, 10, 0 },
	{ 651, 37, 4, 7, 1 },
	{ 657, 54, 11, 10, 0 },
	{ 661, 47, 4, 7, 1 },
	{ 671, 57, 4, 7, 1 },
	{ 690, 39, 10, 25, 2 }
};
PROGMEM const MapObject level6[LEVEL6ARRAYSIZE] =
{
	{ 0, 64, 255, 4, 0 },
	{ 0, 0, 255, 4, 0 },
	{ 0, 4, 4, 60, 0 },
	{ 66, 9, 4, 7, 11 },
	{ 66, 52, 4, 7, 1 },
	{ 62, 4, 11, 4, 0 },
	{ 62, 60, 11, 4, 0 },
	{ 130, 13, 4, 7, 11 },
	{ 130, 48, 4, 7, 1 },
	{ 126, 4, 11, 8, 0 },
	{ 126, 56, 11, 8, 0 },
	{ 194, 9, 4, 7, 11 },
	{ 194, 44, 4, 7, 1 },
	{ 190, 4, 11, 4, 0 },
	{ 190, 52, 11, 12, 0 },
	{ 240, 44, 5, 20, 3 },
	{ 290, 64, 20, 4, 0 },
	{ 322, 9, 4, 7, 11 },
	{ 322, 52, 4, 7, 1 },
	{ 332, 9, 4, 7, 11 },
	{ 332, 52, 4, 7, 1 },
	{ 350, 44, 20, 4, 0 },
	{ 382, -11, 4, 7, 11 },
	{ 382, 32, 4, 7, 1 },
	{ 392, -11, 4, 7, 11 },
	{ 392, 32, 4, 7, 1 },
	{ 410, 175, 130, 4, 0 },
	{ 500, 155, 5, 20, 3 },
	{ 510, 130, 161, 4, 0 },
	{ 510, 190, 161, 4, 0 },
	{ 514, 182, 44, 8, 15 },
	{ 514, 134, 44, 8, 16 },
	{ 564, 182, 44, 8, 15 },
	{ 564, 134, 44, 8, 16 },
	{ 614, 182, 44, 8, 15 },
	{ 614, 134, 44, 8, 16 },
	{ 664, 183, 4, 7, 1 },
	{ 664, 135, 4, 7, 11 },
	{ 557, 160, 30, 4, 0 },
	{ 600, 175, 30, 4, 0 },
	{ 635, 155, 30, 4, 0 },
	{ 660, 175, 96, 4, 0 },
	{ 700, 155, 5, 20, 3 },
	{ 777, 156, 4, 7, 11 },
	{ 773, 105, 11, 50, 0 },
	{ 800, 175, 30, 4, 0 },
	{ 815, 150, 10, 25, 2 }
};
PROGMEM const MapObject level7[LEVEL7ARRAYSIZE] =
{
	{ -50, 64, 105, 4, 0 },
	{ -20, 16, 4, 48, 0 },
	{ -10, 60, 16, 4, 6 },
	{ 51, 16, 4, 48, 0 },
	{ -125, 12, 180, 4, 0 },
	{ -50, 68, 4, 64, 0 },
	{ -255, 132, 209, 4, 0 },
	{ -155, 68, 4, 64, 0 },
	{ -125, 16, 4, 116, 100 },
	{ -146, 128, 16, 4, 7 },
	{ -225, 0, 4, 74, 0 },
	{ -285, 68, 4, 64, 0 },
	{ -255, 128, 16, 4, 106 },
	{ -275, 128, 16, 4, 7 },
	{ -510, 132, 255, 4, 0 },
	{ -417, 107, 10, 25, 102 },
	{ -460, 104, 16, 4, 107 },
	{ -340, 80, 16, 4, 107 },
	{ -500, 116, 16, 4, 107 },
	{ -420, 92, 16, 4, 107 },
	{ -380, 104, 16, 4, 107 },
	{ -500, 80, 16, 4, 107 },
	{ -340, 116, 16, 4, 7 },
	{ -510, 0, 4, 132, 0 }
};
PROGMEM const MapObject level8[LEVEL8ARRAYSIZE] =
{
	{ 0, 64, 128, 4, 0 },
	{ -4, 0, 4, 68, 0 },
	{ 0, 0, 84, 4, 0 },
	{ 124, -64, 4, 128, 0 },
	{ 84, -64, 4, 128, 100 },
	{ 98, 60, 16, 4, 7 },
	{ 120, -192, 4, 132, 0 },
	{ 88, -192, 4, 132, 0 },
	{ 116, -320, 4, 132, 0 },
	{ 92, -360, 4, 172, 0 },
	{ 120, -320, 168, 4, 0 },
	{ 96, -360, 158, 4, 0 },
	{ 208, -335, 15, 15, 0 },
	{ 288, -500, 4, 184, 0 },
	{ 254, -500, 4, 144, 0 },
	{ 258, -375, 30, 30, 0 },
	{ 268, -324, 16, 4, 6 },
	{ 292, -684, 4, 188, 0 },
	{ 250, -684, 4, 188, 0 },
	{ 200, -684, 50, 4, 0 },
	{ 296, -684, 50, 4, 0 },
	{ 200, -740, 4, 56, 0 },
	{ 342, -740, 4, 56, 0 },
	{ 130, -740, 70, 4, 0 },
	{ 130, -780, 4, 40, 0 },
	{ 130, -784, 110, 4, 0 },
	{ 240, -784, 4, 70, 0 },
	{ 244, -718, 58, 4, 0 },
	{ 302, -784, 4, 70, 0 },
	{ 306, -784, 130, 4, 0 },
	{ 268, -714, 12, 12, 0 },
	{ 204, -746, 36, 36, 0 },
	{ 320, -688, 16, 4, 6 },
	{ 306, -746, 36, 36, 0 },
	{ 140, -744, 16, 4, 6 },
	{ 80, -120, 8, 4, 0 },
	{ 128, -52, 8, 4, 0 },
	{ 120, -250, 8, 4, 0 },
	{ 246, -458, 8, 4, 0 },
	{ 296, -550, 8, 4, 0 },
	{ 296, -650, 8, 4, 0 },
	{ 242, -600, 8, 4, 0 },
	{ 346, -740, 40, 4, 0 },
	{ 386, -740, 4, 172, 0 },
	{ 432, -780, 4, 212, 0 },
	{ 390, -572, 4, 172, 0 },
	{ 428, -572, 4, 172, 0 },
	{ 394, -404, 4, 172, 0 },
	{ 424, -404, 4, 172, 0 },
	{ 398, -236, 4, 172, 0 },
	{ 420, -236, 4, 172, 0 },
	{ 406, -93, 10, 25, 2 },
	{ 402, -68, 18, 4, 0 }
};
PROGMEM const MapObject level9[LEVEL9ARRAYSIZE] =
{
	{ 0, 48, 40, 4, 0 },
	{ 40, 28, 4, 24, 0 },
	{ 40, 24, 40, 4, 0 },
	{ 80, 4, 4, 24, 0 },
	{ 80, 0, 40, 4, 0 },
	{ 80, -10, 10, 10, 0 },
	{ 120, -20, 4, 24, 0 },
	{ 120, -24, 40, 4, 0 },
	{ 124, -31, 4, 7, 1 },
	{ 160, -44, 4, 24, 0 },
	{ 160, -48, 40, 4, 0 },
	{ 160, -158, 4, 95, 0 },
	{ 180, -68, 5, 20, 3 },
	{ 200, -68, 4, 24, 0 },
	{ 200, -72, 40, 4, 0 },
	{ 198, -182, 11, 85, 0 },
	{ 202, -98, 4, 7, 11 },
	{ 240, -92, 4, 24, 0 },
	{ 240, -96, 40, 4, 0 },
	{ 240, -116, 20, 20, 0 },
	{ 280, -116, 4, 24, 0 },
	{ 280, -120, 40, 4, 0 },
	{ 320, -140, 4, 24, 0 },
	{ 320, -144, 10, 4, 0 },
	{ 360, -164, 4, 24, 0 },
	{ 360, -168, 40, 4, 0 },
	{ 380, -188, 5, 20, 3 },
	{ 400, -188, 4, 24, 0 },
	{ 400, -192, 40, 4, 0 },
	{ 412, -199, 4, 7, 1 },
	{ 434, -199, 4, 7, 1 },
	{ 440, -212, 4, 24, 0 },
	{ 440, -216, 40, 4, 0 },
	{ 452, -223, 4, 7, 1 },
	{ 480, -236, 4, 24, 0 },
	{ 480, -240, 40, 4, 0 },
	{ 520, -294, 4, 30, 0 },
	{ 500, -244, 16, 4, 6 },
	{ 520, -260, 4, 24, 0 },
	{ 520, -264, 40, 4, 0 },
	{ 500, -244, 16, 4, 6 },
	{ 560, -284, 4, 24, 0 },
	{ 560, -288, 40, 4, 0 },
	{ 580, -313, 10, 25, 2 }
};
PROGMEM const MapObject level10[LEVEL10ARRAYSIZE] =
{
	{ 48, -20, 10, 20, 2 },
	{ 40, 0, 24, 4, 0 },
	{ 0, -24, 64, 4, 0 },
	{ 0, 64, 255, 4, 0 },
	{ 0, -24, 4, 88, 0 },
	{ 64, -96, 4, 128, 0 },
	{ 128, -28, 4, 92, 0 },
	{ 255, 64, 143, 4, 0 },
	{ 98, 32, 30, 4, 0 },
	{ 120, 24, 4, 7, 1 },
	{ 116, 37, 4, 7, 11 },
	{ 68, 0, 30, 4, 0 },
	{ 73, -8, 4, 7, 1 },
	{ 77, 5, 4, 7, 11 },
	{ 98, -32, 188, 4, 0 },
	{ 120, -52, 20, 20, 0 },
	{ 72, -68, 16, 4, 6 },
	{ 116, -27, 4, 7, 11 },
	{ 68, -64, 30, 4, 0 },
	{ 64, -100, 68, 4, 0 },
	{ 128, -96, 4, 44, 0 },
	{ 256, -28, 4, 72, 0 },
	{ 132, -56, 32, 4, 0 },
	{ 164, -88, 4, 36, 0 },
	{ 168, -88, 88, 4, 0 },
	{ 172, -83, 4, 7, 11 },
	{ 182, -83, 4, 7, 11 },
	{ 205, -40, 4, 7, 1 },
	{ 215, -40, 4, 7, 1 },
	{ 238, -83, 4, 7, 11 },
	{ 248, -83, 4, 7, 11 },
	{ 256, -88, 4, 32, 0 },
	{ 260, -60, 64, 4, 0 },
	{ 324, -90, 4, 98, 0 },
	{ 317, -55, 4, 7, 11 },
	{ 279, -27, 4, 7, 11 },
	{ 294, 8, 70, 4, 0 },
	{ 298, 13, 4, 7, 11 },
	{ 356, 44, 20, 20, 0 },
	{ 140, 60, 16, 4, 6 },
	{ 324, 44, 5, 20, 3 },
	{ 364, -60, 4, 104, 0 },
	{ 192, 8, 4, 56, 0 },
	{ 193, 0, 4, 7, 1 },
	{ 196, 40, 30, 4, 0 },
	{ 162, 40, 30, 4, 0 },
	{ 226, 8, 30, 4, 0 },
	{ 132, 8, 30, 4, 0 },
	{ 394, -90, 4, 154, 0 },
	{ 328, -90, 66, 4, 0 },
	{ 338, 4, 16, 4, 8 },
	{ 90, -84, 2, 20, 3 }
};

PROGMEM const MapObject level11[LEVEL11ARRAYSIZE] =
{
	{ 0, 64, 68, 4, 0 },
	{ 0, 0, 4, 64, 0 },
	{ 64, 0, 4, 64, 0 },
	{ 0, -224, 4, 160, 0 },
	{ 64, -224, 4, 160, 0 },
	{ 0, -384, 4, 160, 0 },
	{ 64, -384, 4, 160, 0 },
	{ 0, -512, 4, 64, 0 },
	{ 64, -512, 4, 64, 0 },
	{ 0, -516, 68, 4, 0 },
	{ 29, -236, 10, 25, 2 },
	{ 25, -240, 18, 33, 0 },
	{ -166, -24, 16, 4, 6 },
	{ 25, -240, 18, 33, 0 },
	{ 332, 28, 16, 4, 6 },
	{ 25, -240, 18, 33, 0 },
	{ -197, -404, 16, 4, 6 },
	{ 25, -240, 18, 33, 0 },
	{ 238, -404, 16, 4, 6 },
	{ 26, 60, 16, 4, 8 },
	{ 26, -512, 16, 4, 8 },
	{ -180, 0, 180, 4, 0 },
	{ -180, -68, 180, 4, 0 },
	{ -32, -8, 4, 7, 1 },
	{ -32, -63, 4, 7, 11 },
	{ -64, -25, 10, 25, 0 },
	{ -64, -64, 10, 25, 0 },
	{ -96, -55, 10, 46, 0 },
	{ -128, -9, 11, 9, 0 },
	{ -128, -64, 11, 9, 0 },
	{ -124, -17, 4, 7, 1 },
	{ -124, -54, 4, 7, 11 },
	{ -180, -64, 4, 64, 0 },
	{ -166, -20, 16, 20, 0 },
	{ 68, 0, 160, 4, 0 },
	{ 68, -68, 32, 4, 0 },
	{ 100, -100, 128, 4, 0 },
	{ 100, -96, 4, 32, 0 },
	{ 224, -96, 4, 32, 0 },
	{ 174, -96, 50, 60, 0 },
	{ 194, -4, 16, 4, 6 },
	{ 228, 32, 128, 4, 0 },
	{ 228, 0, 4, 32, 0 },
	{ 352, -64, 4, 96, 0 },
	{ 302, -28, 50, 60, 0 },
	{ 332, -32, 16, 4, 6 },
	{ 228, -68, 128, 4, 0 },
	{ -32, -384, 32, 4, 0 },
	{ -32, -452, 32, 4, 0 },
	{ -36, -384, 4, 64, 0 },
	{ -36, -512, 4, 64, 0 },
	{ -232, -320, 200, 4, 0 },
	{ -232, -516, 200, 4, 0 },
	{ -232, -512, 4, 192, 0 },
	{ -74, -355, 15, 4, 0 },
	{ -74, -481, 15, 4, 0 },
	{ -115, -385, 15, 4, 0 },
	{ -115, -451, 15, 4, 0 },
	{ -156, -417, 15, 4, 0 },
	{ -197, -400, 16, 4, 0 },
	{ -197, -436, 16, 4, 0 },
	{ 68, -384, 32, 4, 0 },
	{ 68, -452, 32, 4, 0 },
	{ 100, -384, 4, 64, 0 },
	{ 100, -512, 4, 64, 0 },
	{ 100, -320, 128, 4, 0 },
	{ 100, -516, 128, 4, 0 },
	{ 224, -512, 4, 80, 0 },
	{ 224, -400, 4, 80, 0 },
	{ 228, -400, 32, 4, 0 },
	{ 228, -436, 32, 4, 0 },
	{ 260, -436, 4, 40, 0 },
	{ 204, -500, 4, 168, 0 },
	{ 100, -416, 104, 4, 0 }
};

PROGMEM const MapObject level12[LEVEL12ARRAYSIZE] =
{
	{ -32, 64, 96, 4, 0 },
	{ 64, -32, 4, 100, 0 },
	{ -96, 32, 32, 4, 0 },
	{ -160, 0, 32, 4, 0 },
	{ -256, -32, 64, 4, 0 },
	{ -252, -40, 4, 7, 1 },
	{ -232, -40, 4, 7, 1 },
	{ -304, -64, 16, 4, 0 },
	{ -300, -20, 44, 8, 15 },
	{ -349, -20, 44, 8, 15 },
	{ -336, -96, 16, 4, 0 },
	{ -296, -128, 16, 4, 0 },
	{ -340, -160, 16, 4, 0 },
	{ -350, -160, 4, 7, 1 },
	{ -360, -165, 4, 7, 1 },
	{ -370, -170, 4, 7, 1 },
	{ -380, -165, 4, 7, 1 },
	{ -390, -160, 4, 7, 1 },
	{ -400, -150, 4, 7, 1 },
	{ -410, -140, 4, 7, 1 },
	{ -422, -130, 6, 4, 0 },
	{ -330, -180, 5, 20, 3 },
	{ -431, -129, 4, 7, 1 },
	{ -442, -135, 4, 7, 1 },
	{ -453, -142, 4, 7, 1 },
	{ -464, -135, 4, 7, 1 },
	{ -475, -128, 4, 7, 1 },
	{ -486, -116, 4, 7, 1 },
	{ -497, -104, 4, 7, 1 },
	{ -525, -153, 16, 4, 6 },
	{ -508, -92, 4, 7, 1 },
	{ -525, -153, 16, 4, 6 },
	{ -522, -82, 6, 4, 0 },
	{ -533, -84, 4, 7, 1 },
	{ -544, -96, 4, 7, 1 },
	{ -555, -108, 4, 7, 1 },
	{ -574, -117, 16, 4, 0 },
	{ -582, -120, 4, 7, 1 },
	{ -582, -137, 4, 7, 11 },
	{ -587, -200, 13, 62, 0 },
	{ -540, -149, 32, 4, 0 },
	{ -530, -169, 5, 20, 3 },
	{ -512, -145, 4, 200, 100 },
	{ -525, -153, 16, 4, 7 },
	{ -495, -200, 4, 255, 100 },
	{ -525, -153, 16, 4, 7 },
	{ -640, 80, 179, 4, 0 },
	{ -620, 51, 108, 4, 0 },
	{ -535, 55, 25, 25, 0 },
	{ -455, -84, 16, 4, 6 },
	{ -465, 15, 4, 16, 0 },
	{ -465, -25, 4, 16, 0 },
	{ -465, -65, 4, 16, 0 },
	{ -465, -80, 32, 4, 0 },
	{ -545, 55, 4, 7, 0 },
	{ -556, 72, 4, 7, 1 },
	{ -567, 55, 4, 7, 11 },
	{ -578, 72, 4, 7, 1 },
	{ -589, 55, 4, 7, 11 },
	{ -600, 72, 4, 7, 1 },
	{ -632, 60, 5, 20, 3 },
	{ -624, -200, 4, 255, 0 },
	{ -640, -175, 4, 255, 0 },
	{ -690, -170, 44, 8, 15 },
	{ -735, -150, 44, 8, 15 },
	{ -745, -140, 4, 7, 1 },
	{ -755, -130, 4, 7, 1 },
	{ -771, -160, 4, 255, 0 },
	{ -765, -103, 4, 7, 1 },
	{ -755, -88, 4, 7, 1 },
	{ -739, -110, 4, 255, 0 },
	{ -745, -50, 4, 7, 1 },
	{ -765, -35, 4, 7, 1 },
	{ -758, 0, 10, 25, 2 }
};

PROGMEM const MapObject level13[LEVEL13ARRAYSIZE] =
{
	{ -32, 64, 70, 4, 0 },
	{ -28, 38, 32, 4, 0 },
	{ -32, -12, 4, 76, 0 },
	{ -28, -12, 96, 4, 0 },
	{ 30, 13, 64, 4, 0 },
	{ 5, -8, 25, 25, 4 },
	{ 383, -220, 25, 25, 5 },
	{ 38, 44, 34, 4, 0 },
	{ 38, 48, 4, 20, 0 },
	{ 58, -8, 10, 21, 2 },
	{ 68, -145, 4, 158, 0 },
	{ 66, 36, 4, 7, 1 },
	{ 54, 17, 4, 7, 11 },
	{ 44, 17, 4, 7, 11 },
	{ 34, 17, 4, 7, 11 },
	{ 68, 48, 4, 32, 0 },
	{ 72, 76, 66, 4, 0 },
	{ 110, -20, 4, 64, 0 },
	{ 94, 44, 62, 4, 0 },
	{ 115, 68, 4, 7, 1 },
	{ 149, 48, 4, 7, 11 },
	{ 165, 76, 63, 4, 0 },
	{ 168, 68, 4, 7, 1 },
	{ 186, 40, 42, 4, 0 },
	{ 224, 44, 4, 32, 0 },
	{ 200, 72, 16, 4, 8 },
	{ 190, 52, 5, 24, 3 },
	{ 87, 5, 4, 7, 1 },
	{ 186, -20, 4, 60, 0 },
	{ 190, -20, 40, 4, 0 },
	{ 226, -100, 4, 80, 0 },
	{ 144, -20, 4, 64, 0 },
	{ 114, -20, 30, 4, 0 },
	{ 72, -145, 247, 4, 0 },
	{ 230, -100, 89, 4, 0 },
	{ 110, -141, 35, 35, 0 },
	{ 200, -24, 16, 4, 6 },
	{ 73, -141, 16, 4, 8 },
	{ 110, -106, 4, 40, 0 },
	{ 114, -70, 112, 4, 0 },
	{ 118, -78, 44, 8, 15 },
	{ 166, -78, 44, 8, 15 },
	{ 216, -77, 4, 7, 1 },
	{ 118, -67, 44, 8, 16 },
	{ 166, -67, 44, 8, 16 },
	{ 216, -66, 4, 7, 11 },
	{ 358, -220, 25, 25, 0 },
	{ 258, -104, 16, 4, 6 },
	{ 358, -220, 25, 25, 0 },
	{ 230, -104, 16, 4, 6 },
	{ 250, -141, 4, 41, 0 },
	{ 278, -141, 41, 41, 0 },
	{ 345, -3, 16, 4, 6 },
	{ 319, -25, 26, 26, 0 },
	{ 345, -3, 16, 4, 6 },
	{ 315, -220, 4, 75, 0 },
	{ 315, -224, 150, 4, 0 },
	{ 461, -220, 4, 255, 0 },
	{ 340, -170, 4, 145, 0 },
	{ 344, -170, 60, 4, 0 },
	{ 404, -170, 4, 81, 0 },
	{ 315, -96, 4, 255, 0 },
	{ 358, -195, 70, 6, 0 },
	{ 441, -170, 20, 4, 0 },
	{ 361, -59, 100, 4, 0 },
	{ 344, -93, 60, 4, 0 },
	{ 344, -29, 100, 4, 0 },
	{ 319, 1, 142, 4, 0 },
	{ 365, -66, 4, 7, 1 },
	{ 372, -68, 22, 9, 0 },
	{ 410, -66, 4, 7, 1 },
	{ 420, -66, 4, 7, 1 },
	{ 420, -213, 5, 18, 3 },
	{ 347, -36, 4, 7, 1 },
	{ 375, -55, 4, 7, 11 },
	{ 385, -55, 4, 7, 11 },
	{ 372, -35, 22, 6, 0 },
	{ 400, -36, 4, 7, 1 },
	{ 415, -55, 4, 7, 11 },
	{ 432, -36, 4, 7, 1 },
	{ 368, -25, 4, 7, 11 },
	{ 372, -5, 22, 6, 0 },
	{ 400, -25, 4, 7, 11 },
	{ 410, -25, 4, 7, 11 },
	{ 426, -6, 4, 7, 1 },
	{ 436, -6, 4, 7, 1 },
	{ 13, 44, 5, 20, 3 }
};
PROGMEM const MapObject level14[LEVEL14ARRAYSIZE] =
{
	{ -20, 64, 255, 4, 0 },
	{ -20, -32, 4, 96, 0 },
	{ 231, 64, 255, 4, 0 },
	{ 482, -32, 4, 96, 0 },
	{ 200, 32, 64, 4, 0 },
	{ 215, -20, 36, 53, 17},
	{ 200, -120, 1, 1, 0 },
	{ 200, -120, 1, 1, 0 },
	{ 200, -120, 1, 1, 0 },
	{ 200, -120, 1, 1, 0 },
	{ 200, -120, 1, 1, 0 },
	{ 200, -120, 1, 1, 0 },
	{ 200, -120, 1, 1, 0 },
	{ 200, -120, 1, 1, 0 },
	{ 200, -120, 1, 1, 0 },
	{ 200, -120, 1, 1, 0 },
	{ 200, -120, 1, 1, 0 },
	{ 200, -120, 1, 1, 0 },
	{ 200, -120, 1, 1, 0 },
	{ 200, -120, 1, 1, 0 },
	{ 200, -120, 1, 1, 0 },
	{ 200, -120, 1, 1, 0 },
	{ 200, -120, 1, 1, 0 },
	{ 200, -120, 1, 1, 0 },
	{ 200, -120, 1, 1, 0 },
	{ 200, -120, 1, 1, 0 }
};