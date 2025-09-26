#include <stdio.h>

long add(long a, long b) {
	return a + b;
}

long foo(long x) {
	return x * x;
}

void printhello(char *name) {
	printf("Hello, %s\n", name);
}

int main(void) {
	char buf[100];
	printf("What's your name? ");
	scanf("%s", buf);

	printhello(buf);

	int x = 2;
	printf("some number: %d\n", 5 / x);

	return 0;
}
