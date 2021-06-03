//==========================================================
//
// Title: Character Koalas
// Course:     CSC 1101
// Lab Number: 8 - 02
// Author:     Mihir Patel (gg3103)
// Date:       02/10/2020
// Description:
// This application analyzes the types of characters in a string entered by the user.
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
	const int(cw1) = 23;
	const int(cw2) = 23;

	//Delare the Variables
	string word;

	//Set Real Numbers
	cout << fixed << setprecision(2);

	// Application Header
	cout << "Welcome to Character Koalas!" << endl;
	cout << "----------------------------" << endl;
	
	// User inputs characters
	cout << "Enter a string with at least ten characters: " << endl;
	getline(cin, word);
	cout << endl;

	// Error using If ELSE
	if (word.size() <= 10)
	{
		cout << "Error: string '" << word << "' does not have at least ten characters." << endl;
		cout << endl;
	}

	else if (word.size() >= 10);
	{
		cout << "Output key: zero-false; non-zero-true" << endl;

		// Outputs
		cout << setw(cw1) << left << "Characater at Index 2: " << setw(cw2) << right << (word.at(2)) << endl;
		cout << setw(cw1) << left << "-Upper?" << setw(cw2) << right << isupper(word.at(2)) << endl;
		cout << setw(cw1) << left << "-Digit?" << setw(cw2) << right << isdigit(word.at(2)) << endl;
		cout << setw(cw1) << left << "-Punct?" << setw(cw2) << right << ispunct(word.at(2)) << endl;

		cout << setw(cw1) << left << "Characater at Index 4: " << setw(cw2) << right << (word.at(4)) << endl;
		cout << setw(cw1) << left << "-Upper?" << setw(cw2) << right << isupper(word.at(4)) << endl;
		cout << setw(cw1) << left << "-Digit?" << setw(cw2) << right << isdigit(word.at(4)) << endl;
		cout << setw(cw1) << left << "-Punct?" << setw(cw2) << right << ispunct(word.at(4)) << endl;

		cout << setw(cw1) << left << "Characater at Index 6: " << setw(cw2) << right << (word.at(6)) << endl;
		cout << setw(cw1) << left << "-Upper?" << setw(cw2) << right << isupper(word.at(6)) << endl;
		cout << setw(cw1) << left << "-Digit?" << setw(cw2) << right << isdigit(word.at(6)) << endl;
		cout << setw(cw1) << left << "-Punct?" << setw(cw2) << right << ispunct(word.at(6)) << endl;

		cout << setw(cw1) << left << "Characater at Index 8: " << setw(cw2) << right << (word.at(8)) << endl;
		cout << setw(cw1) << left << "-Upper?" << setw(cw2) << right << isupper(word.at(8)) << endl;
		cout << setw(cw1) << left << "-Digit?" << setw(cw2) << right << isdigit(word.at(8)) << endl;
		cout << setw(cw1) << left << "-Punct?" << setw(cw2) << right << ispunct(word.at(8)) << endl;
	}
	// Application Closer
	cout << "-------------------------------------" << endl;
	cout << "Thank you for using Character Koalas!" << endl;
}