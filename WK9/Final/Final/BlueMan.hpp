//
//  BlueMan.hpp
//  Assign3
//
//  Created by Jason Cearley on 10/31/15.
//  Copyright © 2015 Jason Cearley. All rights reserved.
//

#ifndef BlueMan_hpp
#define BlueMan_hpp

#include <stdio.h>
#include "Creature.hpp"

// create a blueman class that inherits from the creature class
class BlueMan: public Creature
{
public:
    BlueMan();  // constructor used to setup a BlueMan object with default values
    int getArmor(); // Function used to get the armor value of a creature. It is virtual to account for the Shadow creature
};

#endif
