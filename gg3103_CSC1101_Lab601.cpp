//==========================================================
//
// Title:      Longitude Lizards
// Course:     CSC 1101
// Lab Number: 6-01
// Author:     Mihir Patel (gg3103)
// Date:       01/30/2020
// Description:
//   The calculates and displays the distance between two points on a maps. 
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
	const int(cw) = 15;
	const int(cw1) = 15;

	// Declare variables
	double x1;
	double y1;
	double x2;
	double y2;
	double xdiff;
	double ydiff;
	double dist;

	// Show application header
	cout << "Welcome to Longitude Lizards!" << endl;
	cout << "-----------------------------" << endl;

	// Prompt to get inputs
	cout << "Enter X1: ";
	cin >> x1;
	cout << endl;

	cout << "Enter Y1: ";
	cin >> y1;
	cout << endl;

	cout << "Enter X2: ";
	cin >> x2;
	cout << endl;

	cout << "Enter Y2: ";
	cin >> y2;
	cout << endl;

	// Formula Building
	xdiff = (x2 - x1);
	ydiff = (y2 - y1);
	dist = sqrt((xdiff * xdiff) + (ydiff * ydiff));

	// Set the precision for the distance
	cout << fixed << setprecision(1);

	// Displaying outputs
	cout << setw(cw) << left << "X1: " << setw(cw1) << right << x1 << endl << endl;
	cout << setw(cw) << left << "Y1: " << setw(cw1) << right << y1 << endl << endl;
	cout << setw(cw) << left << "X2: " << setw(cw1) << right << x2 << endl << endl;
	cout << setw(cw) << left << "Y2: " << setw(cw1) << right << y2 << endl << endl;
	cout << setw(cw) << left << "Distance: " << setw(cw1) << right << dist << " meters" << endl << endl;

	// Show application closer
	cout << "End of Longitude Lizards!" << endl;
	cout << "Thank you for using the program!" << endl;

}