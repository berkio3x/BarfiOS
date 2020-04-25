#include <stddef.h>
#include <stdint.h>

class TTY {

	private:
		static size_t row;
		static size_t col;
        uint8_t color;
        uint16_t* buffer;
	public:
		TTY();
		void putchar(char c);
		void init();
		//void write(const char* data, size_t size);
		//void write_string(const char* data);
		//void setcolor(uint8_t color);

};
