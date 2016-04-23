//
//  main.cpp
//  Final
//
//  Created by Jason Cearley on 11/22/15.
//  Copyright © 2015 Jason Cearley. All rights reserved.
//

// standard input/output functions
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

// needed to use rand/srand
#include <cstdlib>

// need to use time
#include <ctime>

// My developed class specification files
#include "Game.hpp"
#include "Menu.hpp"

int main()
{
    // Variable to hold the user's menu choices
    int choice = 0;
    
    // seed for RNG
    unsigned seed = static_cast<unsigned>(time(0));
    
    // seed RNG
    srand(seed);
    
    // do/while loop to allow players to play multiple games w/o exiting
    do
    {
        // Display menu for user to choose from
        menu();
        
        // function call to get, validate, and return user's selection
        choice = user_selection();
        
        // play a game
        if (choice == 1)
        {
            // Create a game object
            Game Creature_Battles;
            
            //create player1 and allow user to give him/her a name, also explain rules of game
            Creature_Battles.getPlayer1();
            
            // continue moving from room to room killing creatures until player1 has no strength or wins
            do
            {
                // battle creature in room with player1
                Creature_Battles.Battle();
                
                // check to ensure player1 is not dead or has defeated all creatures prior to allowing them to move rooms
                if ((Creature_Battles.getPlayer1Strength() > 0) && (Creature_Battles.getPlayer1Wins() < 5))
                {
                    Creature_Battles.move();
                }
                
            } while ((Creature_Battles.getPlayer1Strength() > 0) && (Creature_Battles.getPlayer1Wins() < 5));
            
            // display congrats if player defeats all creatures
            if (Creature_Battles.getPlayer1Wins() == 5)
            {
                cout << "Congratulations! You just defeated all 5 creatures and won the game." << endl;
            }
            
            // delete all aspects of the game to free heap memory
            Creature_Battles.endGame();
        }
        
    } while (choice != 2);
    
    return 0;
}
