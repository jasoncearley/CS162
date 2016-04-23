//
//  Shadow.hpp
//  Assign3
//
//  Created by Jason Cearley on 10/31/15.
//  Copyright © 2015 Jason Cearley. All rights reserved.
//

#ifndef Shadow_hpp
#define Shadow_hpp

#include <stdio.h>
#include "Creature.hpp"

// create a shadow class that inherits from the creature class
class TheShadow: public Creature
{
public:
    TheShadow();    // constructor used to setup a Shadow object with default values
    int getArmor(); // Function used to get the armor value of a creature.
};

#endif
