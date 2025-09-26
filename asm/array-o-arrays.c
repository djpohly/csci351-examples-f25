#include <stdio.h>

struct foo {
	int x;
	int y;
	double arr[20];
};

int foo(int /*rdi*/ arr[][5], long row, long /*rsi*/ column) {
	return arr[row][column];
}

double bar(struct foo *f, int i) {
	return f->arr[i] * 5;
}
