//
// Created by dim on 11.11.16.
//

#include <stdio.h>
#include <stdarg.h>

void minprintf(char *fmt, ...);

int main() {

    minprintf("%d - %d\n", 1, 2);
    return 0;

}

void minprintf(char *fmt, ...) {

    va_list ap; // указывает на очередной безымянный аргумент

    char *p, *sval;
    int ival;
    double dval;

    va_start(ap, fmt); // устанавливает ap на 1-й безымянный аргумент

    for (p = fmt; *p; p++) {
        if (*p != '%') {
            putchar(*p);
            continue;
        }

        switch (*++p) {
            case 'd':
                ival = va_arg(ap, int);
                printf("%d", ival);
                break;

            case 'f':
                dval = va_arg(ap, double);
                printf("%f", dval);
                break;

            case 's':
                for (sval = va_arg(ap, char *); *sval; sval++) {
                    putchar(*sval);
                }
                break;

            default:
                putchar(*p);
                break;
        }

        va_end(ap);

    }

}