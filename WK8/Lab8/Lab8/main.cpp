//
//  main.cpp
//  Lab6
//
//  Created by Jason Cearley on 11/2/15.
//  Copyright © 2015 Jason Cearley. All rights reserved.
//

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include "Queue.hpp"
#include "Menu.hpp"

int main()
{
    int choice = 0, numToAdd = 0, temp = 0;
    Queue QueueNode;
    
    do
    {
        // diplay menu of choices for user
        menu();
        
        // get and validate user's choice
        choice = user_selection();
        
        if (choice == 1)
        {
            cout << "Enter value to add to end of queue: ";
            
            // get and validate user's input
            numToAdd = validate();
            
            // Add number to the back of the queue
            QueueNode.addBack(numToAdd);
        }
        
        else if (choice == 2)
        {
            // remove value at front of queue w/o deleting node
            QueueNode.removeFront();
        }
        
        else if (choice == 3)
        {
            temp = QueueNode.getFront();
            
            while (temp != -1)
            {
                cout << temp << " ";
                
                QueueNode.removeFront();
                
                temp = QueueNode.getFront();
            }
        }
        
    } while (choice != 4);

    
    return 0;
}
