//
//  LoadedDie.cpp
//  Lab1: LoadedDie class implementation file.
//
//  Created by Jason Cearley on 9/23/15.
//  Copyright © 2015 Jason Cearley. All rights reserved.
//

#include "LoadedDie.hpp" // LoadedDie class specification file.
#include <cstdlib>       // Header file needed for rand/srand.

/****************************************************
 *             LoadedDie::LoadedDie                  *
 * This is the constructor. It initializes the       *
 * num_sides class member variable.                  *
 ****************************************************/
LoadedDie::LoadedDie()
{
    num_sides = 0;
}


/****************************************************
 *             LoadedDie::setNumSides                *
 * This function sets the number of sides on the     *
 * loaded die based on the user's input. This will   *
 * be the same as the normal die.                    *
 ****************************************************/
void LoadedDie::setNumSides(int* num)
{
    num_sides = *num;
}


/****************************************************
 *             LoadedDie::getDieNum                  *
 * This function returns a value from a single roll  *
 * of the die. The value will tend to be > the       *
 * normal die.                                       *
 ****************************************************/
int LoadedDie::getDieNum()
{
    int number = 0;     // Variable to store random #
    
    // Get random # b/w 1 & the # of sides on the die
    number = rand() % num_sides + 1;
    
    // if/else statement to return a value higher than normal
    // but not > the # of sides on the die
    if (number < (num_sides/2))
    {
        return number * 2;
    }
    
    else
    {
        return number;
    }
}