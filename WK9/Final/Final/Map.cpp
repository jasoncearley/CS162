//
//  Map.cpp
//  Final
//
//  Created by Jason Cearley on 11/25/15.
//  Copyright © 2015 Jason Cearley. All rights reserved.
//

#include "Map.hpp"
#include "Menu.hpp"
#include "RoomOne.hpp"
#include "RoomTwo.hpp"
#include "RoomThree.hpp"
#include "RoomFour.hpp"
#include "RoomFive.hpp"

#include <iostream>
using std::cout;
using std::endl;

/***********************************************************************
 * Map constructor used to initialize a game object to default
 * values.
 **********************************************************************/
Map::Map()
{
    room1_ptr = NULL;
    room2_ptr = NULL;
    room3_ptr = NULL;
    room4_ptr = NULL;
    room5_ptr = NULL;
    player_location = NULL;
}

/***********************************************************************
 * Map destructor used to free all heap memory used during creation of 
 * the map.
 **********************************************************************/
void Map::deletMap()
{
    room1_ptr->deleteOpponent();
    room1_ptr->deleteWeapon();
    delete room1_ptr;
    
    room2_ptr->deleteOpponent();
    room2_ptr->deleteWeapon();
    delete room2_ptr;
    
    room3_ptr->deleteOpponent();
    room3_ptr->deleteWeapon();
    delete room3_ptr;
    
    room4_ptr->deleteOpponent();
    room4_ptr->deleteWeapon();
    delete room4_ptr;
    
    room5_ptr->deleteOpponent();
    room5_ptr->deleteWeapon();
    delete room5_ptr;
}

/***********************************************************************
 * Function used to create the map and link all rooms together. Map is
 * laid out in a spoke wheel fashion with room one in the center and 
 * room 2 at the 2 o'clock position. All other rooms are clockwise 
 * from room 2. Also rooms 3 and 5 are connected as well as rooms 2 and
 * 4.
 **********************************************************************/
void Map::create_map()
{
    // create rooms to use
    room1_ptr = new RoomOne();
    room2_ptr = new RoomTwo();
    room3_ptr = new RoomThree();
    room4_ptr = new RoomFour();
    room5_ptr = new RoomFive();
    
    // link room one to all other rooms
    room1_ptr->setRoomOne(room2_ptr);
    room1_ptr->setRoomTwo(room3_ptr);
    room1_ptr->setRoomThree(room4_ptr);
    room1_ptr->setRoomFour(room5_ptr);
    
    // link room two to all other rooms
    room2_ptr->setRoomOne(room4_ptr);
    room2_ptr->setRoomTwo(room3_ptr);
    room2_ptr->setRoomThree(room1_ptr);
    room2_ptr->setRoomFour(room5_ptr);
    
    // link room three to all other rooms
    room3_ptr->setRoomOne(room2_ptr);
    room3_ptr->setRoomTwo(room5_ptr);
    room3_ptr->setRoomThree(room4_ptr);
    room3_ptr->setRoomFour(room1_ptr);
    
    // link room four to all other rooms
    room4_ptr->setRoomOne(room1_ptr);
    room4_ptr->setRoomTwo(room3_ptr);
    room4_ptr->setRoomThree(room2_ptr);
    room4_ptr->setRoomFour(room5_ptr);
    
    // link room five to all other rooms
    room5_ptr->setRoomOne(room2_ptr);
    room5_ptr->setRoomTwo(room1_ptr);
    room5_ptr->setRoomThree(room4_ptr);
    room5_ptr->setRoomFour(room3_ptr);
    
    // place player in room one to start game
    player_location = room1_ptr;
    
    /*
    // used for testing
    cout << "room1_ptr: " << room1_ptr << endl;
    cout << "room2_ptr: " << room2_ptr << endl;
    cout << "room3_ptr: " << room3_ptr << endl;
    cout << "room4_ptr: " << room4_ptr << endl;
    cout << "room5_ptr: " << room5_ptr << endl;
    
    // used for testing
    cout << "Room 1: setRoomOne should be room 2 addy" << room1_ptr->getRoomOne() << endl;
    cout << "Room 1: setRoomTwo should be room 3 addy" << room1_ptr->getRoomTwo() << endl;
    cout << "Room 1: setRoomThree should be room 4 addy" << room1_ptr->getRoomThree() << endl;
    cout << "Room 1: setRoomFour should be room 5 addy" << room1_ptr->getRoomFour() << endl;
    
    // used for testing
    cout << "Room 2: setRoomOne should be room 4 addy" << room2_ptr->getRoomOne() << endl;
    cout << "Room 2: setRoomTwo should be room 3 addy" << room2_ptr->getRoomTwo() << endl;
    cout << "Room 2: setRoomThree should be room 1 addy" << room2_ptr->getRoomThree() << endl;
    cout << "Room 2: setRoomFour should be room 5 addy" << room2_ptr->getRoomFour() << endl;
    
    // used for testing
    cout << "Room 3: setRoomOne should be room 2 addy" << room3_ptr->getRoomOne() << endl;
    cout << "Room 3: setRoomTwo should be room 5 addy" << room3_ptr->getRoomTwo() << endl;
    cout << "Room 3: setRoomThree should be room 4 addy" << room3_ptr->getRoomThree() << endl;
    cout << "Room 3: setRoomFour should be room 1 addy" << room3_ptr->getRoomFour() << endl;
    
    // used for testing
    cout << "Room 4: setRoomOne should be room 1 addy" << room4_ptr->getRoomOne() << endl;
    cout << "Room 4: setRoomTwo should be room 3 addy" << room4_ptr->getRoomTwo() << endl;
    cout << "Room 4: setRoomThree should be room 2 addy" << room4_ptr->getRoomThree() << endl;
    cout << "Room 4: setRoomFour should be room 5 addy" << room4_ptr->getRoomFour() << endl;
    
    // used for testing
    cout << "Room 5: setRoomOne should be room 2 addy" << room5_ptr->getRoomOne() << endl;
    cout << "Room 5: setRoomTwo should be room 1 addy" << room5_ptr->getRoomTwo() << endl;
    cout << "Room 5: setRoomThree should be room 4 addy" << room5_ptr->getRoomThree() << endl;
    cout << "Room 5: setRoomFour should be room 3 addy" << room5_ptr->getRoomFour() << endl;
    */
    
}

/***********************************************************************
 * Function used to allow player to move throughout rooms or exit 
 * current game and return to Main menu if desired.
 **********************************************************************/
void Map::traverse_map()
{
    int room_selection = 0;
    
    // display room menu
    player_location->menu();
    
    // get, validate, and store user's selection
    room_selection = get_creature_select();
    
    cout << endl;
    
    if (room_selection == 1)
    {
        player_location = player_location->getRoomOne();
        cout << "You are now in room: " << player_location->getName() << endl;
    }
    
    else if (room_selection == 2)
    {
        player_location = player_location->getRoomTwo();
        cout << "You are now in room: " << player_location->getName() << endl;
    }
    
    else if (room_selection == 3)
    {
        player_location = player_location->getRoomThree();
        cout << "You are now in room: " << player_location->getName() << endl;
    }
    
    else if (room_selection == 4)
    {
        player_location = player_location->getRoomFour();
        cout << "You are now in room: " << player_location->getName() << endl;
    }
    
    else
    {
        cout << "Sorry to see you go. Good by!" << endl;
        
        player_location = NULL;
    }
}

/***********************************************************************
 * Function used to get the opponent in the room to use in the game
 * class for the Battle().
 **********************************************************************/
Creature* Map::getPlayerOpponent()
{
    return player_location->getOpponent();
}

/***********************************************************************
 * Function used to get the weapon in the room for player to use.
 **********************************************************************/
Weapons* Map::getWeapon()
{
    return player_location->getWeapon();
}

/***********************************************************************
 * Function used to get the players current location for use of the 
 * room special function in the Game class Battle().
 **********************************************************************/
Room* Map::getPlayerLocation()
{
    return player_location;
}





















