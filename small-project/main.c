//
// Created by Dmitriy Turovtsov on 11/8/16.
//

#include "stdio.h"
#include "common-var.h"

int main() {

    int a, b, sumInt(int a, int b);

    extern int globalSeven;

    a = 5;
    b = 6;

    globalSeven = 8;

    printf("%d\n", globalSeven);
    printf("%s\n", "print me!");
    printf("%d\n", sumInt(a, b));



    return 0;

}