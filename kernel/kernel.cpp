#include <kernel/tty.h>
//#include <kernel/vga.h>

extern "C" void kmain(){
    const char* intro ="Hello world it's BarfiOS \nIt going to be fun :)";


	TTY tty = TTY();
    tty.init();
    tty.write_string(intro);

}
