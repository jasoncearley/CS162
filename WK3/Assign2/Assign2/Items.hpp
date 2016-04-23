//
//  Items.hpp
//  Assign2
//
//  Created by Jason Cearley on 10/13/15.
//  Copyright © 2015 Jason Cearley. All rights reserved.
//

#ifndef Items_hpp
#define Items_hpp

#include <iostream>
using std::string;

// Create a class named Item. This class will be used to fill a shopping cart
class Item
{
private:
    string name;    // Data member to hold the name of the item
    string unit;    // Data member to hold the unit of the item
    double price;   // Data member to hold the price of the item
    int quantity;   // Data member to hold the quantity of the item
    
public:
    Item();                     // Item initialization constructor
    string get_name();          // Function to get the name of an item
    string get_unit();          // Function to get the unit (box, can, pounds, ounces, etc) of an item
    double get_price();         // Function to get the price of an item
    int get_quantity();         // Function to get the quantity of an item
    void set_name (string n);   // Function to set the name of an item
    void set_unit (string u);   // Function to set the units of an item
    void set_price (double p);  // Function to set the price of an item
    void set_quantity (int q);  // Function to set the quantity of an item
};

#endif
