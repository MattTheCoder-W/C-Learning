#include <stdio.h>
#include <string.h>

int main() {
    // Pure strings
    char myName[] = "Mateusz";
    char greetings[] = "Hello there, I am a string!";

    printf("My name is: %s\n", myName);
    printf("My name starts with: %c\n", myName[0]);

    // String library

    // String length
    printf("String \'%s\' has %lu characters!\n", greetings, strlen(greetings));

    // String joining
    char fullName[25] = "";
    char firstName[] = "Mateusz";
    char lastName[] = "Wasaznik";

    strcat(fullName, firstName);
    strcat(fullName, lastName);

    printf("My full name is: %s\n", fullName);

    // String copying
    char str1[20] = "Hello";
    char str2[20];

    strcpy(str2, str1);

    printf("Copied string is: %s\n", str2);

    // String comparing
    char plate1[] = "apple";
    char plate2[] = "apple";
    char plate3[] = "orange";

    printf("Plate1 vs Plate2: %s\n", (strcmp(plate1, plate2) == 0) ? "Equal" : "Not Equal");
    printf("Plate1 vs Plate3: %s\n", (strcmp(plate1, plate3) == 0) ? "Equal" : "Not Equal");

    return 0;
}
