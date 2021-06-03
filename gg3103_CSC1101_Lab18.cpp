//==========================================================
//
// Title: Banker Bisons
// Course:     CSC 1101
// Lab Number: 9
// Author:     Mihir Patel (gg3103)
// Date:       03/30/2020
// Description:
//  Bank Application
//
//==========================================================
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout"

int menuOption()
{
	// Declare Variables
	int option;

	// Show the user prompts
	cout << "Banker Bisons Menu" << endl;
	cout << "1 - Enter Loan Ammount" << endl;
	cout << "2 - Enter Monthly Payment" << endl;
	cout << "3 - Enter Annual Interest Rate" << endl;
	cout << "4 - Show Loan Parameters" << endl;
	cout << "5 - Show Loan Repayment" << endl;
	cout << "9 - Exit" << endl;
	cout << "Enter an option: " << endl;
	cin >> option;

	// Return option
	return option;

}

double getLoanAmount();
{
	// Declare Variable
	double loanAmount;
	
	// Prompt
	cout << "Enter the car loan amount ($2500 - $7000): ";
	cin >> loanAmount;

	// Validation Loop
	while (loanAmount < 2500 || loanAmount > 7500)
	{
		// Error
		cout << "Error: " << loanAmount << " is an invalid loan amount. " << endl;

		// Prompt
		cout << "Enter the car loan amount ($2500 - $7500): ";
		cin >> loanAmount;
	}
	return loanAmount;
}

double getMontlyPayment()
{
	// Declare Variables
	double monthlyPayment;

	// Prompt
	cout << "Enter the monthly payment ($50 - $750): ";
	cin >> monthlyPayment;

	// Validation Loop
	while (monthlyPayment < 50 || monthlyPayment > 750)
	{
		// Error
		cout << "Error: " << monthlyPayment << " is an invalid monthl payment." << endl;

		//Prompt
		cout << "Enter the monthly payment ($50 - $750): ";
		cin >> monthlyPayment;
	}
	return monthlyPayment;
}

double getInterestRate()
{
	// Declare Variable
	double rate;

	// Prompt
	cout << "Enter the annual interest rate (1% to 6%): ";
	cin >> rate;

	// Validation loop
	while (rate < 1 || rate > 6)
	{
		cout << "Error: " << rate << " is an invalid intrest rate. " << endl;

		// Prompt
		cout << "Enter the annual interest rate (1% to 6%): ";
		cin >> rate;

	}
	return rate;

}

void showLoanParameters(double amount, double payment, double rate)
{
	// Declare Constants
	const int(cw1) = 5;
	const int(cw2) = 12;

	// Set Real Numbers
	cout << fixed << setprecision(2);

	// Prompt
	cout << setw(cw1) << left << "Amount ($): " << setw(cw2) << right << amount << endl;
	cout << setw(cw1) << left << "Payment ($): " << setw(cw2) << right << payment << endl;
	cout << setw(cw1) << left << "Rate ($): " << setw(cw2) << right << rate << endl;

}

void showLoanRepayment(double amount, double payment, double rate)
{
	// Declare Variables
	double intrest;
	double principal;
	double balance;
	double monthlyRate;
	int month;
	balance = amount;
	month = 0;

	// Declare Constant
	const int(cw1) = 5;
	const int(cw2) = 15;
	const int(cw3) = 16;
	const int(cw4) = 17;
	const int(cw5) = 18;

	// Print Header
	cout << setw(cw1) << right << "Month" << setw(cw2) << right << "Balance ($)" << setw(cw3) << right << "Payment($)" << setw(cw4) << right << "Interest($)" << setw(cw5) << right << "Principal($)" << endl;

	// Set Real Number
	cout << fixed << setprecision(2);

	// Sentinel Loop
	while (balance > 0)
	{
		monthlyRate = rate / 12 / 100;
		intrest = balance * monthlyRate;
		principal = payment - intrest;
		balance = balance - principal;

		// Counter 
		month = month + 1;

		// Populate tables
		cout << setw(cw1) << right << month << setw(cw2) << right << balance << setw(cw3) << right << payment << setw(cw4) << right << intrest << setw(cw5) << right << principal << endl;

	}

	cout << endl << endl;

	// Show months till repayment
	cout << "Months to repay loan: " << month << endl << endl;
}

int main()
{
	// Declare Variables
	double amount = 2500;
	double payment = 50;
	double rate = 1. / 12 / 100;
	int option;

	// Application Header
	cout << "Welcome to Banker Bisons!" << endl;
	cout << "-------------------------" << endl;

	// Loop to process menu options
	option = menuOption();
	while (option != 0)
	{
		if (option == 1)
		{
			amount = getLoanAmount();

		}
		else if (option == 2)
		{
			payment = getMontlyPayment();
		}
		else if (option == 4)
		{
			showLoanParameters(amount, payment, rate);
		}
		else if (option == 5)
		{
			showLoanRepayment(amount, payment, rate);
		}
		option = menuOption;
		cout << endl << endl;
	}
	cout << "----------------------------------" << endl;
	cout << "Thank you for using Banker Bisons!" << endl << endl;
}