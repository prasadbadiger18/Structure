#include <stdio.h>

// Define a structure
struct Person {
    char name[50];  // Member to store name
    int age;        // Member to store age
    float height;   // Member to store height in meters
};

int main() {
    // Declare a structure variable
    struct Person person1;

    // Access and assign values to the structure members
    strcpy(person1.name, "John Doe");
    person1.age = 30;
    person1.height = 1.75;

    // Print the values of the structure members
    printf("Name: %s\n", person1.name);
    printf("Age: %d\n", person1.age);
    printf("Height: %.2f meters\n", person1.height);

    return 0;
}

/*
Explanation of Key Concepts:
Structure Definition:

c
Copy code
struct Person {
    char name[50];  // Stores a name (string) up to 50 characters
    int age;        // Stores the age as an integer
    float height;   // Stores the height as a float
};
The keyword struct is used to define a new structure type.
The structure Person is defined with three members:
char name[50]: an array of characters to store the person's name.
int age: an integer to store the person's age.
float height: a floating-point number to store the person's height.
Declaring a Structure Variable:

c
Copy code
struct Person person1;
person1 is a variable of type struct Person.
You can use person1 to access and store values in the structure's members.
Assigning Values to Structure Members:

c
Copy code
strcpy(person1.name, "John Doe");  // Use strcpy to copy a string into name
person1.age = 30;                  // Assign an integer value to age
person1.height = 1.75;             // Assign a float value to height
The strcpy() function (from string.h) is used to copy a string into the name member of the structure.
The age and height members are directly assigned values using the dot operator ..
Accessing and Printing Values of Structure Members:

c
Copy code
printf("Name: %s\n", person1.name);
printf("Age: %d\n", person1.age);
printf("Height: %.2f meters\n", person1.height);
The dot operator . is used to access the members of the structure.
The printf statements print out the values of name, age, and height stored in person1.
Expected Output:
makefile
Copy code
Name: John Doe
Age: 30
Height: 1.75 meters
Summary:
Structures in C are used to group different data types (like int, char, float) under a single name.
You can declare variables of that structure type and access their members using the dot operator ..
The struct keyword defines the structure, and members can be assigned values individually.
*/




