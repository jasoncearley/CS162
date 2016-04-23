//
//  Mace.cpp
//  Final
//
//  Created by Jason Cearley on 11/27/15.
//  Copyright © 2015 Jason Cearley. All rights reserved.
//

#include "Mace.hpp"
#include <iostream>
using std::cout;
using std::endl;

/***********************************************************************
 * Mace constructor used to initialize object to default values.
 **********************************************************************/
Mace::Mace()
{
    name = "Mace";
    attack = "a2d12";
    defense = "";
    armor = 0;
}

/***********************************************************************
 * Function to use the Mace.
 **********************************************************************/
string Mace::useWeapon()
{
    cout << "You are now using the Mace." << endl;
    return attack;
}