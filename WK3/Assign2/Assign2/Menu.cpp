//
//  Menu.cpp
//  Assign2
//
//  Created by Jason Cearley on 10/13/15.
//  Copyright © 2015 Jason Cearley. All rights reserved.
//

#include "Menu.hpp"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;

#include <cstdlib>
using std::atoi;


/***********************************************************************
 * This function displays the selection menu for the user to choose
 * from.
 **********************************************************************/
void menu()
{
    cout << endl << endl;
    cout << "Please choose a command from the following list:" << endl;
    cout << "1. Add Item To Your Cart." << endl;
    cout << "2. View Items In Cart." << endl;
    cout << "3. Remove an Item From Your Cart." << endl;
    cout << "4. View Total Price Of Items In Cart." << endl;
    cout << "5. Quit." << endl << endl;
}

/***********************************************************************
 * This function gets the user's menu choice, validates it, and returns
 * it.
 ***********************************************************************/
int user_selection()
{
    string number = "";  // Variable to hold user's input
    unsigned found1 = 0; // Variable used to detect non-numeric entries
    
    // Do/while loop ensures only contains valid numbers
    do
    {
        getline (cin, number);
        
        found1 = static_cast<unsigned>(number.find_first_not_of ("12345", 0));
        
        if (found1 != 4294967295 || number.size() > 1)
        {
            cout << "That is not a valid entry. Please enter a number "
            << "between 1 and 5: "
            << endl;
        }
    }
    while (found1 != 4294967295 || number.size() > 1);
    
    // atoi converts string into an integer
    return atoi (number.c_str());
}

/***********************************************************************
 * This function gets the user's input, validates it, and returns
 * it as a double.
 ***********************************************************************/
double user_selection_d()
{
    string number = "";  // Variable to hold user's input
    unsigned found1 = 0; // Variable used to detect non-numeric entries
    
    // Do/while loop ensures only contains valid numbers
    do
    {
        getline (cin, number);
        
        found1 = static_cast<unsigned>(number.find_first_not_of ("1234567890-.", 0));
        
        if (found1 != 4294967295 || number.size() > 20)
        {
            cout << "That is not a valid entry. Please try again: "
            << endl;
        }
    }
    while (found1 != 4294967295 || number.size() > 20);
    
    // atoi converts string into a double
    return atof (number.c_str());
}

/***********************************************************************
 * This function gets the user's input, validates it, and returns
 * it as an integer.
 ***********************************************************************/
int user_selection_i()
{
    string number = "";  // Variable to hold user's input
    unsigned found1 = 0; // Variable used to detect non-numeric entries
    
    // Do/while loop ensures only contains valid numbers
    do
    {
        getline (cin, number);
        
        found1 = static_cast<unsigned>(number.find_first_not_of ("1234567890", 0));
        
        if (found1 != 4294967295 || number.size() > 20)
        {
            cout << "That is not a valid entry. Please try again: "
            << endl;
        }
    }
    while (found1 != 4294967295 || number.size() > 20);
    
    // atoi converts string into an integer
    return atoi (number.c_str());	
}