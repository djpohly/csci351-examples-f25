#include <stdio.h>

struct foo {
	int a[2];
	double d;
};

double fun(int i) {
	volatile struct foo s;
	printf("%p\n", &s);
	s.d = 3.14;
	s.a[i] = 1073741824; /* Possibly out of bounds */
	return s.d;
}

int main(void) {
	printf("0: %e\n", fun(0));
	printf("1: %e\n", fun(1));
	printf("2: %e\n", fun(2));
	printf("3: %e\n", fun(3));
	printf("4: %e\n", fun(4));
	printf("5: %e\n", fun(5));
	/* printf("6: %e\n", fun(6)); */
	/* printf("7: %e\n", fun(7)); */
	printf("8: %e\n", fun(8));
	printf("9: %e\n", fun(9));
	printf("19: %e\n", fun(19));
	printf("119: %e\n", fun(119));
	printf("1119: %e\n", fun(1119));
	return 0;
}
