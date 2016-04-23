//
//  Menu.hpp
//  Assignment1: Menu specification file.
//
//  Created by Jason Cearley on 9/30/15.
//  Copyright © 2015 Jason Cearley. All rights reserved.
//

#ifndef Menu_hpp
#define Menu_hpp

#include <stdio.h>

void menu();               // Function to display a menu of choices to user.
int user_selection();      // Function to get and validate user's input for the menu choice.
int val_num_sides();       // Funciton used to validate number of sides entered by user
int val_num_rolls();       // Funciton used to validate number of rolls entered by user

#endif
