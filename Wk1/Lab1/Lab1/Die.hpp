//
//  Die.hpp
//  Lab1: Die class specification file.
//
//  Created by Jason Cearley on 9/23/15.
//  Copyright © 2015 Jason Cearley. All rights reserved.
//

#ifndef Die_hpp
#define Die_hpp

#include <stdio.h>

// Create a class called Die
class Die
{
private:
    int num_sides;
    
public:
    Die();                   // Constructor Function
    void setNumSides(int*);  // Function to set # of sides on die
    int getDieNum();         // Function to roll die and get #
};

#endif
