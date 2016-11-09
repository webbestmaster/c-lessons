#include <stdio.h>
#include <string.h>

int externalNumber;

int strlen_2(char s[]);

int main(int argc, char const *argv[]) {

	extern int externalNumber;
	
	int testInt = 256 * 128;

	externalNumber = 10;

	printf("%lu\n", strlen("dsdsd"));
	printf("%d\n", strlen_2("dsdsd"));
	printf("%d\n", testInt);

	return 0;
	
}


int strlen_2(char s[]) {

	extern int externalNumber;

	int i;

	i = 0;

	printf("%d\n", externalNumber);

	while (s[i] != '\0') {
		++i;
	}

	return i;

}
