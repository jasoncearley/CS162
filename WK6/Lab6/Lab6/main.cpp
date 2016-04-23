//
//  main.cpp
//  Lab6
//
//  Created by Jason Cearley on 11/2/15.
//  Copyright © 2015 Jason Cearley. All rights reserved.
//

#include <iostream>
using std::cout;
using std::endl;

#include "Stack.hpp"
#include "Queue.hpp"

int main()
{
    Stack StackNode;
    Queue QueueNode;
    
    cout << "Working with a Stack....." << endl;
    
    cout << "Adding 2 to the Stack....." << endl;
    StackNode.add(2);
    
    cout << "Adding 55 to the Stack....." << endl;
    StackNode.add(55);
    
    cout << "Adding 44 to the Stack....." << endl;
    StackNode.add(44);
    
    cout << "Adding 9 to the Stack....." << endl;
    StackNode.add(9);
    
    cout << "Adding 0 to the Stack....." << endl;
    StackNode.add(0);
    
    cout << "The Stack contains.....";
    StackNode.display();
    
    cout << endl << endl;
    StackNode.remove();
    cout << "Now the Stack contains.....";
    StackNode.display();
    
    cout << endl << endl;
    StackNode.remove();
    cout << "Now the Stack contains.....";
    StackNode.display();
    
    cout << endl << endl;
    StackNode.remove();
    cout << "Now the Stack contains.....";
    StackNode.display();
    
    cout << endl << endl;
    StackNode.remove();
    cout << "Now the Stack contains.....";
    StackNode.display();
    
    cout << endl << endl;
    StackNode.remove();
    cout << "Now the Stack contains.....";
    StackNode.display();
    
    cout << endl << endl;
    StackNode.remove();
    cout << "Now the Stack contains.....";
    StackNode.display();
    cout << endl << endl;
    
    cout << "Working with a Queue....." << endl;
    
    cout << "Adding 12 to the Queue....." << endl;
    QueueNode.add(12);
    
    cout << "Adding 2 to the Queue....." << endl;
    QueueNode.add(2);
    
    cout << "Adding 5 to the Queue....." << endl;
    QueueNode.add(5);
    
    cout << "Adding 3 to the Queue....." << endl;
    QueueNode.add(3);
    
    cout << "Adding 99 to the Queue....." << endl;
    QueueNode.add(99);
    
    cout << "The Queue contains....." << endl;
    QueueNode.display();
    
    cout << endl << endl;
    QueueNode.remove();
    cout << "Now the Queue contains....." << endl;
    QueueNode.display();
    
    cout << endl << endl;
    QueueNode.remove();
    cout << "Now the Queue contains....." << endl;
    QueueNode.display();
    
    cout << endl << endl;
    QueueNode.remove();
    cout << "Now the Queue contains....." << endl;
    QueueNode.display();
    
    cout << endl << endl;
    QueueNode.remove();
    cout << "Now the Queue contains....." << endl;
    QueueNode.display();
    
    cout << endl << endl;
    QueueNode.remove();
    cout << "Now the Queue contains....." << endl;
    QueueNode.display();
    
    cout << endl << endl;
    QueueNode.remove();
    cout << "Now the Queue contains....." << endl;
    QueueNode.display();
    cout << endl;
    
    return 0;
}
