//
//  main.cpp
//  Assign2
//
//  Created by Jason Cearley on 10/13/15.
//  Copyright © 2015 Jason Cearley. All rights reserved.
//

#include <iostream>
#include "Menu.hpp"
#include "List.hpp"

int main(int argc, const char * argv[])
{
    int menu_choice = 0;			// Holds the user's menu choice
    int index = 0;					// Keep track of total items in cart
    ShoppingCart buggy;				// ShoppingCart class object
    
    
    // Do/while loop to allow user to continue w/o exiting
    do
    {
        // Display User Menu
        menu();
        
        menu_choice = user_selection(); // Assign menu_choice the value
        // returned by the user_selection
        // function
        
        if (menu_choice == 1)
        {
            // add an item object to the ShoppingCart and increment the index provided the item is not already in the cart
            if (buggy.addItem(index))
            {
                index++;
            }
        }
        
        else if (menu_choice == 2)
        {
            // list items in the ShoppingCart
            buggy.listItems(index);
        }
        
        else if (menu_choice == 3)
        {
            // Remove an item from the ShoppingCart and lower the index by one
            index = buggy.removeItem(index);
        }
        
        else if (menu_choice == 4)
        {
            // Display the total price of all items in the ShoppingCart
            buggy.totalPrice(index);
        }
        
    }
    while (menu_choice != 5);
    
    return 0;
}
