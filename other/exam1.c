#include <stdio.h>
#define MAXLINE 1000

void squeeze_2(char const from[], char to[], int const c);

int main(int argc, char const *argv[]) {
	

    char result[MAXLINE];
    squeeze_2(argv[1], result, argv[2][0]);



    printf("%s\n", result);



	return 0;

}


void squeeze_2(char const from[], char to[], int const c) {

    int i, j;

    for (i = j = 0; from[i] != '\0'; i++) {
        if (from[i] != c) {
            to[j++] = from[i];
        }
    }

    to[i] = '\0';

}


