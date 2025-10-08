#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>

struct foo {
	int eresting;
	char broiled;
	double mint;
};

int main(int argc, char **argv) {
	int fd = open("lowexample", O_RDONLY);
	printf("%d\n", fd);

	struct foo f;
	f.eresting = -1;
	f.broiled = 'x';
	f.mint = -2.1;

	int bytes = read(fd, &f, sizeof(f));
	printf("%d bytes read\n", bytes);

	printf("%d %c %g\n", f.eresting, f.broiled, f.mint);

	close(fd);
	return 0;
}
