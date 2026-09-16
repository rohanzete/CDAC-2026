// 2. Distance Comparison and Addition
// Create a Distance class with feet and inches as data members. Use constructors to initialize
// Distance objects. Overload the '+' operator to add two Distance objects and overload the '=='
// operator to compare whether two Distance objects are equal. Display the appropriate results.

#include<iostream>
using namespace std;

class Distance
{
    private:
    int feet;
    int inches;

    public:
    Distance()
    {
        feet = 0;
        inches = 0;
    }

    Distance(int f, int i)
    {
        feet = f;
        inches = i;
    }

    // overload the + 
    Distance operator+ (Distance obj)
    {
        Distance temp(0,0);
        temp.feet = feet + obj.feet; // here feet means d1.feet ( It internally calls : d1.operator+(d2))
        temp.inches = inches + obj.inches;
        return temp;

    }

    // overload the "==" operator
    bool operator== (Distance obj)
    {
        return(feet == obj.feet && inches == obj.inches);
    }


    // display 
    void display()
    {
        cout << feet <<" feet " << inches <<" inches" << endl;
    }

};







/*=========================================

1. Complex Number Addition
Create a Complex class with real and imaginary data members. Initialize the complex
numbers using appropriate constructors. Overload the '+' operator to add two Complex
objects and display the resulting complex number.


#include <iostream>
using namespace std;

class Complex
{
private:
    int real;
    int imaginary;

public:

    // Parameterized constructor
    Complex(int r, int i)
    {
        real = r;
        imaginary = i;
    }

    // Overloading + operator
    Complex operator+(Complex obj)
    {
        Complex temp(0, 0);

        // real      → c1.real → 10
        // obj.real  → c2.real → 20
        // temp.real → 30

        temp.real = real + obj.real;
        temp.imaginary = imaginary + obj.imaginary;

        return temp;
    }

    // Display function
    void display()
    {
        cout << real << " + " << imaginary << "i" << endl;
    }
};

int main()
{
    Complex c1(10, 20);
    Complex c2(5, 15);

    // Add two Complex objects
    Complex c3 = c1 + c2;

    // Display result
    c3.display();

    return 0;
}

*/