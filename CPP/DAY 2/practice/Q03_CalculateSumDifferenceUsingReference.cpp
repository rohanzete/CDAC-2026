
// 3. Write a function using pass by reference to calculate the sum and difference of two numbers and return
// both results through reference parameters.

#include <iostream>
using namespace std;

void sum(int &aa, int &bb)
{
    cout << "the sum of numbers is " << aa + bb <<endl;
}

void diff(int &x, int &y)
{
    cout << "the result of subtraction is " << x - y << endl;
}
int main()
{
    int a = 10;
    int b = 20;

    sum(a,b);
    diff(a,b);
     
    return 0;
}