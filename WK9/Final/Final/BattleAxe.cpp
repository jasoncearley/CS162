//
//  BattleAxe.cpp
//  Final
//
//  Created by Jason Cearley on 11/27/15.
//  Copyright © 2015 Jason Cearley. All rights reserved.
//

#include "BattleAxe.hpp"
#include <iostream>
using std::cout;
using std::endl;

/***********************************************************************
 * BattleAxe constructor used to initialize object to default values.
 **********************************************************************/
BattleAxe::BattleAxe()
{
    name = "Axe";
    attack = "a2d10";
    defense = "";
    armor = 0;
}

/***********************************************************************
 * Function to use BattleAxe
 **********************************************************************/
string BattleAxe::useWeapon()
{
    cout << "You are now using the Battle Axe." << endl;
    return attack;
}