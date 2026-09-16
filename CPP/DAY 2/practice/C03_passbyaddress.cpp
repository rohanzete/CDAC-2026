
// Pass by Address / pointer

// Pass by Address means we pass the memory address of the original variable to the function using a pointer.
// Because the function receives the address, it can access and modify the original variable.

#include <iostream>
using namespace std;

void change(int *x) //x stores the address of a.
{
    *x = 20; // Go to that address and change the value stored there to 20.
    // * - gives the val stored at that memory address.
    // & - gives the memory address of variable
    // *p Means: Go to the address stored in p and access the value.
}

int main()
{
    int a = 10;

    change(&a); 
    // &a means: Give me the memory address of a.

    cout << a;

    return 0;
}

/*

1. Pass by Reference

You pass the variable directly:

void change(int &x)   // x is another name for a.
{
    x = 20;
}

int a = 10;
change(a);

------------------------------------------------------

2. Pass by Address

You pass the address of the variable:

void change(int *x)
{
    *x = 20;
}

int a = 10;
change(&a);

----------------------------------------------------------


*/