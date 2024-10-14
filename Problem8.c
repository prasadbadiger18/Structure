// Bookstore Inventory: Define a structure for a Book with title, author, price, and stock.
// Write a program to search for a book by title and update its stock.

#include <stdio.h>    // Include the standard input/output library
#include <string.h>   // Include the string library for string manipulation functions like strcmp

// Define a structure named 'Book' to hold book details
struct Book {
    char title[100];    // Array to hold the title of the book
    char author[100];   // Array to hold the author's name
    float price;        // Variable to hold the price of the book
    int stock;          // Variable to hold the stock quantity of the book
};

// Function to search for a book by title and update its stock quantity
void SearchAndUpdate(struct Book collection[], int size) {
    char searchTitle[100];   // Array to hold the book title entered by the user for search
    int found = 0;           // Flag to check if the book was found, initially set to 0 (not found)

    // Prompt the user to enter the title of the book they want to search for
    printf("Enter the book title to search: ");
    scanf("%s", searchTitle);   // Read the book title from user input and store it in 'searchTitle'

    // Loop through the collection of books to find a match for the entered title
    for (int i = 0; i < size; i++) {
        // Compare the current book title with the user-entered title
        if (strcmp(collection[i].title, searchTitle) == 0) {
            found = 1;   // Set 'found' to 1 if a match is found
            printf("Book Found!\n");
            
            // Display the details of the found book
            printf("Title = %s , Author = %s , Price = %.2f , Stock = %d\n", 
                   collection[i].title, collection[i].author, collection[i].price, collection[i].stock);

            // Prompt the user to enter a new stock quantity for the found book
            printf("Enter New Stock quantity!\n");
            scanf("%d", &collection[i].stock);   // Read the new stock quantity and update the book's stock

            printf("\nStock Updated!");   // Confirm the stock update
        }
    }
    
    // If no matching book was found, display a message
    if (!found) {
        printf("Book with the title '%s' not found.\n", searchTitle);
    }
}

// Main function to define the book collection and call the search and update function
int main() {
    // Initialize an array of 'Book' structures with sample data
    struct Book collection[3] = {
        {"Book1", "Author1", 10, 100},
        {"Book2", "Author2", 20, 200},
        {"Book3", "Author3", 30, 300}
    };

    // Call the function to search for a book and update stock
    SearchAndUpdate(collection, 3);

    // Display the updated book collection
    printf("\nUpdated Book Collection:\n");
    for (int i = 0; i < 3; i++) {
        printf("Title: %s\nAuthor: %s\nPrice: $%.2f\nStock: %d\n\n", 
               collection[i].title, collection[i].author, collection[i].price, collection[i].stock);
    }

    return 0;   // Indicate that the program executed successfully
}

/*Explanation
Structure Definition:

The Book structure defines the data for each book, including the title, author, price, and stock.
SearchAndUpdate Function:

This function takes the array of books (collection) and the number of books (size).
It prompts the user to enter a title, then loops through the array to find a match using strcmp.
If a match is found, the details of the book are displayed, and the user is asked to update the stock. The found flag is set to 1 so that the "not found" message is not printed for found books.
If no book is found by the end of the loop, it prints a message saying the book wasn't found.
Main Function:

It initializes an array of Book structures with sample data and then calls the SearchAndUpdate function to search for a book title and update its stock.
Finally, it prints the updated collection so that the user can see the changes.

*/