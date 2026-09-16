#include<iostream>
using namespace std;
// C01 here C stands for concept
// Q stands for question
int main()
{
    // What is a pointer?

    // A pointer is a variable that stores the address of another variable.

    int x = 10;

    int *p; // int pointer

    // int *p = &x;
    
    p = &x; //Store the address of x inside p.

    //  p  → address
    // *p → value at that address

    //------------------------------------------------------

    int a = 100;
    int  *ptr = &a;

    cout << a << endl;
    cout << ptr << endl;
    cout  << *ptr << endl;

    *ptr = 500;
    cout << *ptr << endl;
    cout << "the val of a is " << a <<endl;

}