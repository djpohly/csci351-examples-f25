#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char **argv) {
	printf("PID: %d\n", getpid());
	printf("PPID: %d\n", getppid());

	printf("hello world\n");

	exit(1);

	printf("nope\n");
	return 0;
}
