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
    string user_given_name;
    string Attack;
    string Defence;
    int Armor;
    int Strength;
    int team;
    int wins;
    int damage_inflicted;
    
public:
    Creature();     // Default constructor to setup creature object with default values
    virtual ~Creature(); // virtual destructor to allow subclass destructors to override if needed 
    Creature(string, string, string, string, int, int, int, int, int); // Constructor used to setup a creature object with non-default values
    string getName();   // Function to get the name of the creature
    void setUserGivenName(string);
    string getUserGivenName();
    int getAttack(bool);    // Function to determine the attack roll for the creature
    int getDefence();   // Function to determine the defence roll for the creature
    virtual int getArmor()= 0; // Function used to get the armor value of a creature. It is virtual to account for the Shadow creature
    int getStrength();  // Function used to get the strength of a creature
    void setStrength(int);  // Function used to update  the strength of a creature following a battle with damage inflicted
    int getTeam();   // Function to get what team a creature is on
    void setTeam(int);  // Funciton to set what team a creature is on
    int getWins();  // Function to get the wins of a creature
    void setWins(int);  // Function to set the wins of a creature
    int getDamageInflicted();   // Function to get the amount of damage a creature inflicted on its oppoents
    void setDamageInflicted(int);   // Function to the amount of damage a creature inflicted on its oppoents
    virtual void heal();    // Function used to heal of winning creature before it is placed back in its team's Queue
};

#endif
