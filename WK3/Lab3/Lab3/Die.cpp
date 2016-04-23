//
//  Die.cpp
//  Lab1: Die class implementation file.
//
//  Created by Jason Cearley on 9/23/15.
//  Copyright © 2015 Jason Cearley. All rights reserved.
//

#include "Die.hpp"  // Die class specification file.
#include <cstdlib>  // Header file needed for rand/srand.

/****************************************************
*                     Die::Die                      *
* This is the constructor. It initializes the       *
* num_sides class member variable.                  *
****************************************************/
Die::Die()
{
    num_sides = 0;
}


/****************************************************
*                  Die::setNumSides                 *
* This function sets the number of sides on the die *
* based on the user's input.                        *
****************************************************/
void Die::setNumSides(int num)
{
    num_sides = num;
}


/****************************************************
 *                  Die::getDieNum                   *
 * This function returns a value from a single roll  *
 * of the die.                                       *
 ****************************************************/
int Die::getDieNum()
{
    // Variable to store random #
    int number = 0;
    
    // Get random # b/w 1 & the # of sides on the die
    number = rand() % num_sides + 1;
    
    // Return value
    return number;
}

