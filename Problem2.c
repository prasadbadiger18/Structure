// Define a Structure for a Book: Create a structure named Book with fields for title, author, and price.
// Create an instance, initialize it, and print the details.

#include<stdio.h>
#include<string.h>

struct Book{
    char title[20];
    char author[50];
    float price; 
};
int main()
{
    struct Book ob;
    strcpy(ob.title,"Ratan Tata");
    strcpy(ob.author,"Prasad");
    ob.price=100;

    printf("Title : %s\n",ob.title);
    printf("Author : %s\n",ob.author);
    printf("Price : %f",ob.price);
}
/*
#include <stdio.h>

// Define the Book structure
struct Book {
    char title[50];
    char author[50];
    float price;
};

int main() {
    // Create an instance of the Book structure
    struct Book myBook;

    // Manually initialize the title
    char title[] = "The Great Gatsby";
    for (int i = 0; i < sizeof(title); i++) {
        myBook.title[i] = title[i];
    }

    // Manually initialize the author
    char author[] = "F. Scott Fitzgerald";
    for (int i = 0; i < sizeof(author); i++) {
        myBook.author[i] = author[i];
    }

    // Initialize the price
    myBook.price = 10.99;

    // Print the book details
    printf("Book Details:\n");
    printf("Title: %s\n", myBook.title);
    printf("Author: %s\n", myBook.author);
    printf("Price: $%.2f\n", myBook.price);

    return 0;
}

*/