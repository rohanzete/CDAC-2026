//program to accept a number and display the square

#include<iostream>
using namespace std;

int findSquare(int num)
{
	return num * num;
}

int main()
{
	int num, square;
	cout << "\n enter the number:";
	cin >> num;
	square = findSquare(num);
	cout << "\n the square of " << num << " is"
		<< square;
	return 0;

}