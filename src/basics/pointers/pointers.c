#include <stdio.h>

int main() {
    int myNum = 69;
    int* ptr = &myNum;

    printf("myNum value: %d\n", myNum);
    printf("myNum address: %p\n", &myNum);
    printf("ptr value: %p\n", ptr);
    printf("ptr target value: %d\n", *ptr);

    // Changing pointer target value
    printf("Changing pointer target value to 70\n");
    *ptr = 70;

    printf("myNum value: %d\n", myNum);
    printf("myNum address: %p\n", &myNum);
    printf("ptr value: %p\n", ptr);
    printf("ptr target value: %d\n", *ptr);

    return 0;
}
