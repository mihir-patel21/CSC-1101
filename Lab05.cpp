//==========================================================
//
// Title:      Average Speed of Cars
// Course:     CSC 1101
// Lab Number: 5
// Author:     Mihir Patel
// Date:       01/28/2020
// Description:
//  This application analyzes five speeds recorded from a highway senor.
// Calulates the differnce between the car speeds and the speed limit.
// 
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
	// Declare the constants
	const int(cw) = 15;
	const int(cw2) = 15;
	const int(cw3) = 35;

	// Declare the variable
	double carSpeed1 = 58;
	double carSpeed2 = 72;
	double carSpeed3 = 65;
	double carSpeed4 = 70;
	double carSpeed5 = 81;
	double SL = 70;
	double car1;
	double car2;
	double car3;
	double car4;
	double car5;
	double average;
	double averageSL;
	
	// Show headers 
	cout << "Welcome to Speed Anaylzation" << endl;
	cout << "----------------------------" << endl;

	// Calulate the difference
	car1 = carSpeed1 - SL;
	car2 = carSpeed2 - SL;
	car3 = carSpeed3 - SL;
	car4 = carSpeed4 - SL;
	car5 = carSpeed5 - SL;

	// Calulate the Average Speed
	average = (carSpeed1 + carSpeed2 + carSpeed3 + carSpeed4 + carSpeed5) / 5;
	averageSL = (car1 + car2 + car3 + car4 + car5) / 5;
	
	// Display the Outputs
	cout << setw(cw) << left << "Car Speed 1: " << setw(cw2) << right << car1 << " mph" << endl << endl;
	cout << setw(cw) << left << "Car Speed 2: " << setw(cw2) << right << car2 << " mph" << endl << endl;
	cout << setw(cw) << left << "Car Speed 3: " << setw(cw2) << right << car3 << " mph" << endl << endl;
	cout << setw(cw) << left << "Car Speed 4: " << setw(cw2) << right << car4 << " mph" << endl << endl;
	cout << setw(cw) << left << "Car Speed 5: " << setw(cw2) << right << car5 << " mph" << endl << endl;
	cout << setw(cw) << left << "Average Speed is:" << setw(cw2) << right << average << " mph" << endl << endl;
	cout << setw(cw3) << left << "Average Difference from speed limit:" << setw(cw2) << right << averageSL << endl << endl;


	//Closing Header
	cout << "---------------------" << endl;
	cout << "End of Speed Analyzer" << endl;
	
}