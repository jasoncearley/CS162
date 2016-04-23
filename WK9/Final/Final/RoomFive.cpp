//
//  RoomFive.cpp
//  Final
//
//  Created by Jason Cearley on 11/25/15.
//  Copyright © 2015 Jason Cearley. All rights reserved.
//

#include "RoomFive.hpp"
#include "RiotGear.hpp"

#include <iostream>
using std::cout;
using std::endl;

/***********************************************************************
 * RoomFive constructor used to initialize a room object to default
 * values.
 **********************************************************************/
RoomFive::RoomFive()
{
    one = NULL;
    two = NULL;
    three = NULL;
    four = NULL;
    opponent = new TheShadow();
    weapon = new RiotGear();
    name = "Five";
    
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
void RoomFive::special_feature()
{
    cout << "You just activated Room 5 special feature and made The Shadow disappear forever." << endl;
    
    opponent->setStrength(0);
}

/***********************************************************************
 * This function is used to display a menu used to navigate to other
 * rooms.
 **********************************************************************/
void RoomFive::menu()
{
    cout << endl
    << "Please choose a command from the following list:" << endl
    << "1. Move to Room #2" << endl
    << "2. Move to Room #1" << endl
    << "3. Move to Room #4" << endl
    << "4. Move to Room #3" << endl
    << "5. Quit current game and return to Main Menu." << endl;
}