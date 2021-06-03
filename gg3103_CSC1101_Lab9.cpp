//==========================================================
//
// Title: Wayne State University Calcultor
// Course:     CSC 1101
// Lab Number: 9
// Author:     Mihir Patel (gg3103)
// Date:       02/11/2020
// Description:
//  Wayne State State University Grade Calcultor 
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

	// Declare Constants
	const int(cw1) = 15;
	const int(cw2) = 15;

	// Declare Variables
	int grade;

	// Application Header
	cout << "Welcome to Wayne State University Grade Calculator" << endl << endl;
	cout << "--------------------------------------------------" << endl << endl;


	// User input
	cout << "Enter grade percentage: ";
	cin >> grade;


	// If-Else Statement
	if (grade > 100 || grade < 0)
	{
		cout << "Error grade does not fall in parameters of university guidelines" << endl;
	}
	else if (grade >= 90)
	{
		cout << setw(cw1) << left << grade << setw(cw2) << right << "A" << endl << endl;
	}
	else if (grade >= 80)
	{
		cout << setw(cw1) << left << grade << setw(cw2) << right << "B" << endl << endl;
	}
	else if (grade >= 70)
	{
		cout << setw(cw1) << left << grade << setw(cw2) << right << "C" << endl << endl;
	}
	else if (grade >= 60)
	{
		cout << setw(cw1) << left << grade << setw(cw2) << right << "D" << endl << endl;
	}
	else
	{
		cout << setw(cw1) << left << grade << setw(cw2) << right << "F" << endl << endl;
	}

	// Application Closer
	cout << "----------------------------------------------------------" << endl;
	cout << "Thank you for using Wayne State University Grade Calcultor" << endl;
}