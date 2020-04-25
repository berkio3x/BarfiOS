#include<stddef.h>
#include<stdint.h>
#include<stdbool.h>

//#include<string.h>

#include "vga.h"
#include <kernel/tty.h>


TTY::TTY()
{

		static const size_t VGA_WIDTH = 80;
		static const size_t VGA_HEIGHT = 25;
		static uint16_t* const  VGA_MEMORY  = (uint16_t*)0xB8000;

		color = vga_entry_color(VGA_COLOR_LIGHT_GRAY, VGA_COLOR_BLACK);
		buffer = VGA_MEMORY;

		for(size_t y = 0; y < VGA_HEIGHT; y++){
				for(size_t x = 0 ; x < VGA_WIDTH; x++){
						const size_t index = y * VGA_WIDTH + x;
						buffer[index]  = vga_entry(' ',color);
				}

		}
}

void TTY::putchar(char c){

}

void TTY::init(){

    static const size_t VGA_WIDTH = 80;
    static const size_t VGA_HEIGHT = 25;
    static uint16_t* const  VGA_MEMORY  = (uint16_t*)0xB8000;

    color = vga_entry_color(VGA_COLOR_LIGHT_GREEN, VGA_COLOR_BLACK);
    buffer = VGA_MEMORY;

    for(size_t y = 0; y < VGA_HEIGHT; y++) {
            for(size_t x = 0 ; x < VGA_WIDTH; x++){
                    const size_t index = y * VGA_WIDTH + x;
                    buffer[index]  = vga_entry(' ', color);
            }

    }
}



