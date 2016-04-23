//
//  Shadow.cpp
//  Assign3
//
//  Created by Jason Cearley on 10/31/15.
//  Copyright © 2015 Jason Cearley. All rights reserved.
//

#include <iostream>
using std::cout;
using std::endl;

#include "Shadow.hpp"
#include "Dice.hpp"

/***********************************************************************
 * Shadow constructor used to initialize object to default values.
 **********************************************************************/
TheShadow::TheShadow()
{
    name = "The Shadow";
    user_given_name = "";
    Attack = "2d10";
    Defence = "1d6";
    Armor = 0;
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
 * Function used to apply the Shadow's special armor value. 50% of the 
 * time the shadow will not receive any damage while on defence.
 **********************************************************************/
int TheShadow::getArmor()
{
    // Variables used to keep track of the die sides and rolls
    int rolls = 1, sides = 2;
    
    // Reset Armor value to 0
    this->Armor = 0;
    
    // Roll a 2 sided die once to determine if special ability should be used
    if (DiceRoll(rolls, sides) == 1)
    {
        // set Armor value to prevent any damage
        this->Armor = 100000;
        
        cout << "The Shadow just used its special ability to foil your attack." << endl;
        
        return Armor;
    }
    
    // if special ability is not applied return 0 for an armor value
    else
    {
        return Armor;
    }
}





















