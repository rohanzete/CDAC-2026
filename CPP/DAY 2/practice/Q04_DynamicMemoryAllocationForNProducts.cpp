
// 2. Write a menu-driven C++ program to dynamically allocate memory for the prices of N products in a
// store and perform the following operations using user-defined functions:
// 1. Accept and display the product prices.
// 2. Find and display the highest and lowest-priced products.
// 3. Calculate and display the total inventory value and average product price.
// 4. Count the number of products whose price is above and below the average price.
// 5. Search for a particular product price using linear search.
// 6. Apply a given discount percentage to all product prices and display the updated prices.
// 7. Exit the program



#include <iostream>
using namespace std;

// 1. Accept and display product prices
void acceptPrices(float prices[], int n)
{
    cout << "Enter prices of " << n << " products:\n";

    for (int i = 0; i < n; i++)
    {
        cout << "Product " << i + 1 << ": ";
        cin >> prices[i];
    }
}

void displayPrices(float prices[], int n)
{
    cout << "\nProduct Prices:\n";

    for (int i = 0; i < n; i++)
    {
        cout << "Product " << i + 1 << ": " << prices[i] << endl;
    }
}

// 2. Find highest and lowest price
void findHighestLowest(float prices[], int n)
{
    float highest = prices[0];
    float lowest = prices[0];

    for (int i = 1; i < n; i++)
    {
        if (prices[i] > highest)
            highest = prices[i];

        if (prices[i] < lowest)
            lowest = prices[i];
    }

    cout << "Highest Price: " << highest << endl;
    cout << "Lowest Price: " << lowest << endl;
}

// 3. Calculate total inventory value and average price
float calculateTotal(float prices[], int n)
{
    float total = 0;

    for (int i = 0; i < n; i++)
    {
        total = total + prices[i];
    }

    return total;
}

float calculateAverage(float prices[], int n)
{
    float total = calculateTotal(prices, n);

    return total / n;
}

// 4. Count products above and below average
void countAboveBelowAverage(float prices[], int n)
{
    float average = calculateAverage(prices, n);

    int above = 0;
    int below = 0;

    for (int i = 0; i < n; i++)
    {
        if (prices[i] > average)
            above++;

        else if (prices[i] < average)
            below++;
    }

    cout << "Average Price: " << average << endl;
    cout << "Products above average: " << above << endl;
    cout << "Products below average: " << below << endl;
}

// 5. Linear search
void searchPrice(float prices[], int n)
{
    float searchPrice;

    cout << "Enter price to search: ";
    cin >> searchPrice;

    bool found = false;

    for (int i = 0; i < n; i++)
    {
        if (prices[i] == searchPrice)
        {
            cout << "Price found at Product " << i + 1 << endl;
            found = true;
        }
    }

    if (!found)
    {
        cout << "Price not found.\n";
    }
}

// 6. Apply discount
void applyDiscount(float prices[], int n)
{
    float discount;

    cout << "Enter discount percentage: ";
    cin >> discount;

    for (int i = 0; i < n; i++)
    {
        prices[i] = prices[i] - (prices[i] * discount / 100);
    }

    cout << "Discount applied successfully.\n";

    displayPrices(prices, n);
}

int main()
{
    int n;
    int choice;

    cout << "Enter number of products: ";
    cin >> n;

    // Dynamic array
    float *prices = new float[n];

    // Accept prices initially
    acceptPrices(prices, n);

    do
    {
        cout << "\n========== MENU ==========\n";
        cout << "1. Display product prices\n";
        cout << "2. Find highest and lowest price\n";
        cout << "3. Calculate total inventory value and average price\n";
        cout << "4. Count products above and below average\n";
        cout << "5. Search for a product price\n";
        cout << "6. Apply discount\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                displayPrices(prices, n);
                break;

            case 2:
                findHighestLowest(prices, n);
                break;

            case 3:
            {
                float total = calculateTotal(prices, n);
                float average = calculateAverage(prices, n);

                cout << "Total Inventory Value: " << total << endl;
                cout << "Average Product Price: " << average << endl;
                break;
            }

            case 4:
                countAboveBelowAverage(prices, n);
                break;

            case 5:
                searchPrice(prices, n);
                break;

            case 6:
                applyDiscount(prices, n);
                break;

            case 7:
                cout << "Exiting program...\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }

    } while (choice != 7);

    // Free dynamically allocated memory
    delete[] prices;

    return 0;
}
