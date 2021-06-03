//==========================================================
//
// Title: Text Recorder
// Course:     CSC 1101
// Lab Number: 17
// Author:     Mihir Patel (gg3103)
// Date:       03/24/2020
// Description:
//  This application analyzes text from a paragraph. 
//
//==========================================================
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout"

void Count(string paragraph)
{
	// Declare Constants
	const int(cw1) = 10;
	const int(cw2) = 10;
	int stringLength = 0;
	int lowerChar = 0;
	int upperChar = 0;
	int space = 0;
	int words = 0;
	int digits = 0;
	int sentences = 0;

	// Loop
	for (int i = 0; i < paragraph.length(); i++);
	{
		if (paragraph[i] >= 'A' && paragraph[i] <= 'Z')
			upperChar++;
		else if (paragraph[i] >= 'a' && paragraph[i] <= 'a')
			lowerChar++;
		else if (paragraph[i] >= '0' && paragraph[i] <= '9')
			digits++;
		else if (paragraph[i] == ' ')
			words++;
	}

	cout << setw(cw1) << left << "Lower Case: " << setw(cw2) << right << lowerChar << endl;
	cout << setw(cw1) << left << "Upper Case: " << setw(cw2) << right << upperChar << endl;
	cout << setw(cw1) << left << "Space: " << setw(cw2) << right << space << endl;
	cout << setw(cw1) << left << "Words: " << setw(cw2) << right << words << endl;
	cout << setw(cw1) << left << "Digits: " << setw(cw2) << right << digits << endl;
	cout << setw(cw1) << left << "Sentences: " << setw(cw2) << right << sentences << endl;
}

int main()
{
	// Application header
	cout << "Welcome to Text Recorder!" << endl;
	cout << "-------------------------" << endl << endl;

	string paragraph = "Oh dear little 1! Oh dear little 1! For you, parents had glorious dreams! And you were all immersed in your own dreams. Yet, Agni engulfed you and all of those dreams Taking you to Almighty’s divine presence. Usually, departed old parents are buried by sons. Whereas, Kumbakonam, saw a sad scene! Crying parents burying their little 1! Oh Almighty! show Your grace on those little ones. And keep them all in Thy Holiest Presence! Oh Almighty! bless those parents wilting in grief. To have the strength to bear this great loss. May Thy compassion and grace pervade all souls. And bring down the pain and wipe away the tears. Oh Almighty! show Your grace on those little ones.";
	Count(paragraph);
	
	// Application Closer
	cout << "----------------------------------" << endl;
	cout << "Thank you for using Text Recorder!" << endl;

}
