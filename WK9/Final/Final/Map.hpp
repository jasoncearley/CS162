//
//  Map.hpp
//  Final
//
//  Created by Jason Cearley on 11/25/15.
//  Copyright © 2015 Jason Cearley. All rights reserved.
//

#ifndef Map_hpp
#define Map_hpp

#include <stdio.h>
#include "Room.hpp"
#include "Weapons.hpp"

class Map
{
protected:
    Room* room1_ptr;
    Room* room2_ptr;
    Room* room3_ptr;
    Room* room4_ptr;
    Room* room5_ptr;
    Room* player_location;
    
public:
    Map(); // constructor
    void deletMap(); // Map destructor used to free all heap memory used during creation of the map.
    void create_map(); //Function used to create the map and link all rooms together.
    void traverse_map(); //Function used to allow player to move throughout rooms or exit current game
    Creature* getPlayerOpponent(); //Function used to get the opponent in the room
    Weapons* getWeapon(); // Function used to get the weapon in the room
    Room* getPlayerLocation(); //Function used to get the players current location
};

#endif /* Map_hpp */
