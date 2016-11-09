//
// Created by Dmitriy Turovtsov on 11/9/16.
//

#include <stdio.h>

int main(int argc, char const *argv[]) {

    int i;

    for (i = 0; i < argc ; i++) {
        printf("%s ", argv[i]);
    }

    printf("\n");

    return 0;

}