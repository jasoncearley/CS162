//
//  List.cpp
//  Assign2
//
//  Created by Jason Cearley on 10/13/15.
//  Copyright © 2015 Jason Cearley. All rights reserved.
//

#include "List.hpp"
#include "Menu.hpp"

#include <iomanip>
using std::setprecision;
using std::fixed;
using std::showpoint;

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

/************************************************************************************
 * This function overloads the equality operator to allow comparison of Item objects.
 ************************************************************************************/
bool operator==(Item a, Item b)
{
    return a.get_name() == b.get_name();
}

/***********************************************************************
 * This function allows the user to add an item to their shopping cart.
 * It also checks to see if the item already exists in the cart. If it 
 * does, the function will return false which tells main() not to raise
 * the index by one.
 ***********************************************************************/
bool ShoppingCart::addItem (int index)
{
    string tempName = "";
    double tempPrice = 0.0;
    int tempQuantity = 0;
    
    cart.push_back(Item());     // Place an Item object at the end of the cart vector
    
    cout << "Enter the name of your Item: ";
    getline(cin, tempName);
    cart[index].set_name(tempName);
    
    // for loop to check if item is already in the cart
    for (int a = 0; a < index; a++)
    {
        if (cart[a] == cart[index])
        {
            cout << "That item is already on the list. Please try again." << endl;
            
            // Remove the duplicate item from cart and return 1 to tell main() not to raise index by one
            cart.pop_back();
            return false;
        }
    }
    
    cout << "Enter the Item unit (i.e. box, can, pounds, ounces): ";
    getline(cin, tempName);
    cart[index].set_unit(tempName);
    
    cout << "Enter the price of your Item (ex. 1.25): $";
    tempPrice = user_selection_d();
    cart[index].set_price(tempPrice);
    
    cout << "Enter the quantity: ";
    tempQuantity = user_selection_i();
    cart[index].set_quantity(tempQuantity);
    
    return true;
}

/***************************************************************************
 * This function allows the user to remove an item from their shopping cart.
 **************************************************************************/
int ShoppingCart::removeItem(int index)
{
    string tempName = "";
    
    // if statement for instance where there are no items on the list
    if (index == 0)
    {
        cout << "There are no items in your cart to remove." << endl;
        
        return 0;
    }
    
    cout << "Enter the name of the Item you would like to remove: " << endl;
    getline(cin, tempName);
    
    // for loop to search cart vector for item that needs removed
    for (int a = 0; a < index; a++)
    {
        if (cart[a].get_name() == tempName)
        {
            // remove the desired item from the cart
            cart.erase(cart.begin() + a);
            
            cout << tempName << " has been removed from your cart." << endl;
            
            // lower index to account for item being removed from the vector and return it back to main where it is tracked
            return index - 1;
        }
    }
    
     cout << "That item is not in your cart. Please check your spelling"
          << " and try again." << endl;
            
    return index;
}


/***********************************************************************
 * This function displays the items in the user's shopping cart.
 ***********************************************************************/
void ShoppingCart::listItems (int num)
{
    // Setup so all numbers are shown to 2 decimal places
    cout << setprecision(2) << fixed << showpoint;
    
    if (num == 0)
    {
        cout << "There are no items in your cart to display." << endl;
    }
    
    else
    {
        for (int a = 0; a < num; a++)
        {
            cout << "Item " << a + 1 << " of " << num << ":" << endl;
            
            cout << cart[a].get_name() << endl
            << "Unit: " << cart[a].get_unit() << endl
            << "Unit Price: $" << cart[a].get_price() << endl
            << "Total Price: $" << cart[a].get_price() * cart[a].get_quantity() << endl
            << "Quantity: " << cart[a].get_quantity() << endl << endl;
        }
    }
}

/***********************************************************************
 * This function displays the total price of all items in the user's
 * shopping cart.
 ***********************************************************************/
void ShoppingCart::totalPrice(int num)
{
    double total = 0.0;
    
    // Setup so all numbers are shown to 2 decimal places
    cout << setprecision(2) << fixed << showpoint;
    
    if (num == 0)
    {
        cout << "There are no items in your cart to display." << endl;
    }
    
    else
    {
        cout << "The Total price of all items in your cart is: ";
        
        for (int a = 0; a < num; a++)
        {
            total += (cart[a].get_price() * cart[a].get_quantity());
        }
        
        cout << total;
    }
}

