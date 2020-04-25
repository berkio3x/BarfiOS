#include<stddef.h>
#include<stdint.h>
#include<stdbool.h>

//#include<string.h>

#include "vga.h"
#include <kernel/tty.h>


TTY::TTY()
{
    row = 0;
    col = 0;

    VGA_WIDTH  = 80;
    VGA_HEIGHT = 25;
    VGA_MEMORY = (uint16_t*)0xB8000;

}


void TTY::init(){


    color = vga_entry_color(VGA_COLOR_LIGHT_GREEN, VGA_COLOR_BLACK);
    buffer = VGA_MEMORY;

    for(size_t y = 0; y < VGA_HEIGHT; y++) {
            for(size_t x = 0 ; x < VGA_WIDTH; x++){
                    const size_t index = y * VGA_WIDTH + x;
                    buffer[index]  = vga_entry(' ', color);
            }

    }
}

void TTY::put_at(unsigned char uc, uint8_t color, size_t x, size_t y){
    const size_t index = y * VGA_WIDTH + x;
    buffer[index] = vga_entry(uc, color);

}


void TTY::putchar(char c){
    unsigned char uc = c;
    put_at(uc, color, col, row);
    col++;
}

void TTY::write(const char* data, size_t size){
    for(size_t i =0; i< size; ++i) putchar(data[i]);
}


void TTY::write_string( const char* data){
    // find the length of the string to write
    size_t len = 0;
    while(data[len])
        len++;
    write(data, len);
}


