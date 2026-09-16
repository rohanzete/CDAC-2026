
// create the dynamic array 

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter the number of element you want " << endl;
    cin >> n;

    int *arr = new int[n]; // *arr is pointer
    // new int[n] - creates a dynamic array of n integers.
    // new - allocate or creates memory while the program is running.

    //insert element in an array
    cout << "enter the elements" << endl;
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];

    }

    // display the elements

    // for(int i =0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    //another technique to display the elements of array
    
    for(int i = 0; i < n; i++)
    {
        cout << *(arr + i) << " ";
        // *arr points to the first element of an array.
    }

     // Release the memory of the dynamic array
     // delete releases the memory when we are finished using it.
    delete [] arr;

    return 0;
}