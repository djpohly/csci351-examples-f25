char big_array[1L<<24]; /* 16 MB */
char huge_array[1L<<31]; /* 2 GB */
int global = 0;
int useless() { return 0; }
int main ()
{
	void *phuge1, *psmall2, *phuge3, *psmall4;
	int local = 0;
	phuge1 = malloc(1L << 28); /* 256 MB */
	psmall2 = malloc(1L << 8); /* 256 B */
	phuge3 = malloc(1L << 32); /* 4 GB */
	psmall4 = malloc(1L << 8); /* 256 B */

	printf("&big_array = %p\n", &big_array);
	printf("&huge_array = %p\n", &huge_array);
	printf("&global = %p\n", &global);
	printf("&useless = %p\n", &useless);
	printf("&main = %p\n", &main);
	printf("phuge1 = %p\n", phuge1);
	printf("psmall2 = %p\n", psmall2);
	printf("phuge3 = %p\n", phuge3);
	printf("psmall4 = %p\n", psmall4);
}
