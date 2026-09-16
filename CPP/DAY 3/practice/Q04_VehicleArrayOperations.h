#include"Q04_VehicleRegistrationSystem.h";

class ArrayOperations
{
    public:
    static void allocate(Vehicle *&arr, int &noe)
    {
        cout << "enter the no of elements : "<<endl;
        cin >> noe;

        arr = new Vehicle[noe]; // dynamic array 

    }
    
    static void acceptDetails(Vehicle *&arr, int &noe)
    {
        for(int i = 0; i < noe; i++)
        {
            arr[i].accept();
        }
    }

    static void displayDetails(Vehicle *&arr, int & noe)
    {
        for(int i = 0; i < noe; i++)
        {
            arr[i].display();
        }
    }

    static void deallocate(Vehicle*& arr) {
		delete[] arr;

	}
};


/*=====================================================================================

int*& p

means:

We are passing the pointer by reference, so the function can change the original pointer.

For example:

void create(int*& p)
{
    p = new int;
}

Here p from main() gets changed to point to the newly allocated memory.

In short:

int* → pointer
int*& → reference of pointer → can change the original pointer.


=================================================================================================

In your array case:

Product*& sarr

means we pass the pointer to the array by reference, so the function can make sarr point to a newly created array.

Small example
void allocate(Product*& sarr)
{
    sarr = new Product[3];
}

In main():

Product* sarr = nullptr;

allocate(sarr);
What happens?

Before:

sarr → NULL

Inside allocate():

sarr = new Product[3];

After:

sarr
 ↓
+----------+----------+----------+
| Product  | Product  | Product  |
|    0     |    1     |    2     |
+----------+----------+----------+

Now you can use:

sarr[0].accept();
sarr[1].accept();
sarr[2].accept();

Why *&?
Because allocate() needs to change sarr itself from:
NULL
to:
address of Product array

So:

Product*& sarr = pass the array pointer by reference so the function can make it point to the new array.


*/