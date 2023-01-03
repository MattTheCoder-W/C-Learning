#include <stdio.h>
#include <stdbool.h>

int main() {
    float time = 21.44;

    char dayTime = (time > 20) ? 'N': 'D';

    printf("Current time of day is: %c\n", dayTime);

    return 0;
}
