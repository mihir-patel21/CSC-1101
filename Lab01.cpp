//==========================================================
//
// Title:      Winter Wonders
// Course:     CSC 1101
// Lab Number: 1
// Author:     Mihir Patel (gg3103)
// Date:       01/14/2020
// Description:
//   You've been hired by Winter Wonders to complete a C++ console applications
// calculates total and average snowfall. 
//
//==========================================================
// These are the pre-processor directives that are used to read from windows. The includes are used
// to show what libraries need to be pulled from windows. 
#include <conio.h> // For function getch()
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout"

// This is the beginning of the main function. It runs everything after this
// line of code. 
int main()
{
	// These are the integers that are used as the variables for each month. 
	int month1 = 2; 
	int month2 = 6;	
	int month3 = 5; 
	// This holds the variables to a certain amount of bits. 
	double total; 
	double average;
	// This is where user inputs the their name. 
	string name;
	// These are the formulas. 
	total = month1 + month2 + month3;
	average = total / 3;
	// User is asked to input their name. 
	cout << "Enter your Name :"; 
	cin >> name;
	// This is the user is displayed all of the variables. 
	cout << "Snowfall amounts" << endl;  
	cout << "Month 1 (inches):       " << month1 << endl; 
	cout << "Month 2 (inches):       " << month2 << endl;
	cout << "Month 3 (inches):       " << month3 << endl; 
	cout << "Total (inches):         " << total << endl; 
	cout << "Average (inches/month): " << average << endl;
	cout << "Press any key to exit ..." << endl;
		_getch();

}



