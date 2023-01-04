#include <stdio.h>

int main() {
    printf("Hello, this is data conversion script!\n");

    int num1 = 5;
    int num2 = 2;
    float result = (float) num1 / num2;
    printf("Math: %d / %d = %.1f\n", num1, num2, result);
    return 0;
}
