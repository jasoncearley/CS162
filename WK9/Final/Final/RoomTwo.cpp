//
//  RoomTwo.cpp
//  Final
//
//  Created by Jason Cearley on 11/25/15.
//  Copyright © 2015 Jason Cearley. All rights reserved.
//

#include "RoomTwo.hpp"
#include "Shield.hpp"
#include <iostream>
using std::cout;
using std::endl;

/***********************************************************************
 * RoomTwo constructor used to initialize a room object to default
 * values.
 **********************************************************************/
RoomTwo::RoomTwo()
{
    one = NULL;
    two = NULL;
    three = NULL;
    four = NULL;
    opponent = new Barbarian();
    weapon = new Shield();
    name = "Two";
    
    // used for testing
    /*
     cout << "*One: " << one << endl;
     cout << "*two: " << two << endl;
     cout << "*three: " << three << endl;
     cout << "*four: " << four << endl;
     */
}

/***********************************************************************
 * This function is used to apply a special feature of this room.
 **********************************************************************/
void RoomTwo::special_feature()
{
    cout << "You just caused a cave in and trapped your opponent under a pile of bolders!" << endl;
    
    opponent->setStrength(0);
}

/***********************************************************************
 * This function is used to display a menu used to navigate to other
 * rooms.
 **********************************************************************/
void RoomTwo::menu()
{
    cout << endl
    << "Please choose a command from the following list:" << endl
    << "1. Move to Room #4" << endl
    << "2. Move to Room #3" << endl
    << "3. Move to Room #1" << endl
    << "4. Move to Room #5" << endl
    << "5. Quit current game and return to Main Menu." << endl;
}