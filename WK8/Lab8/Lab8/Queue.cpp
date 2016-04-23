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
    front = NULL;
    back = NULL;
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
    Node* nodePtr = front;
    Node* temp = NULL;
    
    // delete pointers in the Queue until pointer is NULL
    while (nodePtr != temp)
    {
        // keep track of stopping point
        temp = front;
        
        // establish a trailing pointer to follow nodePtr
        // this will keep track of Nodes to delete
        Node* trash = nodePtr;
        
        // set pointer to look at next Node in the Queue
        nodePtr = nodePtr->next;
        
        // delete the Node pointed to by trash
        delete trash;
    }
}

/***********************************************************************
 * This function adds a Node struct to the Queue. If the Queue is empty
 * (ie first == NULL) then create a new Node struct and set first to 
 * point to it. If the Queue is not empty, then create a new Node struct
 * at the end of the Queue. This will mimic a doubly linked circular 
 * queue.
 **********************************************************************/
void Queue::addBack(int num)
{
    // add first node to the queue
    if (!front)
    {
        front = new Node(num);
        front->prev = front;
        front->next = front->prev;
        back = front->next;
    }
    
    // Queue is full, so create a Node struct at end and adjust pointers
    else if (front->prev == back && front->value != -1)
    {
        // set Node pointer to end of the Queue
        Node* nodePtr = back;
        
        
        // create a new Node that has previous set to point at the previous
        // item and next to point to front since it is being added to the end of the Queue.
        // This also sets the previous items next pointer to point to this new item
        nodePtr->next = new Node(num, nodePtr, front);
        
        // adjust back pointer to point to new node
        back = nodePtr->next;
        
        // adjust first node to point to last node
        front->prev = back;
    }
    
    // Queue contains an empty Node
    else
    {
        // queue is all empty nodes
        if (front == back && front->value == -1)
        {
            front->value = num;
        }
        
        // queue contains at least one value
        else
        {
            back->next->value = num;
            back = back->next;
        }
    }
}

/***********************************************************************
 * This function removes the value from the front of the Queue. If the 
 * Queue is does not contain any nodes (ie first == NULL) then do
 * nothing. If the Queue is not empty, then remove the first value and 
 * set first to point to the next Node in the Queue. This will not 
 * remove the first Node struct of the Queue. It will only advance the 
 * first pointer and set the value "removed" to -1.
 **********************************************************************/
void Queue::removeFront()
{
    if (!front)
    {
        cout << "There have been no items added to the queue. Therefore, there is nothing to remove." << endl;
        return;
    }
    
    else if (front->value == -1)
    {
        cout << "The queue contains only empty nodes. Therefore, there is nothing to remove from the Queue." << endl;
    }
    
    // remove first item from the Queue without deleting the Node
    else
    {
        // used for testing
        //cout << "Removing " << front->value << " from the Queue." << endl;
        
        front->value = -1;
        
        if (front != back)
        {
            front = front->next;
        }
    }
}

/***********************************************************************
 * Returns the value at the front of the structure.
 **********************************************************************/
int Queue::getFront()
{
    if (!front)
    {
        cout << "There are no nodes in the queue." << endl;
        return -1;
    }
    
    else if (front->value == -1)
    {
        cout << "The queue only contains empty nodes. Therefore, there are no values to return." << endl;
        return front->value;
    }
    
    else
    {
        return front->value;
    }
}

/***********************************************************************
 * This function is used to test the Queue class by displaying the values
 * stored in the Queue from the begining to the end.
 **********************************************************************/
void Queue::diplay() const
{
    
    if (!front || front->value == -1)
    {
        cout << "There is nothing to display." << endl;
        return;
    }
    
    cout << "Your Queue forwards...." << endl;
    // set a pointer to the begining of the Queue
    Node* nodePtr = front;
    
    if (front == back)
    {
        // display the only value in queue
        cout << nodePtr->value << endl;
    }
    
    else
    {
        // display values in the list until pointer is at end of queue
        do
        {
            cout << nodePtr->value << " ";
            
            // set pointer to look at next Node in the Queue
            nodePtr = nodePtr->next;
            
        } while (nodePtr != back);
        
        // display last value in queue
        cout << nodePtr->value << " ";
    }

    cout << endl << "Your Queue backwards....." << endl;
    // set a pointer to the end of the Queue
    nodePtr = back;
    
    if (front == back)
    {
        // display the only value in queue
        cout << nodePtr->value << endl;
    }
    
    else
    {
        // display values in the list until pointer is at the begining of queue
        do
        {
            cout << nodePtr->value << " ";
            
            // set pointer to look at next Node in the Queue
            nodePtr = nodePtr->prev;
            
        } while (nodePtr != front);
        
        // display first value in queue
        cout << nodePtr->value << " " << endl;
    }
}



