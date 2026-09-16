#include<iostream>
using namespace std;


// A template in C++ allows us to write one generic piece of code that works with different data types.
// function  template 
// One function can work with different data types.

template <typename T> // here T means any data type
T add(T a, T b)

// T → return type
// T a → first parameter
// T b → second parameter

{
    return a + b;
}

int main()
{
    cout << add(3,5) << endl;
    cout << add(3.4, 1.6) << endl;
    // cout << add('a', 'b');

}