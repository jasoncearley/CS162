//
//  Goblin.hpp
//  Assign3
//
//  Created by Jason Cearley on 10/31/15.
//  Copyright © 2015 Jason Cearley. All rights reserved.
//

#ifndef Goblin_hpp
#define Goblin_hpp

#include <stdio.h>
#include <string>
using std::string;

#include "Creature.hpp"

// create a goblin class that inherits from the creature class
class Goblin: public Creature
{
public:
    
    Goblin(); // constructor used to setup a Goblin object with default values
    int getArmor(); // Function used to get the armor value of a creature. It is virtual to account for the Shadow creature
    virtual void heal();    // Function used to heal of winning creature before it is placed back in its team's Queue
};

#endif
