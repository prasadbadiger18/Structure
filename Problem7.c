// Calculate Average Marks: Create a structure for a Student with fields for name and marks in three 
// subjects. Write a function that calculates the average marks of a student and prints it.

#include<stdio.h>

// Define a structure to represent a Student
typedef struct Student {
    char name[20]; // Character array to hold the student's name (max 19 chars + null terminator)
    int mark1;     // Integer to store the first mark (English)
    int mark2;     // Integer to store the second mark (Marathi)
    int mark3;     // Integer to store the third mark (Hindi)
} student; // Typedef allows us to use 'student' instead of 'struct Student'

// Function to calculate the average of the marks of a student
// Takes a 'student' structure as an argument and returns a float value
float Average(student s) {
   return (s.mark1 + s.mark2 + s.mark3) / 3.0; // Sum the marks and divide by 3.0 to calculate the average
}

int main() {
   student studentss[1]; // Declare an array of 'student' structures to hold information for 1 student

   // Loop to input details for each student in the array (only 1 student in this case)
   for(int i = 0; i < 1; i++) {
       // Prompt user to enter the name of the student
       printf("Enter Student name of student %d : ", i + 1);
       scanf("%s", studentss[i].name); // Use %s to read a string into the 'name' field, no need for '&' as 'name' is an array

       // Prompt user to enter the English mark of the student
       printf("Enter English mark of student %d : ", i + 1);
       scanf("%d", &studentss[i].mark1); // Use %d to read an integer, and pass the address with &

       // Prompt user to enter the Marathi mark of the student
       printf("Enter Marathi mark of student %d : ", i + 1);
       scanf("%d", &studentss[i].mark2); // Use %d to read an integer, and pass the address with &

       // Prompt user to enter the Hindi mark of the student
       printf("Enter Hindi mark of student %d : ", i + 1);
       scanf("%d", &studentss[i].mark3); // Use %d to read an integer, and pass the address with &
   }

   // Loop to display the name, marks, and average for each student
   for(int i = 0; i < 1; i++) {
       // Display the student's name
       printf("Name: %s\n", studentss[i].name);

       // Display the marks of the student in English, Marathi, and Hindi
       printf("English: %d, Marathi: %d, Hindi: %d\n", studentss[i].mark1, studentss[i].mark2, studentss[i].mark3);

       // Calculate and display the average of the student's marks
       // Call the 'Average' function, passing the 'studentss[i]' structure as an argument
       printf("Average of %s is %.2f\n", studentss[i].name, Average(studentss[i]));
   }

   return 0; // End of the main function
}



/*Explanation:
Structure Definition (typedef struct Student {...} student;):

Defines a Student structure with three fields: name, mark1, mark2, and mark3.
The typedef allows you to use student as an alias for struct Student, making it more concise.
Average Function (float Average(student s)):

Takes a student structure as input and returns the average of mark1, mark2, and mark3.
The marks are summed and divided by 3.0 (using 3.0 ensures the division is done in floating-point to get a decimal result).
Main Function (int main() {...}):

Declares an array studentss of size 1, which will hold one student structure.
Input Loop:

Loops once (i < 1) to prompt the user to enter the name and marks for the student.
Uses scanf to read values and store them in the respective fields of studentss[i].
Important: For name, no & is used because studentss[i].name is already a pointer to the first character of the array. For the marks, & is used to pass the address of the fields.
Output Loop:

Loops once to display the mark1, mark2, and mark3 fields for the student.
Calls the Average function with studentss[i] and prints the result.
This program captures the student’s name and three marks, then calculates the average using the Average function and displays the details.
*/