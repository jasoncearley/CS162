//
//  RoomOne.cpp
//  Final
//
//  Created by Jason Cearley on 11/25/15.
//  Copyright © 2015 Jason Cearley. All rights reserved.
//

#include "RoomOne.hpp"
#include "Goblin.hpp"
#include "BattleAxe.hpp"

#include <iostream>
using std::cout;
using std::endl;

/***********************************************************************
 * RoomOne constructor used to initialize a room object to default
 * values.
 **********************************************************************/
RoomOne::RoomOne()
{
    one = NULL;
    two = NULL;
    three = NULL;
    four = NULL;
    opponent = new Goblin();
    weapon = new BattleAxe();
    name = "One";
    
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
void RoomOne::special_feature()
{
    cout << "You just activated Room 1 special feature and turned off the lights. You are now fighting" << endl
    << "in the dark!" << endl;
}

/***********************************************************************
 * This function is used to display a menu used to navigate to other 
 * rooms.
 **********************************************************************/
void RoomOne::menu()
{
    cout << endl
    << "Please choose a command from the following list:" << endl
    << "1. Move to Room #2" << endl
    << "2. Move to Room #3" << endl
    << "3. Move to Room #4" << endl
    << "4. Move to Room #5" << endl
    << "5. Quit current game and return to Main Menu." << endl;
}