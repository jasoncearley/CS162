//
//  Mace.hpp
//  Final
//
//  Created by Jason Cearley on 11/27/15.
//  Copyright © 2015 Jason Cearley. All rights reserved.
//

#ifndef Mace_hpp
#define Mace_hpp

#include <stdio.h>
#include "Weapons.hpp"

class Mace: public Weapons
{
public:
    Mace(); // Constructor
    virtual string useWeapon(); // Function to use the Mace
};

#endif /* Mace_hpp */
