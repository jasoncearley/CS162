//
//  Menu.cpp
//  Assignment1: Menu implimentation file.
//
//  Created by Jason Cearley on 9/30/15.
//  Copyright © 2015 Jason Cearley. All rights reserved.
//

#include "Menu.hpp" // Menu specification file.
#include <iostream> // Header file for some common functions
using std::string;
using std::cout;
using std::cin;
using std::endl;

#include <cstdlib>
using std::atoi;

/***********************************************************************
 * This function displays the selection menu for the user to choose
 * from.
 **********************************************************************/
void menu()
{
    cout << "Please choose a command from the following list:" << endl
    << "1. Only Player 1 is using the Loaded Die." << endl
    << "2. Only Player 2 is using the Loaded Die." << endl
    << "3. Both Players are using the Loaded Die." << endl
    << "4. Neither Player is using the Loaded Die." << endl;
}

/***********************************************************************
 * This function gets the user's menu choice, validates it, and returns
 * it back to main.
 ***********************************************************************/
int user_selection()
{
    string number = "";  // Variable to hold user's input
    unsigned found1 = 0; // Variable used to detect non-numeric entries
    
    // Do/while loop ensures user input only contains valid numbers
    do
    {
        getline(cin, number);
        
        found1 = static_cast<unsigned>(number.find_first_not_of ("1234", 0));
        
        if (found1 != 4294967295 || number.size() > 1)
        {
            cout << "That is not a valid entry. Please select a number "
            << "between 1 and 4: "
            << endl;
        }
    }
    while (found1 != 4294967295 || number.size() > 1);
    
    // atoi converts string into an integer
    return atoi (number.c_str());
}

/***********************************************************************
 * This function gets the user's number of sides, validates it, and 
 * returns it.
 ***********************************************************************/
int val_num_sides()
{
    string number = "";  // Variable to hold user's input
    unsigned found1 = 0; // Variable used to detect non-numeric entries
    
    // Do/while loop ensures user input only contains valid numbers
    do
    {
        getline(cin, number);
        
        found1 = static_cast<unsigned>(number.find_first_not_of ("0123456789", 0));
        
        if (found1 != 4294967295 || atoi(number.c_str()) < 4 || atoi(number.c_str()) > 100)
        {
            cout << "That is not a valid entry. Please select a number "
            << "between 4 and 100: "
            << endl;
        }
    }
    while (found1 != 4294967295 || atoi(number.c_str()) < 4 || atoi(number.c_str()) > 100);
    
    // atoi converts string into an integer
    return atoi (number.c_str());
}


/***********************************************************************
 * This function gets the user's number of rolls, validates it, and
 * returns it.
 ***********************************************************************/
int val_num_rolls()
{
    string number = "";  // Variable to hold user's input
    unsigned found1 = 0; // Variable used to detect non-numeric entries
    
    // Do/while loop ensures user input only contains valid numbers
    do
    {
        getline(cin, number);
        
        found1 = static_cast<unsigned>(number.find_first_not_of ("0123456789", 0));
        
        if (found1 != 4294967295 || atoi(number.c_str()) < 1 || atoi(number.c_str()) > 20)
        {
            cout << "That is not a valid entry. Please select a number "
            << "between 4 and 100: "
            << endl;
        }
    }
    while (found1 != 4294967295 || atoi(number.c_str()) < 1 || atoi(number.c_str()) > 20);
    
    // atoi converts string into an integer
    return atoi (number.c_str());
}













