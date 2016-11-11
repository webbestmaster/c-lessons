//
// Created by Dmitriy Turovtsov on 11/11/16.
//

//#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    const int maxNumber = 100;
    int *p = NULL;
    unsigned i, size;

    do {
        printf("Enter number from 0 to %d: ", maxNumber);
        scanf("%d", &size);
        if (size < maxNumber) {
            break;
        }
    } while (1);

    p = (int*) malloc(size * sizeof(int));

    for (i = 0; i < size; i++) {
        p[i] = i*i;
    }

    for (i = 0; i < size; i++) {
        printf("%d ", p[i]);
    }

    printf("\n");

//    _getch();
    free(p);

    return 0;
}
