//
//  Weapons.cpp
//  Final
//
//  Created by Jason Cearley on 11/27/15.
//  Copyright © 2015 Jason Cearley. All rights reserved.
//

#include "Weapons.hpp"

/***********************************************************************
 * Weapons constructor used to initialize object to default values.
 **********************************************************************/
Weapons::Weapons()
{
    name = "";
    attack = "";
    defense = "";
    armor = 0;
}

/***********************************************************************
 * Virtual Weapons destructor.
 **********************************************************************/
Weapons::~Weapons()
{
    
}

/***********************************************************************
 * Function used to restore player's attack and defense to default 
 * values.
 **********************************************************************/
string Weapons::removeWeapon()
{
    return "2d6";
}

/***********************************************************************
 * Function used to get the name of a weapon.
 **********************************************************************/
string Weapons::getName()
{
    return name;
}