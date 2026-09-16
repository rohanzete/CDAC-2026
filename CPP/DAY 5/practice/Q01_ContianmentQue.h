/*

Assignment Problem Statement
Develop a C++ program for an Online Shopping Order Management System to demonstrate
containment of objects.
Requirements
• Create a class Customer with data members such as customerId, customerName, and
contactNumber.
• Provide suitable constructors and member functions to initialize and display customer
details.
• Create a class Product with data members such as productId, productName, price, and
quantity.
• Provide suitable constructors and member functions to initialize and display product details.
• Create a class Order that contains objects of both Customer and Product classes.
• The Order class should also store an orderId.
• Use constructors to initialize the contained Customer and Product objects.
• Calculate and display the total order amount based on product price and quantity.
• Create at least three Order objects and display complete order details.
Expected Output Details
For every order, display the Order ID, Customer details, Product details, Quantity, and Total
Amount.

*/

// i have not attempted this if get time do attempt it 

#include <iostream>
#include <string>
using namespace std;


// ---------------- CUSTOMER CLASS ----------------

class Customer
{
    int customerId;
    string customerName;
    string contactNumber;

public:

    // Parameterized constructor
    Customer(int id, string name, string contact)
        : customerId(id), customerName(name), contactNumber(contact)
    {
    }

    void displayCustomer()
    {
        cout << "Customer ID      : " << customerId << endl;
        cout << "Customer Name    : " << customerName << endl;
        cout << "Contact Number   : " << contactNumber << endl;
    }
};


// ---------------- PRODUCT CLASS ----------------

class Product
{
    int productId;
    string productName;
    double price;
    int quantity;

public:

    // Parameterized constructor
    Product(int id, string name, double p, int q)
        : productId(id), productName(name), price(p), quantity(q)
    {
    }

    double getTotalAmount()
    {
        return price * quantity;
    }

    void displayProduct()
    {
        cout << "Product ID       : " << productId << endl;
        cout << "Product Name     : " << productName << endl;
        cout << "Price            : " << price << endl;
        cout << "Quantity         : " << quantity << endl;
    }
};


// ---------------- ORDER CLASS ----------------

class Order
{
    int orderId;

    // Containment
    Customer customer;
    Product product;

public:

    // Parameterized constructor
    Order(int oid,
          int cid, string cname, string contact,
          int pid, string pname, double price, int quantity)
        
        : orderId(oid),
          customer(cid, cname, contact),
          product(pid, pname, price, quantity)
    {
    }

    void displayOrder()
    {
        cout << "\n========== ORDER DETAILS ==========\n";

        cout << "Order ID         : " << orderId << endl;

        cout << "\n--- Customer Details ---\n";
        customer.displayCustomer();

        cout << "\n--- Product Details ---\n";
        product.displayProduct();

        cout << "Total Amount     : "
             << product.getTotalAmount() << endl;
    }
};


int main()
{
    Order o1(
        1001,
        1, "Rohan", "9876543210",
        101, "Laptop", 50000, 2
    );

    Order o2(
        1002,
        2, "Rahul", "9876501234",
        102, "Mouse", 800, 3
    );

    Order o3(
        1003,
        3, "Amit", "9988776655",
        103, "Keyboard", 1500, 2
    );

    o1.displayOrder();
    o2.displayOrder();
    o3.displayOrder();

    return 0;
}