#include <stdio.h>

#define MAXLINE 100

int getline_2(char line[], int lim);
void copy(char to[], char from []);

int main(int argc, char const *argv[])
{
	/*sdfjs daf;lj sadl;fkjasd lfjk sdal;kfj asdl;kfj asdlk;fj sadfjkl; asdl;fj asdl;kfj asdflkjf */

	int len;
	int max;
	char line[MAXLINE];
	char longest[MAXLINE];

	while ((len = getline_2(line, MAXLINE)) > 0) {
		if (len > max) {
			max = len;
			copy(longest, line);
		}
	}

	if (max > 0 ) {
		printf("%s\n", longest);
	}

	return 0;

}

int getline_2(char s[], int lim) {

	int c, i;

	i = 0;

	for (i = 0; i < lim && (c = getchar()) != EOF && c != '\n'; ++i)
	{
		s[i] = c;
	}

	if (c == '\n') {
		s[i] = c;
		++i;
	}

	s[i] = '\0';

	return i;

}

void copy(char to[], char from[]) {
	int i;
	i = 0;
	while ((to[i]=from[i]) != '\0') {
		++i;
	}
}




