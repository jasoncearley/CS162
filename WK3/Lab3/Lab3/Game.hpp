//
//  Game.hpp
//  Lab3
//
//  Created by Jason Cearley on 10/12/15.
//  Copyright © 2015 Jason Cearley. All rights reserved.
//

#ifndef Game_hpp
#define Game_hpp

#include <stdio.h>
#include "Die.hpp"
#include "LoadedDie.hpp"

// Create a Game class that uses two LoadedDie class objects
class Game
{
private:
    LoadedDie die1;             // LoadedDie object 1
    LoadedDie die2;             // LoadedDie object 2
    int NumRounds;              // Variable to track number of rounds
    int DieType;                // Variable to track which player is using the LoadedDie, 1 - Only Player 1 is using the LoadedDie,
                                // 2 - Only Player 2 is using the LoadedDie, 3 - Both are using the LoadedDie, and
                                // 4 - Neither is useing the LoadedDie.
    int score1;                 // Variable to track player score
    int score2;                 // Variable to track player score
    
protected:
    
public:
    Game();                     // Game constructor
    void setNumSides(int);      // Function to set the number of sides for each die in the game
    void setNumRounds(int);     // Function to set the number of rounds in the game
    void setDieType(int);       // Function to set the DieType for each player
    void setScore();            // Fucntion to roll die, determine winner for each round, and increment the score for each player
    void getWinner();           // Function to determine a game winner based on most rounds won
};

#endif
