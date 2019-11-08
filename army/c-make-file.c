// как запускать
// gcc ./c-make-file.c && ./a.out
// эта строка скомпилит "c-make-file.c" и запусть программу "a.out"

#include <stdio.h>
#include <string.h>

int makeFile(char filePath[], char message[]) {
    FILE *file = fopen(filePath, "w");

    int i = 0;

    while (i < strlen(message)) {
        fputc(message[i], file);
        i++;
    }

    return 0;
}

int main() {
    makeFile("message1122.txt", "I am a file!!");

    return 0;
}
