#include <stdio.h>
#include <stdlib.h>

void mygets(char *str) {
	int i = 0;
	char c;
	do {
		c = getchar();
		str[i] = c;
		i++;
	} while (c != '\0' && c != '\n');
}

/* Echo Line */
void echo()
{
	char buf[4]; /* Way too small! */
	mygets(buf);
	puts(buf);
}

void call_echo() {
	echo();
}

int main(void) {
	call_echo();
	return 0;
}
