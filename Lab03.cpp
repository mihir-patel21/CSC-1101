// Title: Calulate the falling object
// Course: CSC 1101
// Lab Number: 3
// Author: Mihir Patel (gg3103)
// Date: 01/21/2020
// Description:
// Calculate the velcoity of a falling object 
//(disregarding wind resistence)
// These are the preprosser directives that are used to find
// what libraries to be used
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout"

int main()
{
    // Show application header
    cout << "Welcome to the Velocity Calculator! " << endl;
    // Declare double variable g with an initial value of -9.81
    double g;
    g = -9.81;


    // Declare double variable Velocity, t
    double velocity;
    double t;


    // Take time "t" input from user
    cout << "Enter time in seconds" << endl;
    cin >> t;

    //calculate the velocity of abject
    velocity = g * t;

    // velocity= <velocity of an object> in m per sec 
    cout << "Velocity is " << velocity << "m/s";

    // Show application close
    cout << "\nEnd of Velocity Calculator!" << endl;

}
