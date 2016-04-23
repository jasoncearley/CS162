//
//  Classes.hpp
//  Assignment1: Classes specification file.
//
//  Created by Jason Cearley on 9/30/15.
//  Copyright © 2015 Jason Cearley. All rights reserved.
//

#ifndef Classes_hpp
#define Classes_hpp

#include <stdio.h>

class Cell
{
private:
    bool state; // State of a cell, alive or dead
    
public:
    Cell();
    bool getState();        // Return the state of a cell
    void setState(bool);    // Set the state of a cell
};

class World
{
private:
    Cell array[40][60]; // An array of Cells
    
public:
    World();
    void setArray(int, int, bool); // Set the state of an array
    bool getArray(int, int);       // Get the state of an array
};

class Game
{
private:
    World board1;   // An array of Cells
    World board2;   // An array of Cells
    
public:
    void reset(int);                // Reset array to false
    void setFixedOscillator(int);   // Initialize array
    void setGlider(int);            // Initialize array
    void setGliderCannon(int);      // Initialize array
    void getFate(int);              // Decide fate of cells w/in an array
    void display(int);              // Display the cells of an array
};

#endif
