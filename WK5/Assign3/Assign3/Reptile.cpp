//
//  Reptile.cpp
//  Assign3
//
//  Created by Jason Cearley on 10/31/15.
//  Copyright © 2015 Jason Cearley. All rights reserved.
///Users/Jason/Documents/OSU/CS162/WK5/Assign3/Assign3/Game.hpp

#include "Reptile.hpp"

#include <iostream>
using std::cout;
using std::endl;

/***********************************************************************
 * Reptile constructor used to initialize object to default values.
 **********************************************************************/
Reptile::Reptile()
{
    name = "Reptile Person";
    Attack = "3d6";
    Defence = "1d6";
    Armor = 7;
    Strength = 18;
    
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
int Reptile::getArmor()
{
    return Armor;
}