//
//  Room.cpp
//  Final
//
//  Created by Jason Cearley on 11/25/15.
//  Copyright © 2015 Jason Cearley. All rights reserved.
//

#include "Room.hpp"

/***********************************************************************
 * Room constructor used to initialize a room object to default
 * values.
 **********************************************************************/
Room::Room()
{
    one = NULL;
    two = NULL;
    three = NULL;
    four = NULL;
    opponent = NULL;
    weapon = NULL;
    name = "";
}

/***********************************************************************
 * Virtual Room destructor used to free momory.
 **********************************************************************/
Room::~Room()
{
    
}

/***********************************************************************
 * Function used to free heap memory by deleting the new creature
 * created when the room is created with new.
 **********************************************************************/
void Room::deleteOpponent()
{
    delete opponent;
}

/***********************************************************************
 * Function used to free heap memory by deleting the new weapon
 * created when the room is created with new.
 **********************************************************************/
void Room::deleteWeapon()
{
    delete weapon;
}

/***********************************************************************
 * This function gets the room pointed to by Room* one.
 **********************************************************************/
Room* Room::getRoomOne()
{
    return one;
}

/***********************************************************************
 * This function gets the room pointed to by Room* two.
 **********************************************************************/
Room* Room::getRoomTwo()
{
    return two;
}

/***********************************************************************
 * This function gets the room pointed to by Room* three.
 **********************************************************************/
Room* Room::getRoomThree()
{
    return three;
}

/***********************************************************************
 * This function gets the room pointed to by Room* four.
 **********************************************************************/
Room* Room::getRoomFour()
{
    return four;
}

/***********************************************************************
 * This function sets the room pointed to by Room* one.
 **********************************************************************/
void Room::setRoomOne(Room * o)
{
    one = o;
}

/***********************************************************************
 * This function sets the room pointed to by Room* two.
 **********************************************************************/
void Room::setRoomTwo(Room * t)
{
    two = t;
}

/***********************************************************************
 * This function sets the room pointed to by Room* three.
 **********************************************************************/
void Room::setRoomThree(Room * th)
{
    three = th;
}

/***********************************************************************
 * This function sets the room pointed to by Room* four.
 **********************************************************************/
void Room::setRoomFour(Room * f)
{
    four = f;
}

/***********************************************************************
 * This function is used to get the opponent in the room.
 **********************************************************************/
Creature* Room::getOpponent()
{
    return opponent;
}

/***********************************************************************
 * This function is used to get the weapon in the room.
 **********************************************************************/
Weapons* Room::getWeapon()
{
    return weapon;
}

/***********************************************************************
 * This function is used to get the name of the room.
 **********************************************************************/
string Room::getName()
{
    return name;
}



















