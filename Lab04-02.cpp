//==========================================================
//
// Title:      Trip Trolls
// Course:     CSC 1101
// Lab Number: Lab 4-2
// Author:     Mihir Patel (gg3103)
// Date:       01/24/2020
// Description:
//   This application will estimate gas cost to drive from one city to another.
//
//==========================================================
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout"

int main()
{
  
  // Declare constants
    const int(cw) = 21;
    const int(cw2) = 20;

  // Declare variables
    string city1 = "Fort Lauderdale";
    string city2 = "Fairbanks";
    int distance = 4824;
    double MPG = 8;
    double GasPrice = 3.58;
    double GasCost;

  // Format real numbers
    cout << fixed << setprecision(2);

  // Show application header
    cout << "Welcome to Trip Trolls" << endl;
    cout << "----------------------" << endl;

  // Calculate cost
    GasCost = (distance / MPG) * GasPrice;

  // Show outputs
    cout << setw(cw) << left << "From City:" << setw(cw2) << right << city1 << endl << endl;
    cout << setw(cw) << left << "To City:" << setw(cw2) << right << city2 << endl << endl;
    cout << setw(cw) << left << "Distance (miles):" << setw(cw2) << right << distance << endl << endl;
    cout << setw(cw) << left << "Miles per Gallon:" << setw(cw2) << right << MPG << endl << endl;
    cout << setw(cw) << left << "Price per Gallon ($):" << setw(cw2) << right << GasPrice << endl << endl;
    cout << setw(cw) << left << "Gas Cost ($):" << setw(cw2) << right << GasCost << endl << endl;
     
  // Show application close
    cout << "End of Trip Trolls " << endl;
    cout << "Thank you for using this service! " << endl; 

}