#include <stdio.h>

int main(int argc, char **argv) {
	int x = -20;
	printf("%d\n", x >> 2);

	// 11111111
	unsigned char c = 255;
	printf("%d\n", c >> 2);
}
