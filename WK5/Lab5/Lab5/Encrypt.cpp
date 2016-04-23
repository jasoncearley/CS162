//
//  Encrypt.cpp
//  Lab5
//
//  Created by Jason Cearley on 10/28/15.
//  Copyright © 2015 Jason Cearley. All rights reserved.
//

#include "Encrypt.hpp"
#include <iostream>
using std::cout;
using std::cin;


/***********************************************************************
 * This function will take a char and encrypt it using a user defined 
 * encryption key. Funtion will then return the encrypted char to calling
 * funciton. This is a virtual function inherited from the Base class
 * fileFilter.
 **********************************************************************/
char Encrypt::transform (char ch) const
{
    // This if statement encrypts uppercase chars
    if (ch >= 65 && ch <= 90)
    {
        return ((((ch - 65) + encryptKey) % 26) + 65);
    }
    
    // This else if statement encrypts lowercase chars
    else if (ch >= 97 && ch <= 122)
    {
        return ((((ch - 97) + encryptKey) % 26) + 97);
    }
    
    // Do not encrypt non-alphabet characters
    else
    {
        return ch;
    }
}

/***********************************************************************
 * Constructor that will initialize the encryption key based on user
 * input.
 **********************************************************************/
Encrypt::Encrypt(int key)
{
    encryptKey = key;
        
    cout << "Enter your encryption key: ";
    cin >> encryptKey;
    
    // Clear return in buffer
    cin.get();
}

/***********************************************************************
 * Default Constructor
 **********************************************************************/
Encrypt::Encrypt()
{
}