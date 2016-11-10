//
// Created by Dmitriy Turovtsov on 11/10/16.
//

#include <stdio.h>

struct point {
    int x;
    int y;
};

struct point makepoint(int x, int y);

void changeX(struct point*, int);

int main () {

    int x = 1;
    int y = 2;

    struct point newPoint;

    newPoint = makepoint(x, y);

    printf("%d, %d\n", newPoint.x, newPoint.y);

    changeX(&newPoint, 10);

    printf("%d, %d\n", newPoint.x, newPoint.y);

    return 0;

}

void changeX(struct point *pointToChange, int newX) {
    (*pointToChange).x = newX;
}

struct point makepoint(int x, int y) {

    struct point newPoint;

    newPoint.x = x;
    newPoint.y = y;

    return newPoint;

}
