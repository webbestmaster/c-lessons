//
// Created by Dmitriy Turovtsov on 11/11/16.
//

#include <stdlib.h>

typedef struct List {
    int x, y;
} List;

List *new_list() {
    List *l = (List *) malloc(sizeof(List));
    l->x = 1;
    l->y = 2;
    return l;
}

void delete_list(List *l) {
    free(l);
}

int main() {
    List *l = new_list();
    l->x = 10;
    (*l).y = 20;
    delete_list(l);
    return 0;
}
