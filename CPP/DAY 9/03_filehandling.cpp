#include<iostream>
#include<fstream>
using namespace std;

// fstream provides classes for working with files.

// There are three important classes:

// ofstream used to Write data to a file
// ifstream	used to Read data from a file
// fstream	Read + Write

int main()
{
    //offstream is used for writting
    //file is the object name
    ofstream file("03_txt.txt");


    file << "Name: Rohan" << endl;
    file << "Age: " << 22 << endl;
    file << "Marks: " << 85.5 << endl;


    file.close();// it is used to close the file
    

}

