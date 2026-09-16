
// Accept an integer and determine whether it is a prime number using a loop.
/*
What is a prime number?

A prime number has exactly 2 factors:
-1
-itself

Examples: 2, 3, 5, 7, 11, 13

A factor of a number is a number that can completely divide it, meaning the remainder is 0.

For example, factors of 12:

12 % 1 = 0  → 1 is a factor
12 % 2 = 0  → 2 is a factor
12 % 3 = 0  → 3 is a factor
12 % 4 = 0  → 4 is a factor
12 % 5 ≠ 0  → 5 is NOT a factor
12 % 6 = 0  → 6 is a factor
12 % 12 = 0 → 12 is a factor

So:

Factors of 12 = 1, 2, 3, 4, 6, 12

*/

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "enter the num";
    cin >> num;
    int cnt = 0;

    for(int i =2; i <= num; i++)
    {
        if(num % i == 0)
        {
            cnt++;
        }
    }
    if(cnt == 1)
    {
        cout << "\nthe number is prime\n";
    }
    else 
    {
        cout << "\n the number is not prime\n";
    }
    return 0;
}