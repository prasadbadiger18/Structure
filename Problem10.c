#include <stdio.h>      // Includes the standard input/output library
#include <string.h>     // Includes the string manipulation library

// Structure definition for Product
struct Product {
    char name[100];     // Character array to store the name of the product
    float price;        // Float variable to store the price of the product
    int quantity;       // Integer variable to store the quantity of the product
};

// Function to sort products by price in ascending order
void sortProductsByPrice(struct Product p[], int n) {
    struct Product temp;  // Temporary structure variable to assist with swapping

    // Outer loop to iterate over the array multiple times
    for (int i = 0; i < n - 1; i++) {
        // Inner loop to perform comparisons and swaps
        for (int j = 0; j < n - i - 1; j++) {
            // Compare prices of adjacent products
            if (p[j].price > p[j + 1].price) {
                // Swap p[j] and p[j + 1] if they are out of order
                temp = p[j];
                p[j] = p[j + 1];
                p[j + 1] = temp;
            }
        }
    }
}

// Function to print the product list
void printProducts(struct Product products[], int n) {
    printf("\nProduct List (sorted by price):\n");  // Prints a header for the list

    // Loop through each product in the array and print details
    for (int i = 0; i < n; i++) {
        // Print the name, price, and quantity of each product
        printf("Name: %s, Price: %.2f, Quantity: %d\n", 
               products[i].name, products[i].price, products[i].quantity);
    }
}

int main() {
    int n;  // Variable to hold the number of products

    // Prompt user to enter the number of products
    printf("Enter the number of products: ");
    scanf("%d", &n);

    struct Product products[n];  // Declare an array of Product structures of size n

    // Loop to input details for each product
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for product %d\n", i + 1);  // Display product number

        // Prompt user for the product's name
        printf("Name: ");
        scanf("%s", products[i].name);

        // Prompt user for the product's price
        printf("Price: ");
        scanf("%f", &products[i].price);

        // Prompt user for the product's quantity
        printf("Quantity: ");
        scanf("%d", &products[i].quantity);
    }

    // Call the sorting function to sort products by price
    sortProductsByPrice(products, n);

    // Call the function to print the sorted product list
    printProducts(products, n);

    return 0;  // Exit the program
}

/*

Explanation of the Program
Structure Definition: The Product structure defines three fields: name for the product name, price for the product price, and quantity for the stock quantity. This provides a blueprint for each product in the program.

Sorting Function:

sortProductsByPrice() is a function that uses the Bubble Sort algorithm to sort an array of Product structures based on their price in ascending order.
It uses nested loops: the outer loop controls how many passes are made through the array, and the inner loop performs the comparison and swapping of adjacent elements.
If the price of the current product is greater than the next one, they are swapped using a temporary Product variable.
Print Function:

printProducts() is a function that takes the sorted list of products and prints each one’s name, price, and quantity.
It iterates through the list using a for loop and formats the output with printf().
Main Function:

The program starts in main() by asking the user for the number of products they want to enter.
An array of Product structures named products is declared, with the size based on user input.
The program then loops to receive each product's name, price, and quantity from the user.
After inputting the data, the program sorts the products by calling sortProductsByPrice() and then prints the sorted list using printProducts().
This program provides a simple way to organize and display products in ascending order based on their price, helping users manage and view product information more effectively.






*/