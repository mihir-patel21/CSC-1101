//==========================================================
//
// Title: Breakfast Buddies
// Course:     CSC 1101
// Lab Number: 11
// Author:     Mihir Patel (gg3103)
// Date:       02/25/2020
// Description:
//  Creates a program where the user types a story book. 
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
	// Declare variables
	string(book);
	string(line1);
	int LineCount;
	LineCount = 0;


	// Application Header
	cout << "Welcome to the Story Book!" << endl;
	cout << "--------------------------" << endl;

	// Ask user for book name

	cout << "Input a name for your book" << endl;
	getline(cin,book);

	// Sentinel Loop
	cout << "Input line 1 text: " << endl;
	cin >> line1;
	cout << endl;

	while (line1 != "The End.") 
	{
		cout << "Input line " << LineCount << " text :" << endl;
		getline(cin, line1);
		cout << endl;
		++LineCount;

	}

	// Application Closer
	cout << "-------------------------------" << endl;
	cout << "Thank your for using Story Book" << endl;








}