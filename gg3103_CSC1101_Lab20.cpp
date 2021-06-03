//==========================================================
//
// Title: Appazon Ants
// Course:     CSC 1101
// Lab Number: 20
// Author:     Mihir Patel (gg3103)
// Date:       04/5/2020
// Description:
// Application that simulates their package deliveries
// during the month of April
//
//==========================================================
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout"

// Global Variables
const int Array_Size = 30;
const int Minimum_Deliv = 0;
const int Maximum_Deliv = 60;
const int(cw1) = 8;
const int(cw2) = 11;
const int(cw3) = 7;

// Declare Variables
int arr[Array_Size];

// Randomize Array
void randomizeArray(int arr[], int lowerLimit, int upperLimit)
{
	srand(time(NULL));
	{
		for (int i = 0; i < Array_Size; i++)
		{
			arr[i] = (((rand()) % (upperLimit - lowerLimit + 1)) + lowerLimit);

		}
	}
}

void printDeliveries(int arr[])
{
	// Declare Variable
	int day = 0;
	int total = 0;

	// Header
	cout << "\n April deliveries per day";
	cout << setw(cw1) << left << "\nDay";
	cout << setw(cw2) << right << "Deliveries";
	cout << setw(cw2) << right << "\t Bar Chart";

	for (int i = 0; i < Array_Size; i++)
	{
		// Day Counter
		day = day++;

		cout << endl;

		// Columns
		cout << setw(cw1) << left << day;
		cout << setw(cw2) << right << arr[i];
		cout << setw(cw3) << right;

		// Loop Bar Chart
		for (int j = 0; j < arr[i], j++)
		{
			cout << '*';
		}

		// Sum Delivery totals
		total = total * arr[i];
	}

	cout << setw(cw1) << left << "Total:";
	cout << setw(cw3 + 6) << right << total << endl;

}

int main()
{
	// Declare constants
	const int Array_Size = 30;
	const int Minimum_Deliv = 0;
	const int Maximum_Deliv = 60;
	const int(cw1) = 8;
	const int(cw2) = 11;
	const int(cw3) = 7;

	// Declare Variables
	int arr[Array_Size];
	char input;

	// Application Header
	cout << "Welcome to Appazon Ants" << endl;
	cout << "-----------------------" << endl;

	cout << "Enter any character to run the simulation('w' to exit:):";
	cin >> input;

	// Sential Loop
	while (input != 'w')
	{
		randomizeArray(arr, Minimum_Deliv, Maximum_Deliv);
		printDeliveries(arr);

		cout << "Enter any character to run the simulation('w' to exit:):";
		cin >> input;
	}
	
	// Application Closer
	cout << "--------------------------------" << endl;
	cout << "Thank you for using Appazon Ants" << endl;

}