#include <stdio.h>
#include <stdlib.h>

long foo(int op, long x) {
	switch (op) {
		case 0:
			return x + 5;
			break;
		case 1:
			return x ^ 127;
			break;
		case 2:
			return x * 10;
			break;
		case 3:
			return x * x;
			break;
		case 4:
			return 8;
			break;
		case 5:
			return x * 80;
			break;
		default:
			return x - 1;
			break;
	}
}

int main(int argc, char **argv) {
	return foo(atoi(argv[1]), 10);
}
