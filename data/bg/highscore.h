#ifndef HIGHSCORE_MAP_H
#define HIGHSCORE_MAP_H

#define highscore_data_length 24
const unsigned char highscore_data[] = {
	255,   0, 231,   0, 195,   0, 129,   0, 129,   0, 195,   0, 231,   0, 255,   0, 
	255, 255,   0, 255,   0, 255,   0, 255,   0, 255,   0, 255,   0, 255,   0, 255, 
	  0, 255,   0, 255,   0, 255,   0, 255,   0, 255,   0, 255,   0, 255,   0, 255, 
	  0, 230,   0, 230,   0, 230,   0, 224,   6, 230,   0, 230,   0, 230,  25, 255, 
	  0,  67,  36, 103,   0, 103,   0, 103,   0, 103,   0, 103,   0,  67, 188, 255, 
	  0, 135,  56,  59,   4,  63,   0,  35,  16,  51,   0,  51, 132, 135, 120, 255, 
	  0,  51,   0,  51,   0,  51,   0,   3,  48,  51,   0,  51,   0,  51, 204, 255, 
	  0, 135,  56,  59,   4,  63, 128, 135, 112, 243,   0, 115, 132, 135, 120, 255, 
	  0, 135,  56,  59,   4,  63,   0,  63,   0,  63,   0,  59, 132, 135, 120, 255, 
	  0, 135,  48,  51,   0,  51,   0,  51,   0,  51,   0,  51, 132, 135, 120, 255, 
	  0,   7,  48,  51,   0,  51,   4,   7,  48,  51,   0,  51,   0,  51, 204, 255, 
	  0,   3,  60,  63,   0,  63,   0,   7,  56,  63,   0,  63,   0,   3, 252, 255, 
	255,   0, 255,   0, 255,   0, 255,   0, 255,   0, 255,   0, 255,   0, 255,   0, 
	255, 255, 192, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 
	255, 255,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
	255, 255,   3,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1, 
	128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 
	  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
	  1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1, 
	  3,   1,   3,   1,   3,   1,   3,   1,   3,   1,   3,   1,   3,   1,   3,   1, 
	  0, 128,   0, 128,   0, 128,   0, 128,   0, 128,   0, 128,   0, 128,   0, 128, 
	128, 128, 128, 128, 128, 128, 128, 128, 192, 128, 224,  64, 255,  32, 255,  31, 
	  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 255,   0, 255, 255, 
	  3,   1,   3,   1,   3,   1,   3,   1,   3,   1,   7,   2, 255,   4, 255, 248
};

#define highscore_tiles_width 20
#define highscore_tiles_height 18
#define highscore_offset 47
const unsigned char highscore_tiles[] = {
	 47,  47,  47,  47,  47,  47,  47,  47,  47,  47,  47,  47,  47,  47,  47,  47, 
	 47,  47,  47,  47,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48, 
	 48,  48,  48,  48,  48,  48,  48,  48,  49,  49,  49,  49,  49,  50,  51,  52, 
	 53,  54,  55,  56,  57,  58,  54,  49,  49,  49,  49,  49,  49,  49,  49,  49, 
	 49,  49,  49,  49,  49,  49,  49,  49,  49,  49,  49,  49,  49,  49,  49,  49, 
	 59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59, 
	 59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59, 
	 59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59, 
	 59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59, 
	 59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59, 
	 59,  59,  59,  59,  59,  60,  61,  61,  61,  61,  61,  61,  61,  61,  62,  59, 
	 59,  59,  59,  59,  59,  59,  59,  59,  59,  63,  64,  64,  64,  64,  64,  64, 
	 64,  64,  65,  59,  59,  59,  59,  59,  47,  47,  63,  64,  64,  64,  64,  64, 
	 64,  64,  64,  64,  64,  64,  64,  64,  64,  66,  47,  47,  47,  47,  63,  64, 
	 64,  64,  64,  64,  64,  67,  64,  64,  64,  64,  64,  67,  64,  66,  47,  47, 
	 47,  47,  63,  64,  64,  64,  64,  64,  64,  67,  64,  64,  64,  64,  64,  67, 
	 64,  66,  47,  47,  47,  47,  63,  64,  64,  64,  64,  64,  64,  67,  64,  64, 
	 64,  64,  64,  67,  64,  66,  47,  47,  47,  47,  63,  64,  64,  64,  64,  64, 
	 64,  67,  64,  64,  64,  64,  64,  67,  64,  66,  47,  47,  47,  47,  63,  64, 
	 64,  64,  64,  64,  64,  67,  64,  64,  64,  64,  64,  67,  64,  66,  47,  47, 
	 47,  47,  68,  69,  69,  69,  69,  69,  69,  69,  69,  69,  69,  69,  69,  69, 
	 69,  70,  47,  47,  47,  47,  47,  47,  47,  47,  47,  47,  47,  47,  47,  47, 
	 47,  47,  47,  47,  47,  47,  47,  47
};

#endif
