//
//  RoomFour.cpp
//  Final
//
//  Created by Jason Cearley on 11/25/15.
//  Copyright © 2015 Jason Cearley. All rights reserved.
//

#include "RoomFour.hpp"
#include "Mace.hpp"

#include <iostream>
using std::cout;
using std::endl;

/***********************************************************************
 * RoomFour constructor used to initialize a room object to default
 * values.
 **********************************************************************/
RoomFour::RoomFour()
{
    one = NULL;
    two = NULL;
    three = NULL;
    four = NULL;
    opponent = new BlueMan();
    weapon = new Mace();
    name = "Four";
    
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
void RoomFour::special_feature()
{
    cout << "You just activated Room 4 special feature and turned the Blue Man into a Smurf." << endl;
    
    opponent->setStrength(1);
}

/***********************************************************************
 * This function is used to display a menu used to navigate to other
 * rooms.
 **********************************************************************/
void RoomFour::menu()
{
    cout << endl
    << "Please choose a command from the following list:" << endl
    << "1. Move to Room #1" << endl
    << "2. Move to Room #3" << endl
    << "3. Move to Room #2" << endl
    << "4. Move to Room #5" << endl
    << "5. Quit current game and return to Main Menu." << endl;
}