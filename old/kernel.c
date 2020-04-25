#include <stddef.h>

static const size_t VGA_WIDTH = 80;
static const size_t VGA_HIRGHT= 25;
static unit16_t* const VIDEO_MEMORY = (unit16_t*)0xb8000;


terminal_row = 0;
terminal_col = 0;
terminal_color = vga_color(VGA_COLOR_LIGHT_GRAY, VGA_COLOR_BLACK);
terminal_buffer = VIDEO_MEMORY;

void terminal_init(void){
	
	terminal_row = 0;
	terminal_col = 0;
	terminal_color = vga_color(VGA_COLOR_LIGHT_GRAY, VGA_COLOR_BLACK);
	terminal_buffer = VIDEO_MEMORY;
	
	for(size_t y = 0; y < VGA_HIEGHT; <y++){
		for(size_t x = 0; y < VGA_WIDTH; <x++){
			const size_t idx = y* VGA_WIDTH + x;
			termial_buffer[idx] =vga_entry(' ', terminal_color);
		
	}	

}

void kmain(void)
	{
	const char *str  = "Barfi OS";
	char *vidptr = (char*)0xb8000;
	unsigned int i = 0;
	unsigned int j = 0;

	while(j < 80 *25 * 2){
		vidptr[j]= ' ' ;
		vidptr[j+1] =0x07;
		j = j + 2;
	}
	j = 0;
	while(str[j] != '\0'){
		vidptr[i] = str[j];
		vidptr[i+1] = 0x40;
		++j;
		i = i + 2;
	}
	return;
}	
