
#include "Q04_VehicleArrayOperations.h";

int main()
{
    int noe;
    Vehicle *arr;

    ArrayOperations :: allocate(arr,noe);
    ArrayOperations :: acceptDetails(arr,noe);
    ArrayOperations :: displayDetails(arr,noe);
    ArrayOperations :: deallocate(arr);

}







/*
============assignment question=================

1. Bank Account
Create a BankAccount class with account number, customer name, and balance. Use a
constructor to initialize account details. Implement member functions to deposit, withdraw,
and display the balance. Create multiple account objects using an array of objects.

2. Book Management
Create a Book class with book ID, title, author, and price. Use a constructor to initialize the
data members. Store details of multiple books in an array of objects and search for a book
using its ID.

4. Library Fine Calculator
Create a LibraryMember class with member ID, name, and number of overdue days. Use a
constructor to initialize the data. Write a member function to calculate the fine. Use a static
data member to store the fine rate per day and a static member function to modify or
display the fine rate.

*/