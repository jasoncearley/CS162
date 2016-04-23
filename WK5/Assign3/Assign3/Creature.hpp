//
//  Creature.hpp
//  Assign3
//
//  Created by Jason Cearley on 10/30/15.
//  Copyright © 2015 Jason Cearley. All rights reserved.
//

#ifndef Creature_hpp
#define Creature_hpp

#include <stdio.h>
#include <string>
using std::string;

// create an abstract creature class that all other creatures will inherit from
class Creature
{
protected:
    string name;
    string Attack;
    string Defence;
    int Armor;
    int Strength;
    
public:
    Creature();     // Default constructor to setup creature object with default values
    virtual ~Creature(); // virtual destructor to allow subclass destructors to override if needed 
    Creature(string, string, string, int, int); // Constructor used to setup a creature object with non-default values
    string getName();   // Function to get the name of the creature
    int getAttack(bool);    // Function to determine the attack roll for the creature
    int getDefence();   // Function to determine the defence roll for the creature
    virtual int getArmor()= 0; // Function used to get the armor value of a creature. It is virtual to account for the Shadow creature
    int getStrength();  // Function used to get the strength of a creature
    void setStrength(int);  // Function used to update  the strength of a creature following a battle with damage inflicted
};

#endif
