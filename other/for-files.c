//
// Created by dim on 11.11.16.
//

#include <stdio.h>

int main(int argc, char *argv[]) {

    FILE *fp;

    void filecopy(FILE *, FILE *);

    char *prog = argv[0]; // имя программы
    if (argc == 1) {
        filecopy(stdin, stdout);
    } else {

        while (--argc > 0) {
            if ((fp = fopen(*++argv, "r")) == NULL) {
                fprintf(stderr, "%s: не могу открыть файл %s\n", prog, *argv);
                return 1;
            } else {
                filecopy(fp, stdout);
                fclose(fp);
            }
        }

    }

    if (ferror(stdout)) {
        fprintf(stderr, "%s: ошибка записи в stdout\n", prog);
        return 2;
    }

    return 0;

}

void filecopy(FILE *ifp, FILE *ofp) {

    int c;

    while((c = getc(ifp)) != EOF ) {
        putc(c, ofp);
    }

}
