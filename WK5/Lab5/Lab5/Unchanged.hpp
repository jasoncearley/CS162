//
//  Unchanged.hpp
//  Lab5
//
//  Created by Jason Cearley on 10/28/15.
//  Copyright © 2015 Jason Cearley. All rights reserved.
//

#ifndef Unchanged_hpp
#define Unchanged_hpp

#include <stdio.h>
#include "Filter.hpp"

// This class will be used to create an unchanged copy of the input file
class Unchanged: public fileFilter
{
public:
    virtual char transform (char ch) const; // Function to create an unchanged copy of the original file
};

#endif
