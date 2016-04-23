//
//  LoadedDie.hpp
//  Lab1: LoadedDie class specification file.
//
//  Created by Jason Cearley on 9/23/15.
//  Copyright © 2015 Jason Cearley. All rights reserved.
//

#ifndef LoadedDie_hpp
#define LoadedDie_hpp

#include <stdio.h>

// Create a class called LoadedDie
class LoadedDie
{
private:
    int num_sides;
    
public:
    LoadedDie();             // Constructor Function
    void setNumSides(int*);  // Function to set # of sides on die
    int getDieNum();         // Function to roll die and get #
};

#endif
