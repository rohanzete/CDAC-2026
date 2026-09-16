// Requirements:
// Create an abstract base class Employee with:
// name
// salary
// A constructor to initialize these values.
// A pure virtual function work().
// Create two derived classes:
// Manager
// Developer
// Override the work() function in both classes:
// Manager → "Manager manages the team"
// Developer → "Developer writes code"
// In main():
// Create one Manager object.
// Create one Developer object.

// Create a base-class pointer:

// Employee *ptr;
// Use the same ptr to point to both objects one at a time and call work().
// Display the employee's name and salary as well.

#include<iostream>
#include<string>
using namespace std;

//abstract class
class Employee
{
    protected:
    string name;
    double salary;

    public:
    Employee(string n, double sal)
    {
        name = n;
        salary = sal;
    }

    void display()
    {
        cout << "Name : " << name << endl;
        cout << "Salary : " << salary  << endl;
    }

    virtual void work() = 0;

};

class Manager : public Employee
{
    public:
    Manager(string n, double sal) : Employee(n,sal)
    {

    }
    void work() override 
    {
        cout << "manages the team" << endl;
    }
};

class Devloper : public Employee
{
    public:
    Devloper(string nam, double sal): Employee(nam,sal)
    {

    }

    void work() override 
    {
        cout << "Writes the code" << endl;
    }
};

int main()
{
    Manager m1("rohan", 200000);
    Devloper d1("akash",40000);

    Employee *ptr;

    ptr = &m1;
    ptr -> work();

    ptr = &d1;
    ptr -> work();

    m1.display();
    d1.display();

    


}