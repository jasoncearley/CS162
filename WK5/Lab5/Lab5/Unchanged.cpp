//
//  Unchanged.cpp
//  Lab5
//
//  Created by Jason Cearley on 10/28/15.
//  Copyright © 2015 Jason Cearley. All rights reserved.
//

#include "Unchanged.hpp"

/***********************************************************************
 * This function will create an unchanged copy of the input file. 
 * Funtion will then return the uppercase char to calling the funciton. 
 * This is a virtual function inherited from the Base class fileFilter.
 **********************************************************************/
char Unchanged::transform (char ch) const
{
    return ch;
}
