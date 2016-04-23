//
//  RiotGear.hpp
//  Final
//
//  Created by Jason Cearley on 11/27/15.
//  Copyright © 2015 Jason Cearley. All rights reserved.
//

#ifndef RiotGear_hpp
#define RiotGear_hpp

#include <stdio.h>
#include "Weapons.hpp"

class RiotGear: public Weapons
{
public:
    RiotGear(); // Constructor
    virtual string useWeapon(); // Function to use RiotGear
};

#endif /* RiotGear_hpp */
