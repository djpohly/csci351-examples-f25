#include <stdio.h>

int main(void) {
	int x = -351;
	printf("%d  / 0x%x  \n", x, x);

	int *px = &x;
	char *pcx = (char *) px;

	printf("%02hhx %02hhx\n", pcx[0], pcx[1]);

	char *s = "hello";

	printf("%02hx %02hx\n", s[0], s[1]);
	return 0;
}
