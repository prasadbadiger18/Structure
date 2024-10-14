// Dynamic Memory Allocation: Define a structure for a Movie with fields for title, director, and release year.
// Use malloc to dynamically allocate memory for multiple movies and input data from the user.

#include <stdio.h>    // Include standard input-output library
#include <stdlib.h>   // Include standard library for memory allocation functions

// Define the 'movie' structure to store information about a movie
struct movie {
    char title[100];    // Array to store the movie title
    char director[100]; // Array to store the director's name
    int year;           // Integer to store the release year of the movie
};

int main() {
    int numofmovies;        // Variable to store the number of movies the user wants to input
    struct movie *movies;   // Pointer to a 'movie' structure, which will hold the list of movies dynamically

    // Prompt user to enter the number of movies they want to input
    printf("Enter the number of movies! : ");
    scanf("%d", &numofmovies);   // Read the user input and store it in 'numofmovies'

    // Dynamically allocate memory for an array of 'movie' structures based on user input
    movies = (struct movie *)malloc(numofmovies * sizeof(struct movie));

    // Loop through each movie to gather details
    for (int i = 0; i < numofmovies; i++) {
        printf("\nEnter details for movie %d:\n", i + 1);   // Display which movie details are being entered

        printf("Title : ");
        scanf("%s", movies[i].title);    // Read the title of the movie and store it in the 'title' field

        printf("director : ");
        scanf("%s", movies[i].director); // Read the director's name and store it in the 'director' field

        printf("Year : ");
        scanf("%d", &movies[i].year);    // Read the release year and store it in the 'year' field
    }

    // Loop through each movie to display details
    for (int i = 0; i < numofmovies; i++) {
        printf("Movie %d\n", i + 1);                   // Display movie number
        printf("Title :  %s\n", movies[i].title);      // Print the movie's title
        printf("Director :  %s\n", movies[i].director); // Print the director's name
        printf("Year :  %d\n", movies[i].year);        // Print the release year of the movie
    }

    // Free the dynamically allocated memory once done
    free(movies);
    return 0;
}

/*Explanation of Key Sections:
Structure Definition:

The struct movie defines a blueprint for a movie's data. It includes fields for the title, director, and release year.
Dynamic Memory Allocation:

malloc is used to allocate memory for an array of movie structures, where the size is based on the user's input (numofmovies). This way, we only use as much memory as needed.
The type casting (struct movie *) is used to cast the void pointer returned by malloc to the correct data type.
User Input:

The program reads and stores each movie's title, director, and release year one by one. The scanf function is used to get user input for each field.
Note: scanf with %s does not handle spaces well; using fgets instead of scanf for the strings would allow multi-word titles and director names.
Data Display:

The program prints out each movie’s details by looping over the array, using movies[i] to access each element.
Memory Deallocation:

Finally, free(movies); is used to release the dynamically allocated memory back to the system, preventing memory leaks.
This code efficiently collects and stores movie information for a user-defined number of movies, then displays the stored information.*/