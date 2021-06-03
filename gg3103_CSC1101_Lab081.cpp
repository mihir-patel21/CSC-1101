//==========================================================
//
// Title: Fever Fox V2
// Course:     CSC 1101
// Lab Number: 8 - 01
// Author:     Mihir Patel (gg3103)
// Date:       02/10/2020
// Description:
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
	const int(cw1) = 25;
	const int(cw2) = 8;
	
	// Declare Variables
	char DEGREE_SYMBOL = char(167);
	double tempF;
	double tempC;

	// Format Real Numbers
	cout << fixed << setprecision(2);

	// Show Application Header
	cout << "Welcome to Fever Fox V2" << endl;
	cout << "-----------------------" << endl;
	
	// Prompt to get Fahrenheit Temperature from user
	cout << "Enter temperature in Fahrenheit (-60 to 120) : ";
	cin >> tempF;

	// Convert Fahrenheit to Celsius
	tempC = (tempF - 32) * (5 / 9.);

	// If Else statement
	if (tempF >= -60 && tempF <= 120)
	{
		// Show Fahrenheit and Celsius
		cout << endl;
		cout << setw(cw1) << left << "Fahrenheit temperature: " << setw(cw2) << right << tempF << " " << DEGREE_SYMBOL << "F" << endl;
		cout << setw(cw1) << left << "Celsius temperature: " << setw(cw2) << right << tempC << " " << DEGREE_SYMBOL << "C" << endl;
	}
	else if (tempF < -60 || tempF > 120)
	{
		// Dispay Error
		cout << "Error: Fahrenheit Temperature " << tempF << " is outside the valid range of -60 to 120!" << endl << endl;
	}
	// Show Application Closer
	cout << "--------------------------------" << endl << endl;
	cout << "Thank you for using the service!" << endl << endl;
}