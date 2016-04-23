//
//  UpperCase.hpp
//  Lab5
//
//  Created by Jason Cearley on 10/28/15.
//  Copyright © 2015 Jason Cearley. All rights reserved.
//

#ifndef UpperCase_hpp
#define UpperCase_hpp

#include <stdio.h>
#include "Filter.hpp"

// This class will be used to convert the input file text to all caps
class UpperCase: public fileFilter
{
public:
    virtual char transform (char ch) const; // // Function used to convert the input file text to all caps
};

#endif
