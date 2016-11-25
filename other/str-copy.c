#include <stdio.h>

void strCopy(char source[], char dest[]);

int main() {

    char str1[] = "Hello World";
    char str2[10];

    strCopy(str1, str2);

    printf("%s_end\n", str1);
    printf("%s_end\n", str2);

};

void strCopy(char *source, char *dest) {
    while (*dest++ = *source++);
}
