//
//  Menu.cpp
//  Assignment1: Menu implimentation file.
//
//  Created by Jason Cearley on 9/30/15.
//  Copyright © 2015 Jason Cearley. All rights reserved.
//

#include "Menu.hpp"

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
    << "1. Display a fixed oscillator." << endl
    << "2. Display a glider." << endl
    << "3. Display a glider cannon." << endl
    << "4. Quit." << endl;
}

/***********************************************************************
 * This function gets the user's menu choice, validates it, and returns
 * it back to main.
 ***********************************************************************/
int user_selection()
{
    string number = "";  // Variable to hold user's input
    unsigned found1 = 0; // Variable used to detect non-numeric entries
    
    // Do/while loop ensures only contains valid numbers
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
 * This function displays the selection menu for the user to choose
 * from.
 **********************************************************************/
void showStartingLocal()
{
    cout << "Select which quadrant you would like your pattern to start in." << endl
    << "1. Upper Left" << endl
    << "2. Upper right" << endl
    << "3. Lower left" << endl
    << "4. Lower right" << endl
    << "5. Center" << endl;
}

/***********************************************************************
 * This function gets the user's menu choice, validates it, and returns
 * it back to main.
 ***********************************************************************/
int getStartingLocal()
{
    string number = "";  // Variable to hold user's input
    unsigned found1 = 0; // Variable used to detect non-numeric entries
    
    // Do/while loop ensures only contains valid numbers
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