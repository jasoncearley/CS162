//
//  RoomThree.cpp
//  Final
//
//  Created by Jason Cearley on 11/25/15.
//  Copyright © 2015 Jason Cearley. All rights reserved.
//

#include "RoomThree.hpp"
#include "Sword.hpp"
#include <iostream>
using std::cout;
using std::endl;

/***********************************************************************
 * RoomThree constructor used to initialize a room object to default
 * values.
 **********************************************************************/
RoomThree::RoomThree()
{
    one = NULL;
    two = NULL;
    three = NULL;
    four = NULL;
    opponent = new Reptile();
    weapon = new Sword();
    name = "Three";
    
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
void RoomThree::special_feature()
{
    cout << "You just activated Room 3 special feature and turned the Reptile into a miniture Reptile." << endl;
    
    opponent->setStrength(1);
}

/***********************************************************************
 * This function is used to display a menu used to navigate to other
 * rooms.
 **********************************************************************/
void RoomThree::menu()
{
    cout << endl
    << "Please choose a command from the following list:" << endl
    << "1. Move to Room #2" << endl
    << "2. Move to Room #5" << endl
    << "3. Move to Room #4" << endl
    << "4. Move to Room #1" << endl
    << "5. Quit current game and return to Main Menu." << endl;
}