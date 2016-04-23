//
//  Filter.cpp
//  Lab5
//
//  Created by Jason Cearley on 10/28/15.
//  Copyright © 2015 Jason Cearley. All rights reserved.
//

#include "Filter.hpp"

/***********************************************************************
 * This function will allow reading and writing to input and output 
 * files. It uses a call to a virtual function "transform()" to allow 
 * its use as a file filter.
 **********************************************************************/
void fileFilter::doFilter(ifstream &in, ofstream &out)
{
    char ch;        // Variable to hold the input character
    char transCh;   // Varialbe to hold the output character
    
    // Get first character from input file
    in.get(ch);
    
    // Continue to get and operate on characters in file until EOF reached
    while (!in.fail())
    {
        // Call virtual transform() function to perform desired task based on class of object
        transCh = transform(ch);
        
        // Write operated on character to output file
        out.put(transCh);
        
        // Get next character in input file
        in.get(ch);
    }
}