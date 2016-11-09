//
// Created by Dmitriy Turovtsov on 11/8/16.
//

#include <stdio.h>

void changeArr(char arr[]);

int main () {

    char arr1[10];
    int i;

    for (i = 0; i < 10; i++) {
        arr1[i] = 'a';
    }

    changeArr(arr1);

    arr1[9] = '\0';

    printf("%s\n", arr1);

}

void changeArr(char arr[]) {

    int i = 0;

    for (i = 0; i < 10; i++) {
        arr[i] = 'b';
    }

}

