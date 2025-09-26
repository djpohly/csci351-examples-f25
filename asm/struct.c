#include <stdio.h>

struct foo {
	int i;
	float f;
	double d;
};

int main(void) {
	struct foo f;

	printf("size of:\n");
	printf("f.i = %d\n", sizeof(f.i));
	printf("f.f = %d\n", sizeof(f.f));
	printf("f.d = %d\n", sizeof(f.d));
	printf("struct foo = %d\n", sizeof(f));

	printf("offset of\n");
	printf("f.i = %d\n", ((char *) (&f.i)) - ((char *) (&f)));
	printf("f.f = %d\n", ((char *) (&f.f)) - ((char *) (&f)));
	printf("f.d = %d\n", ((char *) (&f.d)) - ((char *) (&f)));

	return 0;
}
