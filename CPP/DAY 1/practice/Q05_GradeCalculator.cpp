// Accept marks obtained by a student and display the grade using the following criteria: 90–100: A, 75–89: B,
// 60–74: C, 40–59: D, below 40: Fail. Validate marks outside 0–100.

#include <iostream>
using namespace std;

int main()
{
    float marks;
    cout << "enter the marks" << endl;
    cin >> marks;

    if(marks >= 90 && marks <= 100)
    {
        cout << "A";
    }
    else if(marks >= 75 &&  marks <= 89)
    {
        cout << "B";
    }
    else if(marks >= 60 && marks <= 74)
    {
        cout <<"C";
    }
    else 
    {
        cout << "invalid";
    }

    return 0;
}

// to find the leap year 

// A year is a leap year if:

// (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)
// Easy way to remember

// A year is leap year if:

// Divisible by 400 → Leap year ✅
// OR divisible by 4 AND NOT divisible by 100 → Leap year ✅
// Otherwise → Not a leap year ❌

// Examples:

// 2024 → divisible by 4, not by 100 → Leap year
// 1900 → divisible by 100 but not 400 → Not leap year
// 2000 → divisible by 400 → Leap year