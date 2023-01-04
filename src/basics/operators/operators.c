#include <stdio.h>

int main() {
    // sizeof operator
    int myInt;
    float myFloat;
    double myDouble;
    char myChar;

    printf("int: %lu, float: %lu, double: %lu, char: %lu\n",
        sizeof(myInt), sizeof(myFloat), sizeof(myDouble), sizeof(myChar));

    // Exercise

    int x = 10;
    int y = 5;
    printf("%d\n", x * y);

    return 0;
}
