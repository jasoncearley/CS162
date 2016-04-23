//
//  Shield.cpp
//  Final
//
//  Created by Jason Cearley on 11/27/15.
//  Copyright © 2015 Jason Cearley. All rights reserved.
//

#include "Shield.hpp"
#include <iostream>
using std::cout;
using std::endl;

/***********************************************************************
 * Shield constructor used to initialize object to default values.
 **********************************************************************/
Shield::Shield()
{
    name = "Shield";
    attack = "";
    defense = "d2d10";
    armor = 0;
}

/***********************************************************************
 * Function to use the Shield.
 **********************************************************************/
string Shield::useWeapon()
{
    cout << "You are now using the Shield." << endl;
    return defense;
}