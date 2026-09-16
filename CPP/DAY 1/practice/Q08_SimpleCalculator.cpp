
// 8. Simple Calculator
// Create a menu-driven calculator using switch-case. The user should select addition, subtraction, multiplication,
// division, or modulus and enter two numbers.

#include <iostream>
using namespace std;

int main()
{
    char ch;
     int choice;
     int a,b;
        
    cout << "enter the numbers : ";
    cin >> a >> b;

    do
    {
       
        cout << "1.addition  2.subtraction  3.multiplication  4.division  5.modulus " << endl;
        cout << "enter the choice : "<<endl;
        cin >> choice;
        
    switch(choice)
    {
        case 1:
        cout << a + b;
        break;

        case 2:
        cout << a - b;
        break;

        case 3:
        cout << a * b;
        break;

        case 4:
        cout << a / b;
        break;

        case 5:
        cout << a % b;
        break;

        default:
        cout << "enter the valid choice" << endl;

    }

        cout << "\ndo u want to continue { press Y to continue and other key to exit } : ";
        cin >> ch;
        
    }while(ch == 'Y' || ch == 'y');

    
    return 0;
}