//==========================================================
//
// Title: Body Mass Index (BMI)
// Course:     CSC 1101
// Lab Number: 7
// Author:     Mihir Patel (gg3103)
// Date:       02/04/2020
// Description:
// Calculate the body mass index once a user inputs the items asked.
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
	const int(cw1) = 15;

	// Declare the variables
	double weight;
	double height;
	double BMI;
	string name;
	
	// Set application header
	cout << "Welcome to the BMI Calculator!" << endl;
	cout << "------------------------------" << endl;
	
	// Set presision for decimial
	cout << fixed << setprecision(4);


	//Define the User input
	cout << "Enter your name: ";
	cin >> name;
	cout << endl;

	cout << "Enter Weight (pounds): " ;
	cin >> weight;
	cout << endl;

	cout << "Enter Height(inches):  ";
	cin >> height;
	cout << endl;

	// Formula for BMI
	BMI = (weight / (height * height));
	
	// Display outputs;
	cout << setw(cw) << "Name: " << left << setw(cw1) << name << right << endl << endl;
	cout << setw(cw) << "Weight: " << left << setw(cw1) << weight << right << endl << endl;
	cout << setw(cw) << "Height: " << left << setw(cw1) << height << right << endl << endl;
	cout << setw(cw) << "BMI: " << left << setw(cw1) << BMI << right << endl << endl;

	// Application closer
	cout << "Thank you for using the BMI Calcultor!" << endl;
	cout << "--------------------------------------" << endl;




}