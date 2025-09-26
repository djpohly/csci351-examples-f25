#include <stdio.h>

int main(void) {
	int i = -12345;
	long l = -12345;
	float pi_ish = 22.0 / 7.0;
	double pi = 3.1415926535;
	char name[] = "Dr. Pohly";

	unsigned char *pc = (unsigned char *) &i;


	for (int b = 0; b < sizeof(i); b++) {
		printf("%02hhx ", pc[b]);
	}
	printf("\n");

	pc = (unsigned char *) &l;
	for (int b = 0; b < sizeof(l); b++) {
		printf("%02hhx ", pc[b]);
	}
	printf("\n");

	pc = (unsigned char *) &pi_ish;
	for (int b = 0; b < sizeof(pi_ish); b++) {
		printf("%02hhx ", pc[b]);
	}
	printf("\n");

	pc = (unsigned char *) &pi;
	for (int b = 0; b < sizeof(pi); b++) {
		printf("%02hhx ", pc[b]);
	}
	printf("\n");

	pc = (unsigned char *) &name;
	for (int b = 0; b < sizeof(name); b++) {
		printf("%02hhx ", pc[b]);
	}
	printf("\n");

	return 0;
}
