//==========================================================
//
// Title: Payroll Parrots
// Course:     CSC 1101
// Lab Number: 10-2
// Author:     Mihir Patel (gg3103)
// Date:       02/14/2020
// Description:
// This application determines the pay and taxes on a paycheck
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
	const int(cw1) = 20;
	const int(cw2) = 5;
	const double(ftax) = .15;
	const double(FICAtax) = .0765;
	const double(stax) = .0435;

	// Declare Variables
	char letter;
	double HR;
	double TW;
	double GP;
	double FedTax;
	double FICATax;
	double StateTax;
	double NetPay;

	// Set Real Numbers
	cout << fixed << setprecision(2);

	// Application Header
	cout << "Welcome to Payroll Parrots!" << endl;
	cout << "---------------------------" << endl;

	// User inputs
	cout << "Enter the paycheck period: ";
	cin >> letter;
	cout << endl;
	while (letter < 'A' || letter > 'Z')
	{
		cout << "Error: Invalid paycheck period: " << letter << "." << endl;
		cout << "Enter the paycheck period: ";
		cin >> letter;
		cout << endl;
	}
	cout << "Enter the hourly rate ($) between 14 and 56: ";
	cin >> HR;
	cout << endl;
	while (HR < 14 || HR > 56)
	{
		cout << "Error: Invalid Hourly Rater of " << HR << "." << endl;
		cout << "Enter the hourly rate ($) between 14 and 56: ";
		cin >> HR;
		cout << endl;
	}
	cout << "Enter the hours worked between 60 and 100: ";
	cin >> TW;
	cout << endl;
	while (TW < 60 || TW > 100)
	{
		cout << "Error: Invalid hours worked of " << TW << "." << endl;
		cout << "Enter the hours worked between 60 and 100: ";
		cin >> TW;
		cout << endl;
	}

	// Formulas
	GP = HR * TW;
	FedTax = GP * ftax;
	FICATax = GP * FICAtax;
	StateTax = GP * stax;
	NetPay = GP - FedTax - FICATax - StateTax;

	// Show Outputs
	cout << setw(cw1) << left << "Paycheck Period: " << setw(cw2) << right << letter << endl;
	cout << setw(cw1) << left << "Rate ($/hour): " << setw(cw2) << right << HR << endl;
	cout << setw(cw1) << left << "Hours worked: " << setw(cw2) << right << TW << endl;
	cout << setw(cw1) << left << "Gross pay ($): " << setw(cw2) << right << GP << endl;
	cout << setw(cw1) << left << "Federal Tax ($): " << setw(cw2) << right << FedTax << endl;
	cout << setw(cw1) << left << "FICA Tax ($): " << setw(cw2) << right << FICATax << endl;
	cout << setw(cw1) << left << "State Tax ($): " << setw(cw2) << right << StateTax << endl;
	cout << setw(cw1) << left << "Net Pay ($): " << setw(cw2) << right << NetPay << endl;

	// Application closer
	cout << "------------------------------------" << endl;
	cout << "Thank you for using Payroll Parrots!" << endl;
}