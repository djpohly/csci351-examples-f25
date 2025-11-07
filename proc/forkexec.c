#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>

void chld(int sig) {
	if (sig == SIGCHLD) {
		printf("listing done yay\n");
	}
}

int main(int argc, char **argv) {
	printf("PID: %d\n", getpid());

	signal(SIGCHLD, chld);

	pid_t fork_rv = fork();
	if (fork_rv < 0) {
		perror("there was an error");
		exit(1);
	}

	if (fork_rv == 0) {
		// child
		char *args[] = {
			"ls", "-l", "/", NULL
		};
		/* execlp("ls", "ls", "-l", "/", NULL); */
		/* execl("/bin/ls", "ls", "-l", "/", NULL); */
		execvp("ls", args);
		/* execv("/bin/ls", args); */
		perror("exec");
		exit(1);
	}

	/* for (int i = 0; i < 5; i++) { */
	/* 	printf("%d\n", i); */
	/* 	sleep(1); */
	/* } */

	return 0;
}
