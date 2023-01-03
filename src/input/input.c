#include <stdio.h>
#include <string.h>

int main() {
    int userAge;
    char gender;

    printf("Insert your age and gender character [m/f]: ");
    scanf("%d %c", &userAge, &gender);

    printf("Your age is: %d\n", userAge);
    printf("Your gender is: %s\n", (gender == 'm') ? "Male" : "Female");

    // Clear stdin buffer
    int c;
    while ( (c = getchar()) != '\n' && c != EOF) {  }

    // fgets(var, sizeof(var), stdin) -> gets full line of string
    char fullName[30];

    printf("Enter your first and last name: ");
    fgets(fullName, sizeof(fullName), stdin);

    // Remove trailing new line
    printf("Trailing posision is: %lu, which will be set to 0!\n", strcspn(fullName, "\n"));

    fullName[strcspn(fullName, "\n")] = 0;

    printf("Hello %s!\n", fullName);

    return 0;
}
