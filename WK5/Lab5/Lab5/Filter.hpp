//
//  Filter.hpp
//  Lab5
//
//  Created by Jason Cearley on 10/28/15.
//  Copyright © 2015 Jason Cearley. All rights reserved.
//

#ifndef Filter_hpp
#define Filter_hpp

#include <stdio.h>
#include <fstream>
using std::ifstream;
using std::ofstream;

// This is an abstract class
class fileFilter
{
public:
    virtual char transform (char ch) const = 0; // Pure virtual function to allow doFilter to perform as a file filter
    void doFilter(ifstream &in, ofstream &out); // Function to perform a file filter role
};

#endif
