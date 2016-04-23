//
//  Player.hpp
//  Final
//
//  Created by Jason Cearley on 11/26/15.
//  Copyright © 2015 Jason Cearley. All rights reserved.
//

#ifndef Player_hpp
#define Player_hpp

#include <stdio.h>
#include "Creature.hpp"
#include "Weapons.hpp"
#include <vector>
using std::vector;

class Player: public Creature
{
protected:
    vector<Weapons*> bag;
    
public:
    Player(); // Constructor to setup Player object with default values
    int getArmor(); // Function used to get the armor value of a creature. It is virtual to account for the Shadow creature
    void applyWeapon(string); // Function allows changing attack or defence due to using different weapons
    void addToBag(Weapons*); // Function to add a weapon to the player's bag
    Weapons* removeFromBag(int); // Function to remove a weapon from the player's bag
    string displayBag(int); // Function to display the weapons in the player's bag
    int getBagSize(); // Function to get the size of the bag
    Weapons* getWeapon(int); // Function to get a weapon from the player's bag
    void restoreDefault(string); // Function to restore player's attack and defense value to normal
};

#endif /* Player_hpp */
