
// 1. Write a function that accepts the addresses of two integers and swaps their values using pointers

#include <iostream>
using namespace std;

void swap(int *n1, int *n2)
{
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

int main()
{
    int num1 = 10;
    int num2 = 20;

    swap(&num1, &num2);

    cout << "the val of num 1 is : " << num1 << endl;
    cout << "the val of num 2 is : " << num2;

    return 0;
}