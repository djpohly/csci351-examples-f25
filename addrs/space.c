#include <stdio.h>
#include <stdlib.h>

char big_array[1L<<24]; /* 16 MB */

int globalvar;

char foo[] = "foo bar";

void blah(void);

int useless() { return 0; }

int main(int argc, char **argv) {
	void *phuge1, *psmall2, *phuge3, *psmall4;
	int local = 0xCAFEF00D;

	blah();

	for (int i = 0; i < atoi(argv[1]); i++) {
		phuge1 = malloc(1L << 28); /* 256 MB */
		psmall2 = malloc(1L << 8); /* 256 B */
		phuge3 = malloc(1L << 32); /* 4 GB */
		psmall4 = malloc(1L << 8); /* 256 B */
	}

	printf("&useless   = %p\n", &useless);
	printf("&main      = %p\n", &main);
	printf("&big_array = %p\n", &big_array);
	printf("&foo       = %p\n", &foo);
	printf("&globalvar = %p\n", &globalvar);
	printf("psmall2    = %p\n", psmall2);
	printf("psmall4    = %p\n", psmall4);
	printf("phuge3     = %p\n", phuge3);
	printf("phuge1     = %p\n", phuge1);
	printf("&printf    = %p\n", &printf);
	printf("&malloc    = %p\n", &malloc);
	printf("&local     = %p\n", &local);

	return 0;
}
