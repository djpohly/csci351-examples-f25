#include <stdio.h>

int main(int argc, char **argv) {
	float winnings = 0.0;

	for (int i = 0; i < 1000000000; i++) {
		winnings += 1.0;
	}

	printf("%f\n", winnings);
}
