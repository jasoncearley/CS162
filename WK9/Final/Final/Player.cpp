//
//  Player.cpp
//  Final
//
//  Created by Jason Cearley on 11/26/15.
//  Copyright © 2015 Jason Cearley. All rights reserved.
//

#include "Player.hpp"
#include <iostream>
using std::cout;
using std::endl;

/***********************************************************************
 * Player constructor used to initialize object to default values.
 **********************************************************************/
Player::Player()
{
    name = "Player";
    user_given_name = "";
    Attack = "2d6";
    Defence = "2d6";
    Armor = 4;
    Strength = 12;
    team = 0;
    wins = 0;
    damage_inflicted = 0;
    bag.push_back(NULL);
    
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
int Player::getArmor()
{
    return Armor;
}

/***********************************************************************
 * This function allows changing Attack or Defence due to using
 * different weapons.
 **********************************************************************/
void Player::applyWeapon(string code)
{
    if (code[0] == 'a')
    {
        Attack = code.substr(1, code.length());
    }
    
    else if (code[0] == 'd')
    {
        Defence = code.substr(1, code.length());
    }
}

/***********************************************************************
 * This function adds a weapon to the player's bag.
 **********************************************************************/
void Player::addToBag(Weapons* w)
{
    bag.push_back(w);
    cout << endl << w->getName() << " has been added to your bag." << endl;
}

/***********************************************************************
 * This function removes a weapon to the player's bag.
 **********************************************************************/
Weapons* Player::removeFromBag(int i)
{
    Weapons* temp = NULL;
    
    temp = bag.at(i);
    
    bag.erase(bag.begin() + i);
    
    return temp;
}

/***********************************************************************
 * This function displays the weapons in the player's bag.
 **********************************************************************/
string Player::displayBag(int item)
{
    return bag.at(item)->getName();
}

/***********************************************************************
 * This function get the size of the player's bag.
 **********************************************************************/
int Player::getBagSize()
{
    return static_cast<int>(bag.size());
}

/***********************************************************************
 * This function gets a weapon from the player's bag for use.
 **********************************************************************/
Weapons* Player::getWeapon(int theOne)
{
    return bag[theOne];
}

/***********************************************************************
 * This function restores the player's attack and defense value to 
 * normal.
 **********************************************************************/
void Player::restoreDefault(string def)
{
    Attack = def;
    Defence = def;
}












