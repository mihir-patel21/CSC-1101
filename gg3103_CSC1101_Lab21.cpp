//==========================================================
//
// Title: Input Data to Array
// Course:     CSC 1101
// Lab Number: 21
// Author:     Mihir Patel (gg3103)
// Date:       04/7/2020
// Description:
// 
// 
//
//==========================================================
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout"

// Declare Global Variables

string name[];
int age[];
double gpa[];

void printData(string name[], int age[], double gpa[])
{
	// For Loop for Displaying outputs
	for (int i = 0; i < 3; i++)
	{
		cout << "Person: " << i << endl;
		cout << "Name: " << name[i] << endl;
		cout << "Age: " << age[i] << endl;
		cout << "GPA: " << gpa[i] << endl;
		cout << endl;
	}
	
}

int main()
{
	// Declare variables
	string name[3];
	int age[3];
	double gpa[3];

	// Application Header
	cout << "Welcome to Data to Array!" << endl;
	cout << "-------------------------" << endl;
	
	// For Loop for user inputs
	for (int i = 0; i < 3; i++)
	{
		cout << "Enter Name: ";
		cin >> name[i];
		cout << "Enter Age: ";
		cin >> age[i];
		cout << "Enter GPA: ";
		cin >> gpa[i];
	}

	// Displace Data
	printData(name, age, gpa);

	// Application closer
	cout << "----------" << endl;
	cout << "Thank you!" << endl;
}