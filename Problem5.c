// Pointer to Structure: Define a structure for a Point with x and y coordinates.
// Use pointers to access and modify the structure’s data.

#include <stdio.h>

// Define the Point structure
struct Point
{
    int x;
    int y;
};

int main()
{
    // Create an instance of the Point structure
    struct Point p1;

    // Create a pointer to the Point structure and point it to p1
    struct Point *ptr = &p1;

    // Use the pointer to set values for x and y
    ptr->x = 10;
    ptr->y = 20;

    // Print the values using the pointer
    printf("Point coordinates:\n");
    printf("x: %d\n", ptr->x);
    printf("y: %d\n", ptr->y);

    // Modify the values of x and y through the pointer
    ptr->x = 30;
    ptr->y = 40;

    // Print the modified values
    printf("\nModified Point coordinates:\n");
    printf("x: %d\n", ptr->x);
    printf("y: %d\n", ptr->y);

    return 0;
}
