#include <stdio.h>

int main(int argc, char const *argv[])
{

	int c;

	printf("%d\n", EOF);

	while ((c = getchar()) != EOF) {
		printf("%d\n", c);
		putchar(c);
	}

	return 0;

}