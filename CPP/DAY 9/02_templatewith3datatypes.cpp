
// template with different data types 

#include <iostream>
using namespace std;

template <typename T1, typename T2, typename T3>
void display(T1 a, T2 b, T3 c)
{
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;

}

int main()
{
    display(10, 20.50, "Rohan");
}