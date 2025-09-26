#include <stdio.h>
#include <math.h>
#include <fenv.h>

int main(int argc, char **argv) {
	fesetround(2);
	printf("%ld\n", lrint(3.1));
	printf("%ld\n", lrint(3.2));
	printf("%ld\n", lrint(3.5));
	printf("%ld\n", lrint(3.6));
	printf("%ld\n", lrint(4.1));
	printf("%ld\n", lrint(4.2));
	printf("%ld\n", lrint(4.5));
	printf("%ld\n", lrint(4.6));
	printf("%ld\n", lrint(-4.1));
	printf("%ld\n", lrint(-4.2));
	printf("%ld\n", lrint(-4.5));
	printf("%ld\n", lrint(-4.6));

	return 0;
}
