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

	/* int b = write(fd, "hello world\n", 12); */
	/* if (b < 0) { */
	/* 	perror("write"); */
	/* 	ret = 1; */
	/* 	goto out_close; */
	/* } */

	char *result = mmap((void *) 0x351351000, 1024, PROT_READ | PROT_WRITE,
			MAP_SHARED, fd, 0);
	if (result == MAP_FAILED) {
		perror("mmap");
		ret = 1;
		goto out_close;
	}

	printf("pid: %d\n", getpid());
	printf("Address: %p\n", result);

	getchar();

	printf("Before: %s", result);

	getchar();

	result[0]++;
	printf("After: %s", result);

	getchar();

	munmap(result, 1024);
out_close:
	close(fd);
out_ret:
	return ret;
}
