// как запускать
// gcc ./c-107.c && ./a.out
// эта строка скомпилит "c-107.c" и запустит программу "a.out"

#include <stdio.h>
#include <math.h>

int makeFile(char filePath[], char message[], float number) {
    FILE *file = fopen(filePath, "w");

    fprintf(file, message, number);

    fclose(file);

    return 0;
}

int main() {
    FILE *myFile = fopen("ini.txt", "r");

    int arrayLength = 1000;
    int numberArray[arrayLength];
    int currentNumber = 0;
    int currentProgress = 1;
    int numberListSize = 0;
    float result = 0;

    int i;

    for (i = 0; i < arrayLength; i++) {
        fscanf(myFile, "%d ", &currentNumber);
        if (currentNumber == 0) {
            numberListSize = i;
            break;
        } else {
            currentProgress = currentProgress * currentNumber;
            numberArray[i] = currentNumber;
        }
    }

    fclose(myFile);

    result = pow(currentProgress, 1.0 / numberListSize);

    makeFile("out.txt", "Среднее геометрическое: %f\n", result);

    return 0;
}
