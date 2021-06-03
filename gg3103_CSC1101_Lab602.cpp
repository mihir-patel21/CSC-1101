//==========================================================
//
// Title:      Fever Foxes
// Course:     CSC 1101
// Lab Number: 6-02
// Author:     Mihir Patel (gg3103)
// Date:       01/30/2020
// Description:
//   Calculate the displays the Celsius equivalent of a Fahrenheit temperature. 
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
	// Declare the Constants
	const int(cw) = 24;
	const int(cw1) = 6;

	// Declare the Variables
	double F;
	double C;

	// Show application Header
	cout << "Welcome to the Fever Foxes" << endl;
	cout << "--------------------------" << endl;

	// User input Fahrenheit
	cout << "Enter temperature in Fahrenheit: ";
	cin >> F;
	cout << endl;
	
	// Forumla converstion
	C = (F - 32) * 5 / 9;

	// Set Precision
	cout << fixed << setprecision(2);

	// Output showing
	cout << setw(cw) << "Fahrenheit temperature: " << left << setw(cw1) << F << " F" << right << endl << endl;
	cout << setw(cw) << "Celsius temperature: " << left << setw(cw1) << C << " C" << right << endl << endl;

	// Show Application Ender
	cout << "End of Fever Foxes" << endl;
	cout << "Thank you for using this service!" << endl;


}