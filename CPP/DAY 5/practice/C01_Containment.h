#include<iostream>
#include<string>
using namespace std;

class Engine
{
    public:
    int power;
    string origin;

    Engine(int pow, string ori) : power(pow), origin(ori)
    {
        cout << "Engine constructor" << endl;
    }

    void start()
    {
        cout << "engine is started" << endl;
    }
};

class Car 
{
    string carName;
    Engine e; // containment 

    public:
    void startCar()
    {
        e.start();
    }

    Car(string name, int pow, string ori) : carName(name), e(pow, ori) 
    {
        cout << "Car constructor" << endl;
    }

    void  display()
    {
        cout << "\npower : " << e.power << endl;
        cout << "origin : " << e.origin << endl;
        cout << "car name is : " << carName;
    }

};



/*====================================================

Containment means one class contains an object of another class as its data member.

In simple words:

An object of one class is kept inside another class.

It represents a HAS-A relationship.

For example:

A Car has an Engine
A Student has an Address
A Department has a Teacher
A Computer has a Processor


==============================

member initilization list

class Student
{
    int rollNo;
    string name;
    int age;

public:
    Student(int r, string n, int a)
        : rollNo(r), name(n), age(a)  //member initilization list
    {
    }
};

=====================================


*/