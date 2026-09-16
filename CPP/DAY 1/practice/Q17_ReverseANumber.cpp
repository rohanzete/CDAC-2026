
// Accept an integer and reverse its digits using a while loop.

#include <iostream>
using namespace std;

int main()
{
    int num ;
    cout << "enter the num ";
    cin >> num;
    int rev = 0;
    int num2 = num;

    while(num > 0)
    {
        int last_digit = num % 10;
        rev = rev * 10 + last_digit;
        num = num / 10;
    }
    cout << "the rev num is " << rev << endl;

    // to check the palindrome number

    if(num2 == rev)
    {
        cout << "palindrome";
    }
    else
    {
        cout << "not palindrome";
    }
    return 0;
}