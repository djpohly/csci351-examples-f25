#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>

int main(int argc, char **argv) {
	printf("PID: %d\n", getpid());

	pid_t parent = getpid();

	pid_t fork_rv = fork();
	if (fork_rv < 0) {
		perror("there was an error");
		exit(1);
	}
	if (fork_rv == 0) {
		// child
		printf("child process, id %d\n", getpid());
		sleep(10);
		printf("child exiting\n");
		exit(3);
	}

	// parent
	int rv = -2;
	int status;
	sleep(20);
	waitpid(fork_rv, &status, 0);
	sleep(10);
	printf("parent process, child is %d\n", fork_rv);
	if (WIFEXITED(status)) {
		printf("child process exited with %d\n", WEXITSTATUS(status));
	} else if (WIFSIGNALED(status)) {
		printf("child terminated by signal %d\n", WTERMSIG(status));
	}

	printf("hello world\n");

	exit(1);

	printf("nope\n");
	return 0;
}
