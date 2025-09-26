#include <stdio.h>

int main(int argc, char **argv) {
	float f = 1.0;
	float z = 0.0;
	float i = f / z;
	float ni = f / -z;
	printf("%f\n", i);
	printf("%f\n", ni);
	printf("%f\n", i + ni);
	return 0;
}
