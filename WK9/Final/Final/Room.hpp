//
//  Room.hpp
//  Final
//
//  Created by Jason Cearley on 11/25/15.
//  Copyright © 2015 Jason Cearley. All rights reserved.
//

#ifndef Room_hpp
#define Room_hpp

#include <stdio.h>
#include "Creature.hpp"
#include "Weapons.hpp"

class Room
{
protected:
    Room* one;
    Room* two;
    Room* three;
    Room* four;
    Creature* opponent;
    Weapons* weapon;
    string name;
    
public:
    Room(); // constructor
    virtual ~Room(); // virtural destuctor
    void deleteOpponent();  // Function used to free heap memory by deleting the new creature
    void deleteWeapon(); // Function used to free heap memory by deleting the new weapon
    virtual void special_feature() = 0; // Pure virtual function defined by derived class
    Room* getRoomOne(); // function gets the room pointed to by Room* one
    Room* getRoomTwo(); // function gets the room pointed to by Room* two
    Room* getRoomThree(); // function gets the room pointed to by Room* three
    Room* getRoomFour(); // function gets the room pointed to by Room* four
    void setRoomOne(Room*); // function sets the room pointed to by Room* one
    void setRoomTwo(Room*); // function sets the room pointed to by Room* two
    void setRoomThree(Room*); // function sets the room pointed to by Room* three
    void setRoomFour(Room*); // function sets the room pointed to by Room* four
    virtual void menu() = 0; // pure virtual function defined by derived class
    Creature* getOpponent();    //function is used to get the opponent in the room.
    Weapons* getWeapon(); // function used to get the weapon in the room
    string getName(); // function used to get the name of the room
};

#endif
