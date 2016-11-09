//
// Created by Dmitriy Turovtsov on 11/9/16.
//

#include <stdio.h>

int main(int argc, char const *argv[]) {

    while (--argc > 0) {
        printf("%s ", *++argv);
    }

    printf("\n");

    return 0;

}
