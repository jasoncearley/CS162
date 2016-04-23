//
//  Stack.cpp
//  Lab6
//
//  Created by Jason Cearley on 11/2/15.
//  Copyright © 2015 Jason Cearley. All rights reserved.
//

#include <iostream>
using std::cout;
using std::endl;

#include "Stack.hpp"
#include "Creature.hpp"

/***********************************************************************
 * Constructor that initializes top to point to NULL since the Stack
 * is empty.
 **********************************************************************/
Stack::Stack()
{
    top = NULL;
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
 
/***********************************************************************
 * This function adds a Node struct to the Stack. If the Stack is empty
 * (ie top == NULL) then create a new Node struct and set top to point 
 * to it. If the Stack is not empty, then create a new Node struct that 
 * points to the first element in the Stack and set top to point to this
 * new Node. This will place the new Node struct at the top of the Stack
 * everytime to mimic a FILO file system.
 **********************************************************************/
void Stack::add(Creature* addMe)
{
    // Stack is empty, so create the first Node struct and set top to point to it
    if (top == NULL)
    {
        top = new Node(addMe);
    }
    
    // Stack contains Nodes, so create a new Node struct that points to the
    // first Node in the list and set top to point to this new Node.
    // This effectively places the new Node at the begining of the Stack.
    else
    {
        top = new Node(addMe, top);
    }
}

/***********************************************************************
 * This function removes a Node struct from the Stack. If the Stack is 
 * empty (ie top == NULL) then do nothing. If the Stack is not empty, 
 * then delete the first Node struct and set top to point to the next
 * Node in the Stack. This will remove the first Node struct at the top 
 * of the Stack everytime to mimic a FILO file system.
 **********************************************************************/
Creature* Stack::remove()
{
    Creature* temp = NULL;
    
    if (!top)
    {
        cout << "The Stack is empty. There are no more items to remove." << endl;
        return NULL;
    }
    
    // remove first Node from the Stack and print it to the screen
    else
    {
        cout << "Removing " << top->value->getUserGivenName() << " from the Stack." << endl;
        
        temp = top->value;
        
        top = top->next;
        
        return temp;
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
        cout << nodePtr->value->getUserGivenName() << endl
        << "Strength Remaining: " << nodePtr->value->getStrength() << endl
        << "Team: " << nodePtr->value->getTeam() << endl
        << "Total Battles Won: " << nodePtr->value->getWins() << endl
        << "Total Damage Inflicted: " << nodePtr->value->getDamageInflicted() << endl
        << endl;
        
        //cout << "Nodeptr = " << nodePtr << endl;
        
        // set pointer to look at next Node in the Stack
        nodePtr = nodePtr->next;
        
        //cout << "Nodeptr = " << nodePtr << endl;
    }
    
    cout << endl;
}

/***********************************************************************
 * This function is used to test the Stack class by displaying the values
 * stored in the Stack from the begining to the end.
 **********************************************************************/
void Stack::displayTopThree() const
{
    // set a pointer to the begining of the Stack
    Node* nodePtr = top;
    
    int a = 1;
    
    // display values in the list until pointer is NULL
    while ((a <= 3) && (nodePtr))
    {
        cout << "Place #" << a << "....." << endl;
        cout << nodePtr->value->getUserGivenName() << endl
        << "Strength Remaining: " << nodePtr->value->getStrength() << endl
        << "Team: " << nodePtr->value->getTeam() << endl
        << "Total Battles Won: " << nodePtr->value->getWins() << endl
        << "Total Damage Inflicted: " << nodePtr->value->getDamageInflicted() << endl
        << endl;
        
        // set pointer to look at next Node in the Stack
        nodePtr = nodePtr->next;
        
        a++;
    }
}

/***********************************************************************
 * This function is used to determine the winning team by tallying wins.
 **********************************************************************/
void Stack::determineWinningTeam()
{
    int team = 0, wins1 = 0, wins2 = 0;
    
    // set a pointer to the begining of the Stack
    Node* nodePtr = top;
    
    // while loop advances through stack and tallyies both teams wins
    while (nodePtr)
    {
        team = nodePtr->value->getTeam();
        
        if (team == 1)
        {
            wins1 += nodePtr->value->getWins();
        }
        
        else
        {
            wins2 += nodePtr->value->getWins();
        }
        
        // set pointer to look at next Node in the Stack
        nodePtr = nodePtr->next;
    }
    
    if (wins1 > wins2)
    {
        cout << "Team 1 is the Tournament Champion with a final tally of " << wins1
        << " to " << wins2 << "!" << endl;
    }
    
    else if (wins2 > wins1)
    {
        cout << "Team 2 is the Tournament Champion with a final tally of " << wins2
        << " to " << wins1 << "!" << endl;
    }
    
    else if (wins1 == wins2)
    {
        cout << "The Tournament is a tie." << endl;
    }
}

/***********************************************************************
 * This function will deallocate the memory used by the Stack.
 **********************************************************************/
void Stack::clearStack()
{
    // used for testing
    //cout << "Destructor is running" << endl;
    
    // set a pointer to the begining of the Stack
    Node* nodePtr = top;
    
    // Reset top back to null so that next stack is created correctly
    top = NULL;
    
    // delete pointers in the Stack until pointer is NULL
    while (nodePtr)
    {
        // establish a trailing pointer to follow nodePtr
        // this will keep track of Nodes to delete
        Node* trash = nodePtr;
        
        // set pointer to look at next Node in the Stack
        nodePtr = nodePtr->next;
        
        // delete the creature created by new in Game class
        delete trash->value;
        
        // delete the Node pointed to by trash
        delete trash;
    }
}



