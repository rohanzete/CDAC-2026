
#include <iostream>
using  namespace std;

class student
{
    public:
    int roll;

    student()
    {
        cout << "default constructor" << endl;
    }

    student(int rollno)
    {
        roll = rollno;
    }

    // copy constructor
    student(const student &s)
    {
        roll = s.roll;
    }

};

int main()
{
    student s1;
    s1.roll = 101;
    cout << "rollno : " << s1.roll <<endl;

    // copy constructor
    student s2 = s1; // compiler-provided copy constructor.
    cout << "rollno of s2 is " << s2.roll << endl;


    student stu1(105);

    //copy constructor
    student stu2(stu1);
    cout << "the roll no of stu2 is : " << stu2.roll;

}

/*=====================================================================

Compiler-Generated Copy Constructor

C++ automatically creates the copy constructor if you don't write one.

Student s2 = s1;

==========================================================================

User-Defined Copy Constructor

You write the copy constructor yourself.

Student(const Student &s)
{
    roll = s.roll;
}


Remember:
Compiler-generated → C++ writes it
User-defined → You write it

*/