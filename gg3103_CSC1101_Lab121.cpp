//==========================================================
//
// Title: Fruity Fillers
// Course:     CSC 1101
// Lab Number: 12 - 1
// Author:     Mihir Patel (gg3103)
// Date:       03/1/2020
// Description:
//  Application that approimates PI. 
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
	// Declare constants
	double pi = 0;
	double D = 1;
	const int Numerator = 1;

	// Declare Variables
	int num;

	// Application Header
	cout << "Welcome to Fruity Fillers!" << endl;
	cout << "--------------------------" << endl;
	cout << endl;
	
	// User Enters Value
	cout << "Enter the number of terms to approixmate PI  (1 to 10,000, 99 to exit): " << endl;
	cin >> num;
	cout << endl;

	// While Loops
	while ((num < 1) || (num > 10000))
	{
		cout << "Error: The Number of the terms must be between 1 and 10,000!" << endl;
		cout << "Enter the number of terms to approixmate PI  (1 to 10,000, 99 to exit): " << endl;
		cin >> num;
	}
	// Sentienel Loop
	while (num != 99)
	{
		pi = 0;
		D = 1;

		// For Loop
		for (int i = 1; i <= num; i++)
		{
			if (i % 2 == 0)
			{
				pi -= (Numerator / D);
			}
			else
			{
				pi += (Numerator / D);
			}
			D += 2;
		}
		// Show outputs
		cout << "PI to " << num << " term(s) is " << fixed << setprecision(10) << 4 * pi << endl << endl;
		cout << "Enter the number of terms to approixmate PI  (1 to 10,000, 99 to exit): " << endl;
		cin >> num;
		cout << endl;

		// Validation Loop
		while ((num < 1) || (num > 10000))
		{
			cout << "Error: The Number of the terms must be between 1 and 10,000!" << endl;
			cout << "Enter the number of terms to approixmate PI  (1 to 10,000, 99 to exit): " << endl;
			cin >> num;
		}
	}
	
	// Application Closer
	cout << "----------------------" << endl;
	cout << "End of Fruity Fillers!" << endl;
}
