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

/***********************************************************************
 * Goblin constructor used to initialize object to default values.
 **********************************************************************/
Goblin::Goblin()
{
    name = "Goblin";
    Attack = "2d6";
    Defence = "1d6";
    Armor = 3;
    Strength = 8;
    
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
int Goblin::getArmor()
{
    return Armor;
}