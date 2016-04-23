//
//  Goblin.cpp
//  Assign3
//
//  Created by Jason Cearley on 10/31/15.
//  Copyright © 2015 Jason Cearley. All rights reserved.
//

#include <iostream>
using std::cout;
using std::endl;
#include "Goblin.hpp"
#include "Dice.hpp"

/***********************************************************************
 * Goblin constructor used to initialize object to default values.
 **********************************************************************/
Goblin::Goblin()
{
    name = "Goblin";
    user_given_name = "";
    Attack = "2d6";
    Defence = "1d6";
    Armor = 3;
    Strength = 8;
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
int Goblin::getArmor()
{
    return Armor;
}

/***********************************************************************
 * This function is used to heal a winning creature. It will raise the
 * strength value of the creature by a certain percentage.
 **********************************************************************/
void Goblin::heal()
{
    double percent = 0.0;
    
    // Roll a 10 sided die once and convert value returned to a decimal
    percent = static_cast<double>(DiceRoll(1, 10))/10.0;
    
    cout << "Healing....." << endl
    << "Your strength was " << Strength << " and has been raised by "
    << ((8.0 - static_cast<double>(Strength)) * percent) << ".";
    
    Strength = Strength + ((8.0 - static_cast<double>(Strength)) * percent);
    
    cout << " It is now " << Strength << "." << endl;
}