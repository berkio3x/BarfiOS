#include <stddef.h>
#include <stdint.h>

class TTY {

	private:

        size_t row;
        size_t col;
        uint8_t color;
        uint16_t* buffer;

        size_t VGA_WIDTH ;
        size_t VGA_HEIGHT ;
        uint16_t*   VGA_MEMORY;


        // create an entry current {row, col}
        void put_at(unsigned char uc, uint8_t color, size_t x, size_t y);
        void putchar(char c);
        // Calculate size & print to tty, used by print()
        void write(const char* data, size_t size);

	public:
		TTY();

		void init();
		void write_string(const char* data);


};
