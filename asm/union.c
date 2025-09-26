#include <stdio.h>

union foo {
	int i;
	float f;
	double d;
	char arr[19];
};

int main(void) {
	union foo f;

	printf("size of:\n");
	printf("f.i = %d\n", sizeof(f.i));
	printf("f.f = %d\n", sizeof(f.f));
	printf("f.d = %d\n", sizeof(f.d));
	printf("f.arr = %d\n", sizeof(f.arr));
	printf("union foo = %d\n", sizeof(f));

	printf("offset of\n");
	printf("f.i = %d\n", ((char *) (&f.i)) - ((char *) (&f)));
	printf("f.f = %d\n", ((char *) (&f.f)) - ((char *) (&f)));
	printf("f.d = %d\n", ((char *) (&f.d)) - ((char *) (&f)));
	printf("f.arr = %d\n", ((char *) (&f.arr)) - ((char *) (&f)));

	return 0;
}
