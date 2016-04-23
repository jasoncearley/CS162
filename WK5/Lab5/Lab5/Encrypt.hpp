//
//  Encrypt.hpp
//  Lab5
//
//  Created by Jason Cearley on 10/28/15.
//  Copyright © 2015 Jason Cearley. All rights reserved.
//

#ifndef Encrypt_hpp
#define Encrypt_hpp

#include <stdio.h>
#include "Filter.hpp"

// This class will be used to encrypt a file
class Encrypt: public fileFilter
{
private:
    int encryptKey; // Variable to hold the user's encryption key
    
public:
    Encrypt();  // Constructor that will also initialize the encryption key based on user input
    Encrypt(int);  // Constructor that will also initialize the encryption key based on user input
    virtual char transform (char ch) const; // Function used to encrypt the input file text
};

#endif
