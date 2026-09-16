/*

3. Vehicle Registration System
Create a Vehicle class with registration number, owner name, and vehicle type. Use
constructors to initialize objects. Maintain a static member to count the total number of
registered vehicles. Store multiple vehicles in an array of objects and display all records.

*/

#include<iostream>
#include<string>
using namespace std;

class Vehicle
{
    private:
    int registration_num;
    string owner_name;
    string vehicle_types;
    static int countregvehicle;

    public:
    Vehicle()
    {
        this -> registration_num = 0;
        owner_name = "NA";
        this -> vehicle_types = "NA";
    }

    Vehicle(int regno, string ownername, string vehicletyp)
    {
        this -> registration_num = regno;
        owner_name = ownername;
        this -> vehicle_types = vehicletyp;
    }

    // accept
    void accept()
    {
        cout << "enter the registration number : ";
        cin >> registration_num;
        cout << "\nenter the owner name : ";
        cin >> owner_name;
        cout << "\nenter the vehicle type : ";
        cin >> vehicle_types;
        cout << "--------------------------------\n";
    }

    //display
    void display()
    {
        cout << "the registration number is : " << registration_num << endl;
        cout << "owner : " << owner_name << endl;
        cout << "vehicle type : " << vehicle_types << endl;

    }
};

int Vehicle :: countregvehicle = 0;

