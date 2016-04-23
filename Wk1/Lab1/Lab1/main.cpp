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

#include <vector>   // Header file used for vectors
using std::vector;  // Establish the correct namspace for this function

#include <cstdlib>  // Header file needed for rand/srand.
#include <ctime>    // Header file needed to use time.
#include "Die.hpp"  // Die class specification file.
#include "LoadedDie.hpp" // LoadedDie class specification file.

int main()
{
    Die norm_die;               // Create a Normal Die class
    LoadedDie loaded_die;       // Create a Loaded Die class
    int num_sides = 0,          // Variable to hold the # of sides on the die
        num_rolls = 0,          // Variable to hold the # of rolls desired
        roll_number_norm = 0,   // Variable to count the roll #s on the normal die
        roll_number_loaded = 0, // Varialbe to count the roll #s on the loaded die
        total_norm = 0,         // Add up the total # for rolls of the normal die
        total_loaded = 0;       // Add up the total # for rolls of the loaded die
    unsigned seed = 0;          // Seed for RNG
    vector<int> rolls_norm;     // Create a vector to hold the roll #s for the normal die
    vector<int> rolls_loaded;   // Create a vector to hold the roll #s for the loaded die
    
    // Create seed for RNG
    seed = static_cast<unsigned>(time(0));
    
    // Seed RNG
    srand(seed);
    
    // Get user input for number of sides they would like their die to have
    cout << "Enter a number between 4 and 100 for the number of sides on your die: " << endl;
    cin >> num_sides;
    
    // Set the number of sides on both die to user input value
    norm_die.setNumSides(&num_sides);
    loaded_die.setNumSides(&num_sides);
    
    // Get & store user input for number of rolls desired
    cout << "Enter a value between 1 and 20 for the number of rolls: " << endl;
    cin >> num_rolls;
    
    // Do loop to roll the Normal die the required # of times
    do
    {
        // Get die roll and add it to the normal die vector
        rolls_norm.push_back(norm_die.getDieNum());
        
        cout << "Normal Die Number for roll #" << roll_number_norm + 1 << ": "
        << rolls_norm[roll_number_norm] << endl;
        
        // Increment normal die roll number
        roll_number_norm++;
        
    }while (roll_number_norm < num_rolls);
    
    // For loop to add values in normal die vector
    for (int a = 0; a < num_rolls; a++)
    {
        total_norm += rolls_norm[a];
    }
    
    cout << "The total number rolled with the normal die is: " << total_norm << endl
    
         << "The average number rolled with the normal die is: " << total_norm/num_rolls
    
         << endl << endl;
    
    // Do loop to roll the Loaded die the required # of times
    do
    {
        // Get die roll and add it to the loaded die vector
        rolls_loaded.push_back(loaded_die.getDieNum());
        
        cout << "Loaded Die Number for roll #" << roll_number_loaded + 1 << ": "
        << rolls_loaded[roll_number_loaded] << endl;
        
        // Increment loaded die roll number
        roll_number_loaded++;
        
    }while (roll_number_loaded < num_rolls);
    
    // For loop to add values in loaded die vector
    for (int a = 0; a < num_rolls; a++)
    {
        total_loaded += rolls_loaded[a];
    }
    
    cout << "The total number rolled with the loaded die is: " << total_loaded << endl;
    
    cout << "The average number rolled with the loaded die is: " << total_loaded/num_rolls << endl;
    
    
    return 0;
}
