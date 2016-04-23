//
//  main.cpp
//  Lab5
//
//  Created by Jason Cearley on 10/26/15.
//  Copyright © 2015 Jason Cearley. All rights reserved.
//

#include <iostream>
using std::cout;
using std::endl;

#include "Menu.hpp"
#include "Encrypt.hpp"
#include "UpperCase.hpp"
#include "Unchanged.hpp"

int main()
{
    int choice = 0;         // Variable to hold the user's menu choice
    ifstream inputFile;     // Varialbe to allow reading from a file
    ofstream outputFile;    // Variable to allow writing to a file
    Unchanged copy;         // Create an Unchanged class instance
    UpperCase upper;        // Create an UpperCase class instance
    
    // Do/while loop to allow user to perform multiple operations w/o exiting program
    do
    {
        // Display a menu for user to choose from
        menu();
        
        // Call user_selection function to get, validate, & return user's selection
        choice = user_selection();
        
        // Perform user's selection to create an unchanged copy of input file
        if (choice == 1)
        {
            // Open input and output files
            cout << "Opening files......" << endl;
            inputFile.open("readFrom.txt");
            outputFile.open("writeTo.txt");
            
            // Copy text from input to output unchanged using polymorphism
            cout << "Copying text to output file......" << endl;
            copy.doFilter(inputFile, outputFile);
            
            // Close input and output files
            cout << "CLosing files......" << endl;
            inputFile.close();
            outputFile.close();
        }
        
        // Perform user's selection to change input file text to all caps
        if (choice == 2)
        {
            // Open input and output files
            cout << "Opening files......" << endl;
            inputFile.open("readFrom.txt");
            outputFile.open("writeTo.txt");
            
            // Convert text from input file to all caps using polymorphism
            cout << "Converting text to UPPERCASE......" << endl;
            upper.doFilter(inputFile, outputFile);
            
            // Close input and output files
            cout << "CLosing files......" << endl;
            inputFile.close();
            outputFile.close();
        }
        
        // Perform user's selection to encrypt input file text
        if (choice == 3)
        {
            // Create an Encrypt class instance w/ the key initialized to zero
            int a = 0;
            Encrypt cypher(a);
            
            // Open input and output files
            cout << "Opening files......" << endl;
            inputFile.open("readFrom.txt");
            outputFile.open("writeTo.txt");
            
            // Encrypt text from input file using polymorphism
            cout << "Encrypting......" << endl;
            cypher.doFilter(inputFile, outputFile);
            
            // Close input and output files
            cout << "CLosing files......" << endl;
            inputFile.close();
            outputFile.close();
        }
    }while (choice != 4);
    
    return 0;
}










