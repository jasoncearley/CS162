/*
  main.cpp
  Lab1: This is a program that uses two classes. Each class will be in a separate source file 
        with an appropriate header file. The first class is Die. It has a data member to indicate 
        the number of sides and a member function that returns the value of a single roll of a 
        single die. The second class is LoadedDie. It also has a single data member that indicates 
        the number of sides and a member function that returns the value of a single roll of a 
        single die. In this case it returns values that are higher than normal.

  Created by Jason Cearley on 9/23/15.
  Copyright © 2015 Jason Cearley. All rights reserved.
*/

#include <iostream> // Header file used for cin, cout, & endl
using std::cout;    // Establish the correct namspace for these functions
using std::cin;
using std::endl;

#include <cstdlib>          // Header file needed for rand/srand.
#include <ctime>            // Header file needed to use time.
#include "Die.hpp"          // Die class specification file.
#include "LoadedDie.hpp"    // LoadedDie class specification file.
#include "Game.hpp"         // Game class specification file.
#include "Menu.hpp"         // Menu specification file.

int main()
{
    Game war;                   // Create a Game class object
        int num_sides = 0,      // Variable to hold the # of sides on the die
        num_rolls = 0;          // Variable to hold the # of rolls desired
    unsigned seed = 0;          // Seed for RNG
    
    // Create seed for RNG
    seed = static_cast<unsigned>(time(0));
    
    // Seed RNG
    srand(seed);
    
    // Get user input for number of sides they would like their die to have
    cout << "Enter a number between 4 and 100 for the number of sides on your die: " << endl;
    num_sides = val_num_sides();
    
    // Set the number of sides on both die to user input value
    war.setNumSides(num_sides);
    
    // Get & store user input for number of rolls desired
    cout << "Enter a value between 1 and 20 for the number of rolls: " << endl;
    num_rolls = val_num_rolls();
    
    // Set the number of rounds based on user input
    war.setNumRounds(num_rolls);
    
    // Display a Menu for user to decide how many players will be using the LoadedDie
    menu();
    
    // Set which player(s) will be using the LoadedDie
    war.setDieType(user_selection());
    
    // Roll die based on which player(s) is(are) using the LoadedDie
    war.setScore();
    
    // Determine player with the highest score and print it to the screen
    war.getWinner();
    
    return 0;
}
