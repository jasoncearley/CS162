//
//  Weapons.hpp
//  Final
//
//  Created by Jason Cearley on 11/27/15.
//  Copyright © 2015 Jason Cearley. All rights reserved.
//

#ifndef Weapons_hpp
#define Weapons_hpp

#include <stdio.h>
#include <string>
using std::string;

class Weapons
{
protected:
    string name;
    string attack;
    string defense;
    int armor;
    
public:
    Weapons(); // Constructor
    virtual ~Weapons(); // Destructor
    virtual string useWeapon() = 0; // Function used to return a string based on weapon used
    string removeWeapon(); // Function used to restore attack and defense values to norm
    string getName(); // Get the name of a weapon
};

#endif /* Weapons_hpp */
