//==========================================================
//
// Title: Banker Bisons
// Course:     CSC 1101
// Lab Number: 14-2
// Author:     Mihir Patel (gg3103)
// Date:       03/21/2020
// Description:
// This application determines the nmber of months to repay a car loans.
//==========================================================
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout"

double getLoanAmount()
{
	int loan;
	cout << "Enter a loan ammount between $2500 to $7500: " << endl;
	cin >> loan;
	cout << endl;

	while (loan < 2500 || loan > 7500)
	{
		cout << "Error: Please Enter in Range!" >> endl;
		cout << "Enter a loan amount between $2500 to $7500: " << endl;
		cin >> loan;
		cout << endl;
	}
}

double getMonthlyPayment()
{
	int payment;
	cout << "Enter a monthly payment between $50 to $750: " << endl;
	cin >> payment;
	cout << endl;
	while (payment < 50 || payment > 750)
	{
		cout << "Error: Please Enter in Range!" << endl;
		cout << "Enter a monthly payment between $50 to $750: " << endl;
		cin >> payment;
		cout << endl;
	}
}

double getInterestRate()
{
	int rate;
	cout << "Enter a intrest rate between 1% to 6%: " << endl;
	cin >> rate;
	cout << endl;
	while (rate < 1 || rate > 6)
	{
		cout << "Error: Please Enter in Range!" << endl;
		cout << "Enter a intrest rate between 1% to 6%: " << endl;
		cin >> rate;
		cout << endl;
	}
}

int main()
{
	double fullBalance = getLoanAmount();
	double monthlyPayment = getMonthlyPayment();
	double intrestRate = getInterestRate();
	double InterestRate = intrestRate / 12 / 100

	int month = 0;
	cout << endl;

	while (month > 0)
	{

	}
}