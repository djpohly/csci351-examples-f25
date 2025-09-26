#include <stdio.h>

void mystery(long *a, long *b) {
	long t = *a;
	*a = *b;
	*b = t;
}

int main(void) {
	long a = 10;
	long b = 20;
	mystery(&a, &b);
	printf("%ld %ld\n", a, b);
	return 0;
}
