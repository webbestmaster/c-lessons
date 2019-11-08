// как запускать
// gcc ./c-138.c && ./a.out
// эта строка скомпилит "c-138.c" и запустит программу "a.out"

#include <stdio.h>
#include <math.h>

int makeFile(char filePath[], char message[], float number) {
    FILE *file = fopen(filePath, "w");

    fprintf(file, message, number);

    fclose(file);

    return 0;
}

float getDistance(float x1, float y1, float x2, float y2) {
    float deltaX, deltaY;

    deltaX = x1 - x2;
    deltaY = y1 - y2;

    return sqrt(pow(deltaX, 2) + pow(deltaY, 2));
}

int main() {
    float x1, y1, x2, y2, x3, y3;
    float dotX, dotY;
    float distance1, distance2, distance3;
    char message[] = "Минимальное расстояние равно %f\n";
    char pathToFile[] = "out.txt";

    printf("Введите значения углов треугольника в формате: x1 y1 x2 y2 x3 y3\n");
    scanf("%f %f %f %f %f %f", &x1, &y1, &x2, &y2, &x3, &y3);

    printf("Введите значение точки в формате: dotX dotY\n");
    scanf("%f %f", &dotX, &dotY);

    distance1 = getDistance(x1, y1, dotX, dotY);
    distance2 = getDistance(x2, y2, dotX, dotY);
    distance3 = getDistance(x2, y2, dotX, dotY);

    if (distance1 < distance2 && distance1 < distance3) {
        makeFile(pathToFile, message, distance1);
        return 0;
    }

    if (distance2 < distance1 && distance2 < distance3) {
        makeFile(pathToFile, message, distance2);
        return 0;
    }

    makeFile(pathToFile, message, distance3);

    return 0;
}
