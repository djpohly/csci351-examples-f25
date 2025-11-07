#include <stdio.h>
#include <stdlib.h>
#include "dim.h"

int main(void) {
	int (*arr)[DIM] = malloc(DIM * DIM * sizeof(int));
	for (int i = 0; i < DIM; i++) {
		for (int j = 0; j < DIM; j++) {
			arr[i][j] = i + j;
		}
	}
	long sum = 0;
	for (int j = 0; j < DIM; j++) {
		for (int i = 0; i < DIM; i++) {
			sum += arr[i][j];
		}
	}
	printf("%ld\n", sum);
	
	return 0;
}
