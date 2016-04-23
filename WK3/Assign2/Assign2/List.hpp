//
//  List.hpp
//  Assign2
//
//  Created by Jason Cearley on 10/13/15.
//  Copyright © 2015 Jason Cearley. All rights reserved.
//

#ifndef List_hpp
#define List_hpp

#include "Items.hpp"
#include <vector>
using std::vector;

// Create a class object named ShoppingCart.
class ShoppingCart
{
private:
    vector <Item> cart;     // A vector of Item objects that will be used to simulate a shopping list
    
public:
    bool addItem (int);     // Function to add an item to the list
    void listItems (int);   // Function to list the items in the list
    int removeItem (int);   // Function to remove an item from the list
    void totalPrice (int);  // Function to display the total price for all items on the list
};

#endif
