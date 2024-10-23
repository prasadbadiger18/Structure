/*Bank Account Management System: Create a structure for a BankAccount with fields for account number,
 name, and balance. Implement functions to deposit, withdraw, and display account details.*/


#include<stdio.h>   // Including the standard input-output library for printf and scanf functions
#include<stdlib.h>   // Including the standard library for general utility functions (e.g., memory management)

// Defining a structure 'BankAccount' to store bank account details
struct BankAccount{
   char name[100];   // Character array to store the name of the account holder (max length 99 characters)
   int AccNo;        // Integer to store the account number
   float balance;    // Float to store the current balance of the account
};

// Function to input bank account details
void inputDetails(struct BankAccount *accHolder)  // Pointer to structure as parameter to modify the original data
{
    printf("Enter the name of the account holder : ");   // Prompt to input the name
    scanf("%99s",accHolder->name);  // Reading the name, limiting to 99 characters to prevent overflow
    
    printf("Enter the account number : ");   // Prompt to input the account number
    scanf("%d",&accHolder->AccNo);   // Reading the account number and storing it in the structure
    
    printf("Enter Account opening balance : ");   // Prompt to input the opening balance
    scanf("%f",&accHolder->balance);  // Reading the balance and storing it in the structure
}

// Function to deposit an amount into the account
void deposit(struct BankAccount *bankAccount)  // Pointer to structure to modify balance
{
    float updateBalance;  // Variable to store the deposit amount
    printf("Enter the amount to be deposited : ");  // Prompt to input the deposit amount
    scanf("%f",&updateBalance);  // Reading the deposit amount
    
    bankAccount->balance = updateBalance + bankAccount->balance;  // Adding deposit amount to the current balance
    printf("\nAmount deposit success!\n");  // Confirmation message for deposit
    
    printf("Available Balance : %.2f\n\n", bankAccount->balance);  // Displaying the updated balance
}

// Function to withdraw an amount from the account
void withdraw(struct BankAccount *bankAccount)  // Pointer to structure to modify balance
{
    float withdraw;  // Variable to store the withdrawal amount
    printf("Enter the amount to withdraw : ");  // Prompt to input the withdrawal amount
    scanf("%f",&withdraw);  // Reading the withdrawal amount
    
    if (withdraw > bankAccount->balance)  // Check if withdrawal exceeds available balance
    {
        printf("\nInsufficient Balance!!\n\n");  // If balance is insufficient, print error message
    }
    else
    {
         bankAccount->balance = bankAccount->balance - withdraw;  // Deduct withdrawal amount from the balance
         printf("Amount withdrawal success!\n");  // Confirmation message for successful withdrawal
         printf("Available Balance : %.2f\n\n", bankAccount->balance);  // Display the updated balance
    }
}

// Function to display account details
void accDetails(struct BankAccount accHolder)  // Structure passed by value (original data is not modified)
{
    printf("Name of the account holder : %s\n", accHolder.name);  // Print the name of the account holder
    printf("Account Number : %d\n", accHolder.AccNo);  // Print the account number
    printf("Account Balance : %.2f\n", accHolder.balance);  // Print the account balance
}

// Main function to execute the program
int main()
{
    struct BankAccount accHolder;  // Declare a variable of type BankAccount
    
    inputDetails(&accHolder);  // Call the function to input account details (pass by reference)
    deposit(&accHolder);  // Call the function to deposit an amount (pass by reference)
    withdraw(&accHolder);  // Call the function to withdraw an amount (pass by reference)
    accDetails(accHolder);  // Call the function to display the account details (pass by value)

    return 0;  // Return 0 to indicate successful execution of the program
}
