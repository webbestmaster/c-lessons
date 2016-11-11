//
// Created by Dmitriy Turovtsov on 11/11/16.
//

//#include <conio.h>
#include <stdio.h>

int main() {
    int A = 100;
    int *p;

    //Получаем адрес переменной A
    p = &A;

    //Выводим адрес переменной A
    printf("%p\n", p);

    //Выводим содержимое переменной A
    printf("%d\n", *p);

    //Меняем содержимое переменной A
    *p = 200;

    printf("%d\n", A);
    printf("%d", *p);

//     getch();

    return 0;
}