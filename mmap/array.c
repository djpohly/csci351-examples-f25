#include <stdio.h>
#include <math.h>
#include <sys/mman.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

int main(int argc, char **argv) {
	int ret = 0;

	/* int fd = open("array.bin", O_RDWR | O_CREAT, 0644); */
	/* if (fd < 0) { */
	/* 	perror("open"); */
	/* 	ret = 1; */
	/* 	goto out_ret; */
	/* } */

	double *result = mmap(NULL, 1000 * sizeof(double), PROT_READ | PROT_WRITE,
			MAP_SHARED | MAP_ANONYMOUS, -1, 0);
	if (result == MAP_FAILED) {
		perror("mmap");
		ret = 1;
		goto out_close;
	}

	for (int i = 0; i < 1000; i++) {
		result[i] = sqrt(i);
	}
	printf("%g %g %g\n", result[0], result[1], result[2]);

	munmap(result, 1000 * sizeof(double));
out_close:
	/* close(fd); */
out_ret:
	return ret;
}
