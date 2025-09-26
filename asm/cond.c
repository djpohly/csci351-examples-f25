#include <stdio.h>

long foo(long x) {
	if (x < 10) {
		return x + 17;
	} else if (x > 10) {
		return x * 80;
	} else {
		return 16384;
	}
}

void loop(int x) {
	while (x != 0) {
		printf("hello\n");
		x--;
	}
}
