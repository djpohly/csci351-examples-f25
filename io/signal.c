#include <stdio.h>
#include <signal.h>

void handle(int signo) {
	printf("got signal %d\n", signo);
	printf("ignored haha.\n");
}

int main(int argc, char **argv) {
	signal(SIGINT, handle);
	signal(SIGQUIT, handle);
	signal(SIGTSTP, handle);
	signal(SIGTERM, handle);
	signal(SIGKILL, handle);

	while (1) {

	}

	return 0;
}
