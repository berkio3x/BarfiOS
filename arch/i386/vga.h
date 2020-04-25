

/**

Configuration for VGA text buffer mode.

In text mode a character is represented by a 16 byte ,
    where 1st 8 bytes - used for attributes {BACKGROUND + FOREGROUND}
    2nd 8 bytes - used to represent the ascii code point of character.

**/


enum vga_color {
	VGA_COLOR_BLACK = 0 ,
	VGA_COLOR_BLUE = 1,
	VGA_COLOR_GREEN = 2 ,
	VGA_COLOR_CYAN = 3,
	VGA_COLOR_RED = 4,
	VGA_COLOR_MAGENTA = 5,
	VGA_COLOR_BROWN = 6,
	VGA_COLOR_LIGHT_GRAY = 7,
	VGA_COLOR_DARK_GRAY = 8,
	VGA_COLOR_LIGHT_BLUE = 9,
	VGA_COLOR_LIGHT_GREEN = 10,
	VGA_COLOR_LIGHT_CYAN = 11,
	VGA_COLOR_LIGHT_RED = 12,
	VGA_COLOR_LIGHT_MAGENTA = 13,
	VGA_COLOR_LIGHT_BROWN = 14,
	VGA_COLOR_WHITE = 15,
};

static inline uint8_t vga_entry_color(enum vga_color background,enum vga_color foreground){

	return foreground | background << 4;

}

static inline uint16_t vga_entry(unsigned char uc, uint8_t color){

	return (uint16_t)uc | (uint16_t)color  << 8;

}



