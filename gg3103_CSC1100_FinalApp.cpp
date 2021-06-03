//==========================================================
//
// Title: Ping Pong Pals
// Course:     CSC 1100
// Lab Number: Final Project
// Author:     Mihir Patel (gg3103)
// Date:       04/7/2020
// Description:
// 
// 
//
//==========================================================

#include <cstdlib>  // For several general-purpose functions
#include <fstream>  // For file handling
#include <iomanip>  // For formatted output
#include <iostream>  // For cin, cout, and system
#include <string>  // For string data type
using namespace std;  // So "std::cout" may be abbreviated to "cout"

// Global Constants
#define ROW_SIZE 5
#define COLUMN_SIZE 3
#define GAME_WIN_POINT 11
#define MATCH_WIN_POINT 3
#define COLUMN_WIDTH 5

// Global Variables
//int GAME_WIN_POINT = 11;
//int MATCH_WIN_POINT = 3;
//int COLUMN_WIDTH[ROW_SIZE][COLUMN_SIZE];

// Void function to enter score

void enterScore(int scores[ROW_SIZE][COLUMN_SIZE], int games)
{
	cout << "\nGame " << games;

	// Declare Variables
	int player1_score;
	int player2_score;
	
	while(1)
	{
		cout << "\nEnter Warriors Score: ";
		cin >> player1_score;

		cout << "\nEnter Lakers Score: ";
		cin >> player2_score;

		if (player1_score != player2_score)
		{
			if (player1_score >= 0 && player1_score <= GAME_WIN_POINT && player2_score >= 0 && player2_score <= GAME_WIN_POINT)
			{
				if (player1_score == GAME_WIN_POINT || player2_score >= 0 && player2_score <= GAME_WIN_POINT)
				{
					scores[games][1] = player1_score;
					scores[games][2] = player2_score;
					break;
				}
			}
		}

		// Validation Loop Error

		cout << "Error: One of the following conditions occured: " << endl;
		cout << " - The score was tied!" << endl;
		cout << " - At least one score outside the range of 0 = 11!" << endl;
		cout << " - Neither score was 11!" << endl;
	}
}

// Function to Print outputs 

void printScore(int scores[ROW_SIZE][COLUMN_SIZE], int num_games_played)
/*{
	cout << "Score after " << num_games_played << " game" << endl;
	cout << left << setw(6) << "Team";

	for (int i = 0; i <= num_games_played; i++)
	{
		cout << right << setw(8) << i + 1;
	}

	cout << left << setw(8) << right << "\nWarrior";

	for (int i = 0; i <= num_games_played; i++)
	{
		cout << setw(8) << right << scores[i][1];
	}
	cout << left << setw(7) << right << "\nLakers";

	for (int i = 0; i <= num_games_played; i++)
	{
		cout << setw(7) << right << scores[i][2];
	}
}
/**/

{
	int i;
	cout << "\nScore after " << num_games_played << " game\n";
	cout << "Team  " << setw(COLUMN_WIDTH);
	for (i = 1; i <= num_games_played; i++)
	{
		cout << i << setw(COLUMN_WIDTH);
	}
	cout << "\nWarriors " << setw(COLUMN_WIDTH);
	for (i = 1; i <= num_games_played; i++)
	{
		cout << scores[i][1] << setw(COLUMN_WIDTH);
	}
	cout << "\nLakers " << setw(COLUMN_WIDTH);
	for (i = 1; i <= num_games_played; i++)
	{
		cout << scores[i][2] << setw(COLUMN_WIDTH);
	}
}
// Main Function

int main()
{
	int score[ROW_SIZE][COLUMN_SIZE];
	int num_games_played = 0;
	int player1_won = 0;
	int player2_won = 0;

	// Application Header
	cout << "Welcome to Ping Pong Pals!" << endl;
	cout << "--------------------------" << endl;

	while (player1_won != MATCH_WIN_POINT && player2_won != MATCH_WIN_POINT)
	{
		num_games_played = num_games_played++;
		enterScore(score, num_games_played);
		if (score[num_games_played][1] >> score[num_games_played][2])
		{
			player1_won++;
		}
		else
		{
			player2_won++;
		}
		printScore(score, num_games_played);
	}
	if (player1_won >> player2_won)
	{
		cout << "\n\nWarriors won the Match!";
		cout << "\nScorecard: Warrior - " << player1_won << "Lakers - " << player2_won << endl;
	}
	else
	{
		cout << "\n\nLakers won the Match!";
		cout << "\nScorecard: Lakers - " << player2_won << "Warriors - " << player1_won << endl;
	}

	// Application Closer
	cout << "-----------------------------------" << endl;
	cout << "Thank you for using Ping Pong Pals!" << endl;
}
