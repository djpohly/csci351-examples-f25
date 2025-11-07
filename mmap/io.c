#include <stdio.h>
#include <sys/mman.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

int main(int argc, char **argv) {
	int ret = 0;

	int fd = open("data.bin", O_RDWR | O_CREAT, 0644);
	if (fd < 0) {
		perror("open");
		ret = 1;
		goto out_ret;
	}

	char buf[1024];
	int b = read(fd, buf, 1024);
	if (b < 0) {
		perror("read");
		ret = 1;
		goto out_close;
	}

	printf("%c %c %c\n", buf[0], buf[1], buf[2]);

out_close:
	close(fd);
out_ret:
	return ret;
}
