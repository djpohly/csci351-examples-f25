#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>

void chld(int sig) {
	printf("listing done yay\n");
	int status;
	pid_t child = waitpid(-1, &status, 0);
	if (WIFEXITED(status)) {
		printf("pid %d returned %d\n",
				child,
				WEXITSTATUS(status));
	} else if (WIFSIGNALED(status)) {
		// ...
	}
}

int running = 1;
void handleint(int sig) {
	kill(getpid(), SIGTERM);
}

void handleterm(int sig) {
	running = 0;
}

int main(int argc, char **argv) {
	printf("PID: %d\n", getpid());

	signal(SIGCHLD, chld);
	signal(SIGINT, handleint);
	signal(SIGTERM, handleterm);

	for (int i = 0; i < 3; i++) {
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
			/* execvp("ls", args); */
			execv("/bin/ls", args);
			perror("exec");
			exit(1);
		}
	}

	while (running) {
		pause();
	}

	printf("clean exit\n");

	return 0;
}
