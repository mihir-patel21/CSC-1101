//==========================================================
//
// Title: Vin Valets
// Course:     CSC 1101
// Lab Number: 14-1
// Author:     Mihir Patel (gg3103)
// Date:       03/20/2020
// Description:
// Analyzes VIN's on vehicles
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
    int Year;
    int lineCount;
    int tokenCount;
    int line;
    char countryCode;
    char modelYear;

    // Declare Constants
    const string INPUT_FILE_NAME = "Vin.txt";
    const int(cw1) = 11;
    const int(cw2) = 20;
    const int(cw3) = 30;

    // Application Header
    cout << "Welcome to Vin Valets!" << endl;
    cout << "----------------------" << endl << endl;

    // Attempt to open input file
    inFile.open(INPUT_FILE_NAME);
    if (!inFile.is_open())
        cout << "Error: unable to open file '" << INPUT_FILE_NAME << "'." << endl << endl;
    else
    {
        cout << "Reading lines from file '" << INPUT_FILE_NAME << "' ..." << endl << endl;
    }

    // Print read message
    cout << "Reading lines from file '" << INPUT_FILE_NAME << "' ..." << endl << endl;

    // Read and echo header line
    //getline(inFile, line);
    //cout << line << endl;




    // Application Closer
    cout << "-------------------------------" << endl;
    cout << "Thank you for using VIN Valets!" << endl;

}
