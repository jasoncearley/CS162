//
//  Dice.cpp
//  Assign3
//
//  Created by Jason Cearley on 11/4/15.
//  Copyright © 2015 Jason Cearley. All rights reserved.
//

#include "Dice.hpp"
#include <cstdlib>
#include <iostream>
using std::cout;
using std::endl;


/***********************************************************************
 * This function rolls a die with the correct number of sides the
 * correct number of times. The function will return the total number
 * from the roll(s).
 **********************************************************************/
int DiceRoll(int rolls, int sides)
{
    int num = 0; // Variable to hold random number
    
    // Roll die correct number of times with the correct number of sides
    for (int a = 0; a < rolls; a++)
    {
        num  += rand() % sides + 1;
        
        // used for testing
        //cout << "Roll " << a + 1 << " total: " << num << endl;
    }
    
    // Return total from die roll(s)
    return num;
}