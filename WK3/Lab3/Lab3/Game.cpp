//
//  Game.cpp
//  Lab3
//
//  Created by Jason Cearley on 10/12/15.
//  Copyright © 2015 Jason Cearley. All rights reserved.
//

#include <iostream>
using std::cout;
using std::endl;

#include "Game.hpp"

/****************************************************************
 * This is the Game class constructor. It initializes the 
 * num_sides, NumRounds, and DieType class member variables.
 ***************************************************************/
Game::Game()
{
    this->die1.setNumSides(0);
    this->die2.setNumSides(0);
    this->NumRounds = 0;
    this->DieType = 0;
    this->score1 = 0;
    this->score2 = 0;
}

/****************************************************************
 * This function will set the num_sides for each die in the Game 
 * to equal what the user enters.
 ***************************************************************/
void Game::setNumSides(int sides)
{
    this->die1.setNumSides(sides);
    this->die2.setNumSides(sides);
}

/****************************************************************
 * This function will set the NumRounds to equal what the user
 * enters.
 ***************************************************************/
void Game::setNumRounds(int r)
{
    NumRounds = r;
}

/****************************************************************
 * This function will establish which player is using the
 * LoadedDie based on what the user enters. 1 - Only Player 1 is
 * using the LoadedDie, 2 - Only Player 2 is using the LoadedDie,
 * 3 - Both are using the LoadedDie, and 4 - Neither is useing the 
 * LoadedDie.
 ***************************************************************/
void Game::setDieType(int t)
{
    this->DieType = t;
}

/****************************************************************
 * This function will roll each die the correct number of rounds 
 * and update the score for each player.
 ***************************************************************/
void Game::setScore()
{
    
    int roll_num = 0,   // Variable to keep track of the number of rolls
        player1 = 0,    // Variable to keep track of player1's number
        player2 = 0;    // Variable to keep track of player1's number
    
    // This if statement will roll a LoadedDie for player 1 only and update each players score
    if (DieType == 1)
    {
        // Do/while loop to roll correct number of rounds
        do
        {
            player1 = die1.roll();
            player2 = die2.getDieNum();
            
            // if player 1 rolls highest number update their score & print info to screen
            if (player1 > player2)
            {
                score1++;
                cout << "Player 1 won round " << roll_num + 1 << " with a roll of " << player1 << " to " << player2 << endl;
                cout << "The score is Player 1: " << score1 << " and Player 2: " << score2 << endl;
            }
            
            // if player 2 rolls highest number update their score & print info to screen
            else if (player2 > player1)
            {
                score2++;
                cout << "Player 2 won round " << roll_num + 1 << " with a roll of " << player2 << " to " << player1 << endl;
                cout << "The score is Player 1: " << score1 << " and Player 2: " << score2 << endl;
            }
            
            // else statement for a possible tie
            else
            {
                cout << "Round " << roll_num + 1 << " was a draw." << endl;
            }
            
            // increment roll number
            roll_num++;
            
            cout << endl;
            
        } while (roll_num < NumRounds);
    }
    
    // This if else statement will roll a LoadedDie for player 2 only and update each players score
    else if (DieType == 2)
    {
        // Do/while loop to roll correct number of rounds
        do
        {
            player1 = die1.getDieNum();
            player2 = die2.roll();
            
            // if player 1 rolls highest number update their score & print info to screen
            if (player1 > player2)
            {
                score1++;
                cout << "Player 1 won round " << roll_num + 1 << " with a roll of " << player1 << " to " << player2 << endl;
                cout << "The score is Player 1: " << score1 << " and Player 2: " << score2 << endl;
            }
            
            // if player 2 rolls highest number update their score & print info to screen
            else if (player2 > player1)
            {
                score2++;
                cout << "Player 2 won round " << roll_num + 1 << " with a roll of " << player2 << " to " << player1 << endl;
                cout << "The score is Player 1: " << score1 << " and Player 2: " << score2 << endl;
            }
            
            // else statement for a possible tie
            else
            {
                cout << "Round " << roll_num + 1 << " was a draw." << endl;
            }
            
            // increment roll number
            roll_num++;
            
            cout << endl;
            
        } while (roll_num < NumRounds);
    }
    
    // This if else statement will roll a LoadedDie for both players and update each players score
    else if (DieType == 3)
    {
        // Do/while loop to roll correct number of rounds
        do
        {
            player1 = die1.roll();
            player2 = die2.roll();
            
            // if player 1 rolls highest number update their score & print info to screen
            if (player1 > player2)
            {
                score1++;
                cout << "Player 1 won round " << roll_num + 1 << " with a roll of " << player1 << " to " << player2 << endl;
                cout << "The score is Player 1: " << score1 << " and Player 2: " << score2 << endl;
            }
            
            // if player 2 rolls highest number update their score & print info to screen
            else if (player2 > player1)
            {
                score2++;
                cout << "Player 2 won round " << roll_num + 1 << " with a roll of " << player2 << " to " << player1 << endl;
                cout << "The score is Player 1: " << score1 << " and Player 2: " << score2 << endl;
            }
            
            // else statement for a possible tie
            else
            {
                cout << "Round " << roll_num + 1 << " was a draw." << endl;
            }
            
            // increment roll number
            roll_num++;
            
            cout << endl;
            
        } while (roll_num < NumRounds);
    }
    
    // This if else statement will roll a normal Die for both players and update each players score
    else if (DieType == 4)
    {
        // Do/while loop to roll correct number of rounds
        do
        {
            player1 = die1.getDieNum();
            player2 = die2.getDieNum();
            
            // if player 1 rolls highest number update their score & print info to screen
            if (player1 > player2)
            {
                score1++;
                cout << "Player 1 won round " << roll_num + 1 << " with a roll of " << player1 << " to " << player2 << endl;
                cout << "The score is Player 1: " << score1 << " and Player 2: " << score2 << endl;
            }
            
            // if player 2 rolls highest number update their score & print info to screen
            else if (player2 > player1)
            {
                score2++;
                cout << "Player 2 won round " << roll_num + 1 << " with a roll of " << player2 << " to " << player1 << endl;
                cout << "The score is Player 1: " << score1 << " and Player 2: " << score2 << endl;
            }
            
            // else statement for a possible tie
            else
            {
                cout << "Round " << roll_num + 1 << " was a draw." << endl;
            }
            
            // increment roll number
            roll_num++;
            
            cout << endl;
            
        } while (roll_num < NumRounds);
    }
}

/****************************************************************
 * This function will determine the winner of the game and print
 * to the screen.
 ***************************************************************/
void Game::getWinner()
{
    if (score1 > score2)
    {
        cout << "Player 1 is the Winner." << endl;
    }
    
    else if (score2 > score1)
    {
        cout << "Player 2 is the Winner." << endl;
    }
    
    else
    {
        cout << "The Game is a tie." << endl;
    }
}
























