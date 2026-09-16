#include "Q02_DistanceComparisonandAddition.h";
#include<iostream>

int main()
{
    Distance d1(2,3);
    d1.display();

    Distance d2(3,2);
    d2.display();

    Distance d3 = d1 + d2;
    d3.display();

    cout << (d1 == d2); // 0 means false and 1 means true

}