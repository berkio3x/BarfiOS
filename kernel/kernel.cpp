#include <kernel/tty.h>
//#include <kernel/vga.h>

extern "C" void kmain(){
	TTY tty = TTY();
    tty.init();
    tty.write_string("Hello World , it's BarfiOS :)");

}
