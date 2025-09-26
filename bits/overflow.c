#include <stdio.h>

int main(int argc, char **argv) {
	int x = 1000;
	unsigned char c = x;

	printf("%d\n", x);
	printf("%d\n", c);

	unsigned char o = 240;
	o += 30;
	printf("%d\n", o);

	o = 5;
	o -= 10;
	printf("%d\n", o);

	return 0;
}
