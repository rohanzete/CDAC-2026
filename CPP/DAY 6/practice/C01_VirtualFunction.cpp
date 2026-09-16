    //-> A virtual function is simply a function declared with the keyword: virtual in the base class.


#include<iostream>
using namespace std;

class Animal
{
    public:
    // sound() is the virtual function
    virtual void sound()
    {
        cout << "animal makes sound" << endl;
    }
};

class Dog : public Animal
{
    void sound()
    {
        cout << "dog barks" << endl;
    }
};

int main()
{
    Animal *ptr;

    // if i not make base class function virtual then at that time the base class functionn get call for the derived class obj.
    // but there is one important condition: this happens 
    //when you access the derived object through a base-class pointer or reference.

    Dog d1;
    ptr = &d1;
    ptr -> sound();

    Animal a1;
    ptr = &a1;
    ptr -> sound();

}

/*===================================================================

What is a base-class pointer?

A base-class pointer is simply a pointer whose type is the base class.

Example:

class Animal
{
};

class Dog : public Animal
{
};

Here:

Animal* ptr;

ptr is a base-class pointer because its type is Animal*.

============= abstract class ===================

1. What is an abstract class?

An abstract class is a class that is not complete enough to create objects directly.

In C++, a class becomes abstract when it contains at least one pure virtual function.


Example:
---------

class Animal
{
public:
    virtual void sound() = 0;
};

Here:

virtual void sound() = 0;

is a pure virtual function.

===========================================

Pure Virtual Function in C++

A pure virtual function is a virtual function that says:

"Every derived class must provide its own implementation of this function."


*/