#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>

struct foo {
	int eresting;
	char broiled;
	double mint;
};

int main(int argc, char **argv) {
	/* printf("%d %d %d\n", O_WRONLY, O_CREAT, O_TRUNC); */
	int fd = open("lowexample", O_WRONLY | O_CREAT | O_TRUNC, 0644);

	struct foo f;

	f.eresting = 10;
	f.broiled = '@';
	f.mint = 2.71828;

	int bytes = write(fd, &f, sizeof(f));
	printf("%d bytes written\n", bytes);

	char buf[200];
	int printed = sprintf(buf, "%s %d\n", "word", 3030);
	write(fd, buf, printed);

	lseek(fd, 5, SEEK_SET);
	write(fd, "hello", 5);

	close(fd);
	return 0;
}
