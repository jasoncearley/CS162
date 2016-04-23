//
//  Menu.hpp
//  Assign3
//
//  Created by Jason Cearley on 10/30/15.
//  Copyright © 2015 Jason Cearley. All rights reserved.
//

#ifndef Menu_hpp
#define Menu_hpp

#include <stdio.h>

void menu();                    // Display menu for user to choice from
void creature_select_menu();    // Display a menu of creatures for user to select from
int user_selection();           // Function to get, validate, and return user's selection
int get_creature_select();      // Function to get, validate, and return user's creature selection
void stats();

#endif
