//
//  UpperCase.cpp
//  Lab5
//
//  Created by Jason Cearley on 10/28/15.
//  Copyright © 2015 Jason Cearley. All rights reserved.
//

#include "UpperCase.hpp"

/***********************************************************************
 * This function will take a char and convert it to uppercase. Funtion 
 * will then return the uppercase char to calling the funciton. This is 
 * a virtual function inherited from the Base class fileFilter.
 **********************************************************************/
char UpperCase::transform (char ch) const
{
    // If char is already uppercase do nothing
    if (ch >= 32 && ch <= 90)
    {
        return ch;
    }
    
    // if not uppercase, make it so
    else
    {
        return ch - 32;
    }
}