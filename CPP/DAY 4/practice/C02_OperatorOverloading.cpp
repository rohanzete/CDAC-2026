#include<iostream>
using namespace std;

class Number
{
    private:
    int x;

    public:
    Number(int a)
    {
        x = a;
    }

    Number operator+ (Number obj)
    {
        Number temp(0);
        temp.x = x + obj.x;
        return temp;

    }

    void display()
    {
        cout << "the value of x is " << x << endl;
    }

};

int main()
{

    Number n1(10);
    n1.display();

    Number n2(20);
    n2.display();

    Number n3 = n1 + n2;
    n3.display();

}













/*=============concept===================

Number operator+(Number obj)
{
    Number temp(0);

    temp.x = x + obj.x;

    return temp;
}

================================

What each part means
Number

→ Return type. The function returns a Number object.

operator+

→ We are overloading the + operator.

(Number obj)

→ The second object is received here.

temp.x = x + obj.x;

→ Add the values of the two objects.

return temp;

→ Return the result object.

Most important connection

When you write:

n3 = n1 + n2;

C++ understands it approximately as:

n3 = n1.operator+(n2);

So remember:

n1 → calling object (x)
n2 → parameter (obj)
n3 → result (temp)


Suppose we have:

Number n1(10);
Number n2(20);

Number n3 = n1 + n2;

Our operator function is:

Number operator+(Number obj)
{
    Number temp(0);

    temp.x = x + obj.x;

    return temp;
}
    
1. Number temp(0);

This creates a temporary Number object named temp.

Number temp(0);

Because our constructor is something like:

Number(int a)
{
    x = a;
}

So:

Number temp(0);

means:

temp.x = 0

We create temp because we need an object to store the addition result.

2. temp.x = x + obj.x;

Suppose:

n1.x = 10
n2.x = 20

When we write:

n1 + n2

n1 is the calling object and n2 becomes obj.

Therefore:

x

means:

n1.x

and:

obj.x

means:

n2.x

So:

temp.x = x + obj.x;

becomes:

temp.x = n1.x + n2.x;

Therefore:

temp.x = 10 + 20
       = 30

Now:

temp
 ↓
x = 30
3. return temp;

Now we return the temp object:

return temp;

Remember:

Number operator+(Number obj)

has return type Number.

So it must return a Number object.

We return:

temp
 ↓
Number object
x = 30

That returned object becomes n3:

Number n3 = n1 + n2;

So finally:

n1        n2        n3
 ↓         ↓         ↓
x=10      x=20      x=30
          +
          ↓
         30
In one simple sentence:
Number temp(0);       // create an object to store result
temp.x = x + obj.x;   // put addition result into temp
return temp;          // return that result object

Think of temp as a temporary box where we put 10 + 20 = 30, and then return that box.


================================

Step 6: Addition
temp.x = x + obj.x;

is effectively:

temp.x = n1.x + n2.x;

So:

temp.x = 10 + 20;

Now:

temp.x = 30

================================

Whole flow
n1(10) + n2(20)
       ↓
n1.operator+(n2)
       ↓
temp.x = 10 + 20
       ↓
temp.x = 30
       ↓
return temp
       ↓
n3.x = 30

================

x means n1.x because n1 is the calling object.
obj.x means n2.x because n2 was passed as obj.

So:

temp.x = x + obj.x;

is effectively:

temp.x = n1.x + n2.x;


*/