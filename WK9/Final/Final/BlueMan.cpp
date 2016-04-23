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
    user_given_name = "";
    Attack = "2d10";
    Defence = "3d6";
    Armor = 3;
    Strength = 12;
    team = 0;
    wins = 0;
    damage_inflicted = 0;
    
    // used for testing
    /*
    cout << "Name: " << name << endl;
    cout << "User's given name: " << user_given_name << endl;
    cout << "Attack: " << Attack << endl;
    cout << "Defence: " << Defence << endl;
    cout << "Armor: " << Armor << endl;
    cout << "Strength: " << Strength << endl;
    cout << "Team: " << team << endl;
    cout << "Wins: " << wins << endl;
    cout << "Damage Inflicted: " << damage_inflicted << endl;
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