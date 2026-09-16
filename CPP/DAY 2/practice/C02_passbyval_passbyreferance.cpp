#include <iostream>
using namespace std;

// Pass by reference means passing the original variable to a function, so the function can directly modify it.


void change(int &x) // x refers to the same variable as a.
{
    // Remember this one line:

    // int x → copy → Pass by Value
    // int &x → original → Pass by Reference
    
    x = 100;
}

int main()
{
    int a = 10;

    change(a);

    cout << a;

    return 0;
}

// Pass by Value means the function receives a COPY of the original variable's value.

// So, if the function changes it, the original variable does not change.