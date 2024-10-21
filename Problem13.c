// // Employee Salary Management: Define a structure for an Employee with fields for name, position, and
// salary. Write a program that calculates the total salary expenditure for a list of employees and allows
//  you to update an employee’s salary by name.

#include <stdio.h>
#include <string.h>

// Define the structure 'Employees' to hold employee details
struct Employees {
    char name[100];   // Field to store the name of the employee
    char position[100]; // Field to store the position of the employee
    int salary;      // Field to store the salary of the employee
};

// Function to input employee details (name, position, salary)
void inputFields(struct Employees *employee, int size) {
    for (int i = 0; i < size; i++) {
        // Input the name of the employee
        printf("Enter the name of employee %d: ", i + 1);
        scanf("%99s", employee[i].name); // %99s ensures no buffer overflow for a 100-char array

        // Input the position of the employee
        printf("Enter the position of employee %d: ", i + 1);
        scanf("%99s", employee[i].position); // %99s ensures no buffer overflow for a 100-char array

        // Input the salary of the employee
        printf("Enter the salary of employee %d: ", i + 1);
        scanf("%d", &employee[i].salary); // Reading integer value for salary

        printf("\n"); // Blank line for readability
    }
}

// Function to calculate the total salary expenditure of all employees
void TotalExpenditure(struct Employees employee[], int size) {
    int sum = 0; // Initialize the sum to 0
    // Loop through each employee to accumulate their salaries
    for (int i = 0; i < size; i++) {
        sum = sum + employee[i].salary; // Add each employee's salary to sum
    }
    // Output the total salary expenditure
    printf("Total salary expenditure: %d\n\n", sum);
}

// Function to update the salary of a specific employee based on their name
void UpdateSalary(struct Employees employee[], int size) {
    int found = 0; // Flag to check if employee is found
    char matchName[100]; // To store the name for matching
    // Prompt the user to input the name of the employee whose salary needs to be updated
    printf("Enter the name of employee to update the salary: ");
    scanf("%99s", matchName); // Input employee's name to be matched

    // Loop through all employees to find the matching name
    for (int i = 0; i < size; i++) {
        // If the employee name matches, update their salary
        if (strcmp(employee[i].name, matchName) == 0) {
            found = 1; // Set flag to 1 indicating employee found
            // Input the revised salary
            printf("Enter the revised salary: ");
            scanf("%d", &employee[i].salary); // Update salary value
            break; // Exit loop after finding the employee
        }
    }
    // If no employee was found with the entered name
    if (!found) {
        printf("\nEmployee name not found in list!\n\n");
    }
}

// Function to display all employees' information (name, position, salary)
void DisplayInfo(struct Employees employee[], int size) {
    // Loop through all employees and print their details
    for (int i = 0; i < size; i++) {
        printf("Employee %d Name: %s\n", i + 1, employee[i].name); // Print employee name
        printf("Employee %d Position: %s\n", i + 1, employee[i].position); // Print employee position
        printf("Employee %d Salary: %d\n", i + 1, employee[i].salary); // Print employee salary
        printf("\n"); // Blank line for readability
    }
}

int main() {
    int n; // To store the number of employees
    // Prompt user to enter the number of employees
    printf("Enter the number of employees: ");
    scanf("%d", &n); // Input number of employees

    struct Employees employee[n]; // Declare an array of 'Employees' structure of size n

    // Call inputFields to get employee data
    inputFields(employee, n);
    // Call TotalExpenditure to calculate and display the total salary expenditure
    TotalExpenditure(employee, n);
    // Call UpdateSalary to allow updating a specific employee's salary
    UpdateSalary(employee, n);
    // Call DisplayInfo to display all employee information
    DisplayInfo(employee, n);

    return 0; // Return 0 to indicate successful execution
}
