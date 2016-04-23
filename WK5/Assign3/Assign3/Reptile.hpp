//
//  Reptile.hpp
//  Assign3
//
//  Created by Jason Cearley on 10/31/15.
//  Copyright © 2015 Jason Cearley. All rights reserved.
//

#ifndef Reptile_hpp
#define Reptile_hpp

#include <stdio.h>
#include "Creature.hpp"

// create a reptile class that inherits from the creature class
class Reptile: public Creature
{
public:
    Reptile();  // constructor used to setup a Reptile object with default values
    int getArmor(); // Function used to get the armor value of a creature. It is virtual to account for the Shadow creature
};

#endif
