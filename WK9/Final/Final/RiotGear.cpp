//
//  RiotGear.cpp
//  Final
//
//  Created by Jason Cearley on 11/27/15.
//  Copyright © 2015 Jason Cearley. All rights reserved.
//

#include "RiotGear.hpp"
#include <iostream>
using std::cout;
using std::endl;

/***********************************************************************
 * RiotGear constructor used to initialize object to default values.
 **********************************************************************/
RiotGear::RiotGear()
{
    name = "Riot Gear";
    attack = "";
    defense = "d3d10";
    armor = 0;
}

/***********************************************************************
 * Function to use RiotGear.
 **********************************************************************/
string RiotGear::useWeapon()
{
    cout << "You are now using the Riot Gear." << endl;
    return defense;
}