//TASK : 
// Structure Within a Structure: Create a Date structure with day, month, and year. 
// Then create an Employee structure that includes a joining date field using the Date structure.

/*Task Breakdown:
Create a Date Structure:

Define a structure called Date with fields for day, month, and year.
This structure will hold the information for a specific date.
Create an Employee Structure:

Define another structure called Employee that represents an employee’s information.
In this Employee structure, you will include a field of type Date. This field will store the employee's joining date.
Combine the Structures:

The Employee structure will have standard fields such as name and ID, along with the nested Date structure for the joining date.
Objective:

Initialize and assign values to both the Employee and Date fields.
Display the employee’s information, including their joining date.
This question helps you practice how to nest one structure inside another in C, which is useful for organizing complex data.
*/
#include <stdio.h>  // Include standard input-output library for printf function

// Define the Date structure to store day, month, and year
struct Date {
    int day, month, year;
};

// Define the Employee structure to store name, ID, and Date of Joining (DOJ)
struct Employee {
    char name[10];  // Character array to store the employee's name
    int ID;         // Integer variable to store the employee's ID
    struct Date DOJ; // Nested Date structure to store the date of joining
};

int main()
{
    // Initialize an Employee instance emp1 with name, ID, and date of joining
    struct Employee emp1 = {"Prasad", 12345678, {12, 10, 2024}};
    
    // Print the name of the employee
    printf("Name : %s\n", emp1.name);

    // Print the ID of the employee
    printf("ID : %d\n", emp1.ID);

    // Print the Date of Joining in day/month/year format
    printf("Date of joining : %d/%d/%d", emp1.DOJ.day, emp1.DOJ.month, emp1.DOJ.year);

    return 0; // Return 0 to indicate successful program execution
}

/*Explanation of Comments:
Include Standard Library: The #include <stdio.h> line includes the standard library for input-output operations like printf.
Structure Definitions:
The struct Date structure defines fields for day, month, and year to store date information.
The struct Employee structure defines fields for name (a character array), ID, and DOJ (an instance of the Date structure for the date of joining).
Variable Initialization: Inside main, emp1 is an instance of struct Employee that is initialized with specific values.
Printing Values: Each printf statement outputs specific details about the emp1 instance, such as name, ID, and the Date of Joining in a formatted manner.
Return Statement: return 0; indicates the program ran successfully.
*/