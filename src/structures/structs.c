#include <stdio.h>
#include <stdbool.h>
#include <string.h>

struct student {
    int age;
    char name[16];
    char classId[3];
    float averageGrade;
    bool aboveAverage;
};

int main() {
    struct student s1; 

    strcpy(s1.name, "Matthew");
    s1.age = 18;
    strcpy(s1.classId, "4h");
    s1.averageGrade = 4.57;
    s1.aboveAverage = (s1.averageGrade > 4.75) ? true : false;

    printf("Student name: %s\n", s1.name);
    printf("Student age: %d\n", s1.age);
    printf("Student class: %s\n", s1.classId);
    printf("Student average grade: %.2f\n", s1.averageGrade);
    printf("Is above average: %s\n", (s1.aboveAverage) ? "Yes" : "No");

    return 0;
}
