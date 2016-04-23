//
//  main.cpp
//  Assign3
//
//  Created by Jason Cearley on 10/29/15.
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
    
    // Create a game object
    Game Creature_Battles;
    
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
            Creature_Battles.getPlayer1();
            
            Creature_Battles.getPlayer2();
            
            Creature_Battles.Battle();
            
            Creature_Battles.deletePlayers();
        }
    } while (choice != 2);
    
    return 0;
}















