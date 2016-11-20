//
// Created by dim on 20.11.16.
//

#include <stdio.h>

int main() {

    float depositMonthPercent = 1.23; // deposits' percent
    int period = 5; // number of months
    float deposit = 100; // start deposit' value
    int i;
    long result;

    for (i = 0; i < period; i++) {
        deposit *= depositMonthPercent;
    }

    printf("%f\n", deposit);

    return 0;
}