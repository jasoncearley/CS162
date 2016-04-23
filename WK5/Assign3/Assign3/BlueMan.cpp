//
//  BlueMan.cpp
//  Assign3
//
//  Created by Jason Cearley on 10/31/15.
//  Copyright © 2015 Jason Cearley. All rights reserved.
//

#include "BlueMan.hpp"

#include <iostream>
using std::cout;
using std::endl;

/***********************************************************************
 * BlueMan constructor used to initialize object to default values.
 **********************************************************************/
BlueMan::BlueMan()
{
    name = "Blue Man";
    Attack = "2d10";
    Defence = "3d6";
    Armor = 3;
    Strength = 12;
    
    // used for testing
    /*
     cout << "Name: " << name << endl;
     cout << "Attack: " << Attack << endl;
     cout << "Defence: " << Defence << endl;
     cout << "Armor: " << Armor << endl;
     cout << "Strength: " << Strength << endl;
     */
}

/***********************************************************************
 * This function will return the Armor value of the creature object for
 * use in the Battle function. It is used to calculate the damage done
 * during an attack.
 **********************************************************************/
int BlueMan::getArmor()
{
    return Armor;
}