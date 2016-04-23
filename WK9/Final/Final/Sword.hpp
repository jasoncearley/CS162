//
//  Sword.hpp
//  Final
//
//  Created by Jason Cearley on 11/27/15.
//  Copyright © 2015 Jason Cearley. All rights reserved.
//

#ifndef Sword_hpp
#define Sword_hpp

#include <stdio.h>
#include "Weapons.hpp"

class Sword: public Weapons
{
public:
    Sword(); // Constructor
    virtual string useWeapon(); // Function to use the Sword
};

#endif /* Sword_hpp */
