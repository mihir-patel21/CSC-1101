//==========================================================
//
// Title: Ping Pong Pals
// Course:     CSC 1100
// Homework Number: 7
// Author:     Mihir Patel
// Date:       <04-22-2020>
// Description:
//   Application that keeps track of scoring for a ping pong best of five match.
//
//==========================================================
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout"
    
//Global Variables
const int ROW_SIZE = 2;
const int  COLUMN_SIZE = 5;

//Input Scores Function

void enterInput(int scores[ROW_SIZE][COLUMN_SIZE] , int games)
{
    //Declare Variables
    int player1;
    int player2;
    int header = games + 1;
    
    //User inputs 
    cout << endl;
    cout << "Game: " << header << endl;
    cout << "------" << endl;
    cout << "Enter Warrior's score: ";
    cin >> player1;
    
    cout << "Enter Laker's score: ";
    cin >> player2;
    
    // While loop
    while ((player1 > 11 || player1 < 0) || (player2 > 11 || player2 < 0) || (player1 == player2) || (player1 != 11 && player2 != 11))
    {
        cout << "ERROR: one of the following conditions occurred: " << endl;
        cout << "- The score was tied" << endl;
        cout << "- One or more scores were out of the range of 0-11" << endl;;
        cout << "- Neither score was 11" << endl << endl;
        
        cout << "Enter Warrior's score: ";
        cin >> player1;
          
        cout << "Enter Laker's score: ";
        cin >> player2;
    }
    
    //Array addiation
    scores[0][games] = player1;
    scores[1][games] = player2;
}
    
//Print Scores Function

void printScores(int scores [ROW_SIZE][COLUMN_SIZE] , int num_games_played = 1)
{
    //Formatting Constants

    const int CW1 = 10;
    const int CW2 = 5;
    int header = num_games_played + 1;
   
    //Score header

    cout << endl;
    cout << "Score after " << header << " game(s): " << endl;
    
    //Team Row

    cout << setw(CW1) << left << "Team";
    for (int i = 0; i < header; i++)
    {
        cout << setw(CW2) << left << i + 1;
    }
    cout << endl;
    
    //Warriors scores

    cout << setw(CW1) << left << "Warriors";
    
    //Warriors score after each game

    for (int i = 0; i < header; i++)
    {
        cout << setw(CW2) << left << scores [0][i];
    }
    cout << endl;
    
    //Lakers scores

    cout << setw(CW1) << left  << "Lakers";
    
    //Lakers score after each game

    for (int i = 0; i < header; i++)
    {
        cout << setw(CW2) << left << scores[1][i];
    }
    
    cout << endl << endl;
}
    
// Main Function

int main()
{
    //Declare vairables

    int score[ROW_SIZE][COLUMN_SIZE];
    int gamesplayed = 0;
    int player1wins = 0;
    int player2wins = 0;
    
    //Application Header

    cout << "Welcome to Ping Pong Pals!" << endl;
    cout << "--------------------------" << endl;
    
    //Call functions

    while (player1wins < 3 && player2wins < 3)
    {
        enterInput(score,gamesplayed);
        
        printScores(score,gamesplayed);
        
        if (score[0][gamesplayed] == 11)
        {
            player1wins = player1wins + 1;
        }
        else if (score[1][gamesplayed] == 11)
        {
            player2wins = player2wins + 1;
        }
        else
        {
            cout << "Error" << endl;
        }
        
        //game counter increase

        gamesplayed = gamesplayed + 1;

    }
    
    //Print Results

    if (player1wins == 3)
    {
        cout << "Warriors win the match " << player1wins << "-" << player2wins << "!" << endl;
    }
    else if (player2wins == 3)
    {
        cout << "Lakers win the match " << player2wins << "-" << player1wins << "!" << endl;
    }
    else
    {
        cout << "Error" << endl;
    }
    
    //Application Closer

    cout << "--------------------" << endl;
    cout << "Thank you for using Ping Pong Pals!" << endl;
}



