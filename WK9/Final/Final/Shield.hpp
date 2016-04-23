//
//  Shield.hpp
//  Final
//
//  Created by Jason Cearley on 11/27/15.
//  Copyright © 2015 Jason Cearley. All rights reserved.
//

#ifndef Shield_hpp
#define Shield_hpp

#include <stdio.h>
#include "Weapons.hpp"

class Shield: public Weapons
{
public:
    Shield(); // Constructor
    virtual string useWeapon(); // Function to use the Shield
};

#endif /* Shield_hpp */
