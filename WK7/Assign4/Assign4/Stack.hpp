//
//  Stack.hpp
//  Lab6
//
//  Created by Jason Cearley on 11/2/15.
//  Copyright © 2015 Jason Cearley. All rights reserved.
//

#ifndef Stack_hpp
#define Stack_hpp

#include <stdio.h>
#include "Creature.hpp"

// create a Stack class that will mimic a FILO file structure
class Stack
{
protected:
    // create a Node struct to be used in the Stack
    struct Node
    {
        Creature* value;  // Value data member of the structure
        Node* next; // A pointer that will point to the next Node struct in the Stack
        
        // Constructor for the Node struct that will initialize the Node when created
        // If a Node* is not included with the Node function call, then next is set to NULL
        Node (Creature* v, Node* n = NULL)
        {
            // set the value data member of the Node struct
            value = v;
            
            // set the next data member of the Node struct
            next = n;
        }
    };
    
    // top is pointer to a Node struct that will be used to point to the first Node in the Stack
    Node* top;
    
public:
    Stack();    // Constructor
    ~Stack();   // Destructor
    void add(Creature*);  // Function to add a Node struct to the begining of the Stack
    Creature* remove();   // Function to remove a Node struct from the begining of the Stack
    void display() const;   // Function used to display the Stack Nodes for testing
    void displayTopThree() const; // Function to display the top 3 finishers
    void determineWinningTeam(); // Function to determine winning team by counting wins
    void clearStack(); // Function used to delete both the creatures created and the stack nodes created
};

#endif /* Stack_hpp */
