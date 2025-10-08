#include <stdio.h>

int main(int argc, char **argv) {
	FILE *f = fopen("example", "w");

	fprintf(f, "%d Blind Mice\n", 3);
	fprintf(f, "%d Bottles of Orange Soda\n", 99);

	fclose(f);

	FILE *g = fopen("example", "r");
	int x;
	char buf[20];
	fscanf(g, "%d %s", &x, &buf);
	fclose(g);

	printf("Read: %d and '%s'\n", x, buf);
	return 0;
}
