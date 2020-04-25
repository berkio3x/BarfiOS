#include <kernel/tty.h>
//#include <kernel/vga.h>

extern "C" void kmain(){
	TTY tty = TTY();
    tty.init();

}
