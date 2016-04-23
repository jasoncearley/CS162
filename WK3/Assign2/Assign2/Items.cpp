//
//  Items.cpp
//  Assign2
//
//  Created by Jason Cearley on 10/13/15.
//  Copyright © 2015 Jason Cearley. All rights reserved.
//

#include "Items.hpp"

// Item initialization constructor
Item::Item()
{
    name = "";
    unit = "";
    price = 0.0;
    quantity = 0;
}

// Function to get the name of an item
string Item::get_name()
{return name;}

// Function to get the unit (box, can, pounds, ounces, etc) of an item
string Item::get_unit()
{return unit;}

// Function to get the price of an item
double Item::get_price()
{return price;}

// Function to get the quantity of an item
int Item::get_quantity()
{return quantity;}

// Function to set the name of an item
void Item::set_name (string n)
{name = n;}

// Function to set the units of an item
void Item::set_unit(string u)
{unit = u;}

// Function to set the price of an item
void Item::set_price (double p)
{price = p;}

// Function to set the quantity of an item
void Item::set_quantity (int q)
{quantity = q;}