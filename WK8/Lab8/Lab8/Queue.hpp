//
//  Queue.hpp
//  Lab6
//
//  Created by Jason Cearley on 11/2/15.
//  Copyright © 2015 Jason Cearley. All rights reserved.
//

#ifndef Queue_hpp
#define Queue_hpp

#include <stdio.h>

// create a Queue class that will mimic a FIFO file structure
class Queue
{
protected:
    // create a Node struct to be used in the Queue
    struct Node
    {
        int value;  // Value data member of the structure
        Node* prev; // A pointer that will point to the previous Node struct in the Queue
        Node* next; // A pointer that will point to the next Node struct in the Queue
        
        // Constructor for the Node struct that will initialize the Node when created
        // If a Node* is not included with the Node function call, then prev & next are set to NULL
        Node (int v, Node* p = NULL, Node* n = NULL)
        {
            // set the value data member of the Node struct
            value = v;
            
            // set the previous data member of the Node struct
            prev = p;
            
            // set the next data member of the Node struct
            next = n;
        }
    };
    
    // front is pointer to a Node struct that will be used to point to the first Node in the Queue
    Node* front;
    
    // back is pointer to a Node struct that will be used to point to the last Node in the Queue
    Node* back;
   
public:
    Queue();    // Constructor
    ~Queue();   // Destructor
    void addBack(int num);  // Function to add a Node struct to the end of the Queue
    void removeFront();   // Function to remove a Node struct from the begining of the Queue
    int getFront();        // Function returns the value at the front of the structure
    void diplay() const;      // Function used to display the queue contents
};
#endif /* Queue_hpp */
