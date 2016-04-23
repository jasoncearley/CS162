//
//  Stack.cpp
//  Lab6
//
//  Created by Jason Cearley on 11/2/15.
//  Copyright © 2015 Jason Cearley. All rights reserved.
//

#include "Stack.hpp"
#include <iostream>
using std::cout;
using std::endl;

/***********************************************************************
 * Constructor that initializes top to point to NULL since the Stack
 * is empty.
 **********************************************************************/
Stack::Stack()
{
    top = NULL;
}

/***********************************************************************
 * This function adds a Node struct to the Stack. If the Stack is empty
 * (ie top == NULL) then create a new Node struct and set top to point 
 * to it. If the Stack is not empty, then create a new Node struct that 
 * points to the first element in the Stack and set top to point to this
 * new Node. This will place the new Node struct at the top of the Stack
 * everytime to mimic a FILO file system.
 **********************************************************************/
void Stack::add(int num)
{
    // Stack is empty, so create the first Node struct and set top to point to it
    if (top == NULL)
    {
        top = new Node(num);
    }
    
    // Stack contains Nodes, so create a new Node struct that points to the
    // first Node in the list and set top to point to this new Node.
    // This effectively places the new Node at the begining of the Stack.
    else
    {
        top = new Node(num, top);
    }
}

/***********************************************************************
 * This function removes a Node struct from the Stack. If the Stack is 
 * empty (ie top == NULL) then do nothing. If the Stack is not empty, 
 * then delete the first Node struct and set top to point to the next
 * Node in the Stack. This will remove the first Node struct at the top 
 * of the Stack everytime to mimic a FILO file system.
 **********************************************************************/
void Stack::remove()
{
    if (!top)
    {
        cout << "The Stack is empty. There are no more items to remove." << endl;
        return;
    }
    
    // remove first Node from the Stack and print it to the screen
    else
    {
        cout << "Removing " << top->value << " from the Stack." << endl;
        
        top = top->next;
    }
}

/***********************************************************************
 * This function is used to test the Stack class by displaying the values
 * stored in the Stack from the begining to the end.
 **********************************************************************/
void Stack::display() const
{
    // set a pointer to the begining of the Stack
    Node* nodePtr = top;
    
    // display values in the list until pointer is NULL
    while (nodePtr)
    {
        cout << nodePtr->value << " ";
        
        // set pointer to look at next Node in the Stack
        nodePtr = nodePtr->next;
    }
}

/***********************************************************************
 * Destructor that will deallocate the memory used by the Stack upon 
 * program exit.
 **********************************************************************/
Stack::~Stack()
{
    // used for testing
    //cout << "Destructor is running" << endl;
    
    // set a pointer to the begining of the Stack
    Node* nodePtr = top;
    
    // delete pointers in the Stack until pointer is NULL
    while (nodePtr)
    {
        // establish a trailing pointer to follow nodePtr
        // this will keep track of Nodes to delete
        Node* trash = nodePtr;
        
        // set pointer to look at next Node in the Stack
        nodePtr = nodePtr->next;
        
        // delete the Node pointed to by trash
        delete trash;
    }
}