//==========================================================
//
// Title: Enumerated Data Types
// Course:     CSC 1101
// Lab Number: 19
// Author:     Mihir Patel (gg3103)
// Date:       03/31/2020
// Description:
// Uses enumerated data type
//
//==========================================================
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout"

enum t_cars { Ford, GMC, Tesla, Honda };

string carsToString(t_cars s)
{
	string str;
	switch (s)
	{
	case Ford:
		str = "Ford";
		break;
	case GMC:
		str = "GMC";
		break;
	case Tesla:
		str = "Tesla";
		break;
	case Honda:
		str = "Honda";
		break;
	}

}

t_cars stringToEnum(string str)
{
	// Declare Variables
	t_cars s;
	if (str == "Ford")
		s = Ford;
	else if (str == "GMC")
		s = GMC;
	else if (str == "Tesla")
		s = Tesla;
	else if (str == "Honda")
		s = Honda;
	else
		cout << "Program is Case Senstive" << endl;
	return s;

}

t_cars intToString(int index)
{
	if (index < 1 || index > 3)
		cout << "Please Place a number between 1 and 3. " << endl;
	else
		return(t_cars)index;


}

int main()
{
	// Declare Variables
	t_cars make;
	string str;
	int carIndex;
	int index;
	// Show Application Header
	cout << "Welcome to Enumerated Numbers Time!" << endl;
	cout << "-----------------------------------" << endl << endl;

	cout << "Input a string for the car Ford, GMC, Tesla, Honda: " << endl;
	cin >> str;
	make = stringToEnum(str);
	while (str != "Ford" || str != "Tesla" || str != "GMC" || str != "Honda")
	{
		cout << "Error: Input is case senstive!" << endl;
		cout << "Input a string for the car Ford, GMC, Tesla, Honda: " << endl;
		cin >> str;
	}

	cout << "Conversion from Index to Car" << endl;
	cout << "Enter a car index: " << endl;
	cin >> index;
	make = intToString(index);
	cout << "Car: " << intToString(make) << " (" << make << ")" << endl;
}