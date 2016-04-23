//
//  Queue.cpp
//  Lab6
//
//  Created by Jason Cearley on 11/2/15.
//  Copyright © 2015 Jason Cearley. All rights reserved.
//

#include "Queue.hpp"
#include <iostream>
using std::cout;
using std::endl;


/***********************************************************************
 * Constructor that initializes first and last to point to NULL, since
 * the Queue is empty.
 **********************************************************************/
Queue::Queue()
{
    first = NULL;
    last = NULL;
}

/***********************************************************************
 * This function adds a Node struct to the Queue. If the Queue is empty
 * (ie first == NULL) then create a new Node struct and set first to 
 * point to it. If the Queue is not empty, then create a new Node struct
 * at the end of the Queue. This will mimic a FIFO file system.
 **********************************************************************/
void Queue::add(int num)
{
    // Queue is empty, so create the first Node struct and set first and last to point to it
    if (first == NULL)
    {
        first = new Node(num);
        last = first;
    }
    
    // Queue contains Nodes so create a new Node struct and place at the end of the Queue
    else
    {
        // set Node pointer to begining of the Queue
        Node* nodePtr = first;
        
        // find the end of the Queue
        while (nodePtr->next != NULL)
        {
            // set pointer to next item in Queue
            nodePtr = nodePtr->next;
        }
        
        // create a new Node that has previous set to point at the previous
        // item and next to point to NULL since it is being added to the end of the Queue.
        // This also sets the previous items next pointer to point to this new item
        nodePtr->next = new Node(num, nodePtr, NULL);
        
        // move pointer one item to the end of Queue
        while (nodePtr->next != NULL)
        {
            // set pointer to next item in Queue
            nodePtr = nodePtr->next;
        }
        
        // set last pointer to point to the end of the Queue
        last = nodePtr;
    }
}

/***********************************************************************
 * This function is used to test the Queue class by displaying the values
 * stored in the Queue from the begining to the end.
 **********************************************************************/
void Queue::display() const
{
    
    cout << "Your Queue forwards...." << endl;
    // set a pointer to the begining of the Queue
    Node* nodePtr = first;
    
    // display values in the list until pointer is NULL
    while (nodePtr)
    {
        cout << nodePtr->value << " ";
        
        // set pointer to look at next Node in the Queue
        nodePtr = nodePtr->next;
    }
    
    
    cout << endl << "Your Queue backwards....." << endl;
    // set a pointer to the end of the Queue
    nodePtr = last;
    
    // display values in the list until pointer is NULL
    while (nodePtr)
    {
        cout << nodePtr->value << " ";
        
        // set pointer to look at next Node in the Queue
        nodePtr = nodePtr->prev;
    }
}

/***********************************************************************
 * This function removes a Node struct from the Queue. If the Queue is
 * empty (ie first == NULL) then do nothing. If the Queue is not empty,
 * then delete the first Node struct and set first to point to the next
 * Node in the Queue. This will remove the first Node struct at the top
 * of the Queue everytime to mimic a FIFO file system.
 **********************************************************************/
void Queue::remove()
{
    if (!first)
    {
        cout << "The Queue is empty. There are no more items to remove." << endl;
        return;
    }
    
    // remove first Node from the Queue and print it to the screen
    else
    {
        cout << "Removing " << first->value << " from the Queue." << endl;
        
        first = first->next;
        
        if (first)
        {
            first->prev = NULL;
        }
        
        else
        {
            first = NULL;
            last = NULL;
        }
    }
}

/***********************************************************************
 * Destructor that will deallocate the memory used by the Queue upon
 * program exit.
 **********************************************************************/
Queue::~Queue()
{
    // used for testing
    //cout << "Destructor is running" << endl;
    
    // set a pointer to the begining of the Queue
    Node* nodePtr = first;
    
    // delete pointers in the Queue until pointer is NULL
    while (nodePtr)
    {
        // establish a trailing pointer to follow nodePtr
        // this will keep track of Nodes to delete
        Node* trash = nodePtr;
        
        // set pointer to look at next Node in the Queue
        nodePtr = nodePtr->next;
        
        // delete the Node pointed to by trash
        delete trash;
    }
}
