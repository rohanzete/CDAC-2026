
// 1. Dynamic Integer Storage
// Create a class Number that dynamically allocates memory for an integer using a pointer.
// Initialize the value using a constructor, implement a copy constructor to create a deep copy,
// and use a destructor to release the dynamically allocated memory.


#include <iostream>
using namespace std;

class Number
{
private:
    int *p;   // pointer to dynamically allocated integer

public:

    // Constructor
    Number(int x)
    {
        p = new int;     // allocate memory
        *p = x;          // store value in that memory
    }

    // Copy Constructor - Deep Copy
    Number(const Number &obj)
    {
        p = new int;       // create NEW memory
        *p = *(obj.p);     // copy the value, not the address
    }

    // Destructor
    ~Number()
    {
        delete p;          // release dynamically allocated memory
    }

    // Display function
    void display()
    {
        cout << "Value = " << *p << endl;
    }
};


/*

To dynamically allocate memory for one integer, use new.

Syntax
int *p = new int;

Meaning:

int *p     → p is a pointer
new int    → create memory for one integer

Then you can store a value:

*p = 10;

=================So the complete example is:========================

#include <iostream>
using namespace std;

int main()
{
    // Dynamically allocate memory for one integer
    int *p = new int;

    // Store 10 in that dynamically allocated memory
    *p = 10;

    cout << *p << endl;

    // Release the dynamically allocated memory
    delete p;

    return 0;
}

*/