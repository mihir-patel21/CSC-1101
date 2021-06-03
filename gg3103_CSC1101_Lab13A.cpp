//==========================================================
//
// Title: Tiger Tales
// Course:     CSC 1101
// Lab Number: 13
// Author:     Mihir Patel (gg3103)
// Date:       03/3/2020
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
	// Declare variables
	int i;
	int j;
	int N;
	char Char;
	// Application Header
	cout << "Welcome to Hollow Rectangle" << endl << endl;
	cout << "---------------------------" << endl << endl;

	// User Inputs Character
	cout << "Enter an integer between 10 and 20: " << endl;
	cin >> N;
	cout << endl;

	// While Loop that make sure N is in range
	while (N < 10 || N > 20)
	{
		cout << "Error: Please chose an integer in the range of 10 to 20" << endl;
		cout << "Enter an integer between 10 and 20" << endl;
		cin >> N;
		cout << endl;
	}

	cout << "Enter a char from set [@,#,$,%,&]: " << endl;
	cin >> Char;
	cout << endl;

	while (Char == '@' && Char == '#' && Char == '$' && Char == '%' && Char == '&')
	{
		cout << "Error: Please chose an character: " << endl;
		cout << "Enter a char from set [@,#,$,%,&]: " << endl;
		cin >> Char;
		cout << endl;
	}
	for (i = 1; i <= N; i++)
	{
		for (j = 1; j <= N; j++)
		{
			if (i == 1 || i == N || j == 1 || j == N)
			{
				cout << Char;
			}
			else
				cout << " ";
		}
		cout << endl;
	}

	// Application Closer
	cout << "------------------------------------" << endl;
	cout << "Thank you for using Hollow Rectangle" << endl;

}