// Simple Student Record Program**: Define a `Student` structure with fields for name, age, and grade. 
// Write a program to input and display the details of a student.


#include <stdio.h>

// Define the Student structure
struct Student {
    char name[50];
    int age;
    char grade;
};

int main() {
    // Create an instance of the Student structure
    struct Student student;

    // Input student details
    printf("Enter student's name: ");
    scanf("%s", student.name);

    printf("Enter student's age: ");
    scanf("%d", &student.age);

    printf("Enter student's grade: ");
    scanf(" %c", &student.grade);

    // Display student details
    printf("\nStudent Details:\n");
    printf("Name: %s\n", student.name);
    printf("Age: %d\n", student.age);
    printf("Grade: %c\n", student.grade);

    return 0;
}
