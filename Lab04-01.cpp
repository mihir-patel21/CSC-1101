//==========================================================
//
// Title:      Orbital Oafs
// Course:     CSC 1101
// Lab Number: 4-01
// Author:     Mihir Patel
// Date:       01/23/2020
// Description:
//   This application that takes a real - number radius in centiments,
// and calculates the following values. 
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
    const double pi = 3.14159;
    const int(cw) = 15;
    const int(cw2) = 10;


  // Declare variables
    double radius = 7.53;
    double volume;
    double cirum;
    double area;
    

  // Format real numbers
    cout << fixed << setprecision(3);

  // Show application header
    cout << "Welcome to Orbital Oafs" << endl;
    cout << "-----------------------" << endl;
    
  // Calculate volume, circumference, and surface area
    volume = (4 / 3) * pi * (radius * radius * radius);
    cirum = 2 * pi * radius;
    area = 4 * pi * (radius * radius);
    


  // Show radius and outputs
    cout << setw(cw) << left << "Radius:" << setw(cw2) << right << radius << " cm" << endl << endl;
    cout << setw(cw) << left << "Volume:" << setw(cw2) << right << volume << " cm^3" << endl << endl;
    cout << setw(cw) << left << "Circumference:" << setw(cw2) << right << cirum << " cm" << endl << endl;
    cout << setw(cw) << left << "Area:" << setw(cw2) << right << area << " cm^2" << endl << endl;


  // Show application close
    cout << "End of Orbital Oafs" << endl;

}
