//
//  Barbarian.hpp
//  Assign3
//
//  Created by Jason Cearley on 10/31/15.
//  Copyright © 2015 Jason Cearley. All rights reserved.
//

#ifndef Barbarian_hpp
#define Barbarian_hpp

#include <stdio.h>
#include "Creature.hpp"

// create a Barbarian class that inherits from the creature class
class Barbarian: public Creature
{
public:
    Barbarian(); // Constructor to setup Barbarian object with default values
    int getArmor(); // Function used to get the armor value of a creature. It is virtual to account for the Shadow creature
};

#endif
