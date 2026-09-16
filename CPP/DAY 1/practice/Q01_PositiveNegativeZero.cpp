
// 1.Write a program to accept an integer and determine whether it is positive, negative, or zero using if-else.


#include<iostream>
using namespace std;

int main()
{
    int num;
    cout << "enter the value " << endl;
    cin >> num;

    if(num >0)
    {
        cout << "the num is positive" << endl;
    }
    else if(num < 0)
    {
        cout << "the num is negative" << endl;
    }
    else{
        cout << "the num is zero" << endl;
    }
}