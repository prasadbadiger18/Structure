// Nested Structures with Functions: Create a Flight structure with nested Time (hours and minutes)
// and Date (day, month, year) structures. Write functions to input and display the departure and 
// arrival details of a flight.

#include<stdio.h> 
// Including the standard I/O library for input/output functions like printf() and scanf().

struct Time
{
    int hour;
    int minute;
};
// Defining a structure `Time` to represent time with two fields: `hour` and `minute`.

struct Date
{
    int day;
    int month;
    int year;
};
// Defining a structure `Date` to represent a date with three fields: `day`, `month`, and `year`.

struct Flight
{
    char flightNo[10];
    struct Time departureTime;
    struct Time arrivalTime;
    struct Date departureDate;
    struct Date arrivalDate;
};
// Defining the main structure `Flight` that has the flight number as a string (array of chars) and 
// two nested structures for time (`departureTime` and `arrivalTime`) and date (`departureDate` and `arrivalDate`).

void inputDetails(struct Flight *flight)
{
    // Function to input the flight details, accepts a pointer to `Flight` structure.
    
    printf("Enter the Flight number : ");
    scanf("%s",flight->flightNo);
    // Prompting the user to enter the flight number and storing it in the `flightNo` array.

    printf("Enter the arrival time : ");
    scanf("%d %d",&flight->arrivalTime.hour,&flight->arrivalTime.minute);
    // Asking the user to input arrival time in hours and minutes, and storing it in the `arrivalTime` structure.

    printf("Enter the deparure time : ");
    scanf("%d %d",&flight->departureTime.hour,&flight->departureTime.minute);
    // Asking the user to input departure time in hours and minutes, storing it in the `departureTime` structure.

    printf("Enter the arrival date : ");
    scanf("%d %d %d",&flight->arrivalDate.day,&flight->arrivalDate.month,&flight->arrivalDate.year);
    // Asking the user to input the arrival date (day, month, and year), and storing it in the `arrivalDate` structure.

    printf("Enter the departure date : ");
    scanf("%d %d %d",&flight->departureDate.day,&flight->departureDate.month,&flight->departureDate.year);
    // Asking the user to input the departure date (day, month, and year), and storing it in the `departureDate` structure.
}

void displayDetails(struct Flight flight)
{
    // Function to display the flight details, accepts a `Flight` structure as an argument.

    printf("\n--------------------------------\n");
    printf("\n\n\nFlight Number : %s",flight.flightNo);
    // Printing the flight number.

    printf("\n--------------------------------\n");

    printf("Flight arrival time is -: %02d : %02d\n",flight.arrivalTime.hour,flight.arrivalTime.minute);
    // Printing the arrival time in `HH:MM` format. `%02d` ensures the hour and minute are printed with two digits.

    printf("Flight arrival date is -: %02d/%02d/%04d\n\n",flight.arrivalDate.day,flight.arrivalDate.month,flight.arrivalDate.year);
    // Printing the arrival date in `DD/MM/YYYY` format. `%02d` ensures the day and month are printed with two digits, and `%04d` ensures four digits for the year.

    printf("Flight departure time is -: %02d : %02d\n",flight.departureTime.hour,flight.departureTime.minute);
    // Printing the departure time in `HH:MM` format.

    printf("Flight departure date is -: %02d/%02d/%04d\n",flight.departureDate.day,flight.departureDate.month,flight.departureDate.year);
    // Printing the departure date in `DD/MM/YYYY` format.
}

int main()
{
    struct Flight flight;
    // Declaring a variable `flight` of type `Flight` to hold flight details.

    inputDetails(&flight);
    // Calling `inputDetails()` function to input flight details. The address of `flight` is passed so the function can modify the structure.

    displayDetails(flight);
    // Calling `displayDetails()` function to display the entered flight details. The `flight` structure is passed by value here.

    return 0;
    // Return statement indicating successful execution of the program.
}
/*
Key Points:
Nested Structures: The Flight structure contains two other structures, Time and Date, which are used to organize and represent the flight's departure and arrival times and dates.

Pass by Reference: In the inputDetails() function, the Flight structure is passed by reference (pointer) using struct Flight *flight, allowing the function to modify the actual structure in the main() function.

Formatted Output: In the displayDetails() function, %02d is used for formatting the output to ensure the hour, minute, day, and month are always printed with two digits (e.g., 01, 02). %04d is used for the year to ensure four digits.

Flight Number: The flight number is handled as a string (char flightNo[10]), which allows alphanumeric flight numbers to be stored (e.g., "AA1234").

Improvements:
Input Validation: You can add input validation for the times and dates (e.g., checking if hours are between 0 and 23, and minutes between 0 and 59).
Error Handling: Add error handling to make the program more robust, such as re-prompting the user if invalid input is entered.
*/