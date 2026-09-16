/*
// dyanmaic single variable 

Suppose we want to dynamically create memory for one integer.

We write:
int *p = new int;
Let's break this down.

int *p

This creates a pointer variable p.

p

The pointer will store an address.

new int

This tells C++:

"Create memory for one integer."

int *p = new int;
means:
Create memory for one integer and store its address in p.

Putting a value into that memory
We use *:
*p = 10;

*/


//for dynamic array 

#include <iostream>
using namespace std;

int main()
{
    // We don't know the array size beforehand.
    // So, we take the size from the user at runtime.
    int n;

    cout << "Enter the size of array: ";
    cin >> n;


    // "new int[n]" dynamically creates memory
    // for n integers at runtime.
    //
    // Example:
    // If n = 5
    // then new int[5] creates space for 5 integers.
    //
    // "arr" is a pointer that stores the address
    // of the first element of this dynamically created array.

    int *arr = new int[n];


    // Now we can use "arr" like a normal array.
    //
    // arr[0] → first element
    // arr[1] → second element
    // arr[2] → third element
    // etc.

    cout << "Enter " << n << " numbers:" << endl;

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }


    // Display the elements of the dynamic array.

    cout << "Array elements: ";

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }


    // We created the array using "new[]",
    // so we must release the memory using "delete[]".
    //
    // delete[] arr means:
    // "Release the memory occupied by this dynamic array."

    delete[] arr;


    return 0;
}