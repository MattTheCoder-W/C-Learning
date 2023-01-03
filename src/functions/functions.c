#include <stdio.h>
#include <string.h>

#if !defined(ARRAY_SIZE)
    #define ARRAY_SIZE(x) (sizeof((x)) / sizeof((x)[0]))
#endif

void displayArray(int*, long unsigned int);

int main() {
    int numbers[] = { 1, 2, 3, 4, 10 }; 
    displayArray(numbers, ARRAY_SIZE(numbers));
    return 0;
}

void displayArray(int* array, long unsigned int arraySize) {
    for (int i = 0; i < arraySize; i++) {
        (i == arraySize-1) ? printf("%d\n", array[i]) : printf("%d, ", array[i]);
    }
}
