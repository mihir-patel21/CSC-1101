//==========================================================
//
// Title: Breakfast Buddies
// Course:     CSC 1101
// Lab Number: 10-1
// Author:     Mihir Patel (gg3103)
// Date:       02/14/2020
// Description:
//  Calculates and displays the cost of a customer's granola bar purchase.
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
	const int(cw1) = 35;
	const int(cw2) = 5;
	const double(box) = 3.50;
	const double(tax) = .06;

	// Declare Variables
	int boxes;
	int discount;
	int bars;
	double SABD;
	double DA;
	double SAAD;
	double TA;
	double ST;

	// Set Real Numbers
	cout << fixed << setprecision(2);

	// Application Header
	cout << "Welcome to Breakfast Buddies!" << endl;
	cout << "-----------------------------" << endl;

	// User Inputs with validation loops
	cout << "Enter the numbers of boxes purchases (1-6): " << endl;
	cin >> boxes;
	cout << endl;
	while (boxes < 1 || boxes > 6)
	{
		cout << "Error: " << boxes << " is an invalid number of boxes." << endl;
		cout << "Enter the numbers of boxes purchases (1-6): ";
		cin >> boxes;
		cout << endl;
	}
	
	cout << "Enter the percentage discount (0 - 40): " << endl;
	cin >> discount;
	cout << endl;
	while (discount < 0 || discount > 40)
	{
		cout << "Error: " << discount << " is an invalid percentage discount." << endl;
		cout << "Enter the percentage discount (0 - 40): ";
		cin >> discount;
		cout << endl;
	}

	// Formulas
	bars = boxes * 12;
	SABD = boxes * box;
	DA = ((discount / 100) * (SABD));
	SAAD = SABD - DA;
	TA = SAAD * tax;
	ST = SAAD + TA;

	// Show outputs
	cout << setw(cw1) << left << "Boxes: " << setw(cw2) << right << boxes << endl;
	cout << setw(cw1) << left << "Bars: " << setw(cw2) << right << bars << endl;
	cout << setw(cw1) << left << "Discounts (%): " << setw(cw2) << right << discount << endl;
	cout << setw(cw1) << left << "Sale amount before discount ($): " << setw(cw2) << right << SABD << endl;
	cout << setw(cw1) << left << "Discount amount ($): " << setw(cw2) << right << DA << endl;
	cout << setw(cw1) << left << "Sale amount after discount ($): " << setw(cw2) << right << SAAD << endl;
	cout << setw(cw1) << left << "Tax rate: " << setw(cw2) << right << tax << endl;
	cout << setw(cw1) << left << "Tax amount ($): " << setw(cw2) << right << TA << endl;
	cout << setw(cw1) << left << "Sale total ($): " << setw(cw2) << right << ST << endl;

	// Application Closer
	cout << endl;
	cout << "--------------------------------------" << endl;
	cout << "Thank you for using Breakfast Buddies!" << endl;





}