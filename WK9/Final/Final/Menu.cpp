//
//  Menu.cpp
//  Assign3
//
//  Created by Jason Cearley on 10/30/15.
//  Copyright © 2015 Jason Cearley. All rights reserved.
//

#include "Menu.hpp"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;

#include <cstdlib>
using std::atoi;

/***********************************************************************
 * This function displays the selection menu for the user to choose
 * from.
 **********************************************************************/
void menu()
{
    cout << endl
    << "Please choose a command from the following list:" << endl
    << "1. Play a game." << endl
    << "2. Quit." << endl;
}

/***********************************************************************
 * This function displays the selection menu for the user to choose
 * from.
 **********************************************************************/
void creature_select_menu()
{
    cout << endl
    << "Please choose a creature from the following list:" << endl
    << "1. Goblin" << endl
    << "2. Barbarian" << endl
    << "3. Reptile People" << endl
    << "4. Blue Men" << endl
    << "5. The Shadow" << endl;
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
        
        found1 = static_cast<unsigned>(number.find_first_not_of ("12", 0));
        
        if (found1 != 4294967295 || number.size() > 1)
        {
            cout << "That is not a valid entry. Please select a number "
            << "between 1 and 2: "
            << endl;
        }
    }
    while (found1 != 4294967295 || number.size() > 1);
    
    // atoi converts string into an integer
    return atoi (number.c_str());
}

/***********************************************************************
 * This function gets the user's creature choice, validates it, and returns
 * it back to main.
 ***********************************************************************/
int get_creature_select()
{
    string number = "";  // Variable to hold user's input
    unsigned found1 = 0; // Variable used to detect non-numeric entries
    
    // Do/while loop ensures user input only contains valid numbers
    do
    {
        getline(cin, number);
        
        found1 = static_cast<unsigned>(number.find_first_not_of ("12345", 0));
        
        if (found1 != 4294967295 || number.size() > 1)
        {
            cout << "That is not a valid entry. Please select a number "
            << "between 1 and 5: "
            << endl;
        }
    }
    while (found1 != 4294967295 || number.size() > 1);
    
    // atoi converts string into an integer
    return atoi (number.c_str());
}

/***********************************************************************
 * This function displays the selection menu for the user to choose
 * from.
 **********************************************************************/
void stats()
{
    cout << endl
    << "Please choose a command from the following list:" << endl
    << "1. See Entire List of Finishers In Order." << endl
    << "2. None" << endl;
}

/***********************************************************************
 * This function gets the user's weapon choice, validates it, and returns
 * it.
 ***********************************************************************/
int weapon_selection()
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
 * This function gets the user's weapon choice, validates it, and returns
 * it.
 ***********************************************************************/
int weapon_selection2()
{
    string number = "";  // Variable to hold user's input
    unsigned found1 = 0; // Variable used to detect non-numeric entries
    
    // Do/while loop ensures user input only contains valid numbers
    do
    {
        getline(cin, number);
        
        found1 = static_cast<unsigned>(number.find_first_not_of ("123", 0));
        
        if (found1 != 4294967295 || number.size() > 1)
        {
            cout << "That is not a valid entry. Please select a number "
            << "between 1 and 3 "
            << endl;
        }
    }
    while (found1 != 4294967295 || number.size() > 1);
    
    // atoi converts string into an integer
    return atoi (number.c_str());
}







