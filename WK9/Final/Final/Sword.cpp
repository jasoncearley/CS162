//
//  Sword.cpp
//  Final
//
//  Created by Jason Cearley on 11/27/15.
//  Copyright © 2015 Jason Cearley. All rights reserved.
//

#include "Sword.hpp"
#include <iostream>
using std::cout;
using std::endl;

/***********************************************************************
 * Sword constructor used to initialize object to default values.
 **********************************************************************/
Sword::Sword()
{
    name = "Sword";
    attack = "a3d10";
    defense = "";
    armor = 0;
}

/***********************************************************************
 * Function to use the Sword.
 **********************************************************************/
string Sword::useWeapon()
{
    cout << "You are now using the Sword." << endl;
    return attack;
}