//==========================================================
//
// Title: Tiger Tales
// Course:     CSC 1101
// Lab Number: 12 - 2
// Author:     Mihir Patel (gg3103)
// Date:       03/1/2020
// Description:
//  Application that reads records fo the Detroit Tigers Baseball Team 
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
	// Declare Variables
	ifstream inFile;
	string place;
	string line;
	int lineCount;
	int tokenCount;
	int wins;
	int losses;
	int year;

	// Declare Constants
	const string TigerRecords = "TigerRecords.txt";
	const int COL1 = 10;
	const int COL2 = 15;
	const int COL3 = 15;
	const int COL4 = 12;

	// Show Applicatio Header
	cout << "Welcome to the Tiger Tales! " << endl;
	cout << "----------------------------" << endl;

	// Set Real Numbers
	cout << fixed << setprecision(3);

	// Attempt to Open Input Files
	inFile.open(TigerRecords);
	if (!inFile.is_open())
	{
		cout << "Error: unable to open the file " << TigerRecords << endl;
	}
	else
	{
		cout << "Reading lines from files '" << TigerRecords << "..." << endl;
		getline(inFile, line);
		cout << line << endl;

		lineCount = 0;
		while (inFile.good())
		{
			inFile >> year;
			inFile >> place;
			inFile >> wins;
			inFile >> losses;
			cout << setw(COL1) << left << year << endl;
			cout << setw(COL2) << right << place << endl;
			cout << setw(COL3) << right << wins << endl;
			cout << setw(COL4) << right << losses << endl;
			lineCount = lineCount + 1;
		}
		inFile.close();
		cout << endl << lineCount << "line(s) read from file '" << TigerRecords << "'" << endl;
	}
	// Show application close
	cout << "End of Tiger Tales" << endl;
}