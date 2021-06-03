//==========================================================
//
// Title:      Decimal Dudes
// Course:     CSC 1101
// Lab Number: Lab02-01
// Author:     Mihir Patel
// Date:       01/16/2020
// Description:
//   This application converts a decimal number to a binary number.
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
  const int BASE = 2;

  // Declare variables
  // <your code here>
  int numDec;
  int numBin;
  string numStr;

  // Show application header
  // <your code here>
  cout << "Welcome to Decimal Dudes!" << "Statements" << endl;
  // Prompt for and get decimal number
  cout << "Enter a decimal number: ";
  cin >> numDec;
  
  // Loop to convert decimal to binary
  cout << "Decimal " << numDec << " is binary ";
  numStr = "";
  while (numDec > 0)
  {
    numBin = numDec % BASE;
    if (numBin == 0)
      numStr = "0" + numStr;
    else
      numStr = "1" + numStr;
    numDec = numDec / BASE;
  }
  cout << numStr << endl;

  // Show application close
  // <your code here>
  cout << "\nEnd of Decimal Dudes" << "Statements" << endl;

}
