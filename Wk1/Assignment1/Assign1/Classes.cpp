//
//  Classes.cpp
//  Assignment1: Classes implimentation file.
//
//  Created by Jason Cearley on 9/30/15.
//  Copyright © 2015 Jason Cearley. All rights reserved.
//

#include <iostream>
using std::cout;
using std::endl;

#include "Classes.hpp"


/***********************************************************************
 * Cell constructor.                                                   *
 **********************************************************************/
Cell::Cell()
{
    state = false;
}


/***********************************************************************
 * This function will get the state of a cell.                         *
 **********************************************************************/
bool Cell::getState()
{
    return state;
}


/***********************************************************************
 * This function will set the state of a cell.                         *
 **********************************************************************/
void Cell::setState(bool s)
{
    state = s;
}


/***********************************************************************
 * World Constructor that initializes all cells of array to false.     *
 **********************************************************************/
World::World()
{
    for (int row = 0; row < 40; row++)
    {
        for (int col = 0; col < 60; col++)
        {
            array[row][col].setState(false);
        }
    }
}


/***********************************************************************
 * This function will set the state of a cell within an array.         *
 **********************************************************************/
void World::setArray(int row, int col, bool s)
{
    array[row][col].setState(s);
}


/***********************************************************************
 * This function will get the state of a cell within an array.         *
 **********************************************************************/
bool World::getArray(int row, int col)
{
    return array[row][col].getState();
}


/***********************************************************************
 * This function will reset the state of all cells within an array to  *
 * false.                                                              *
 **********************************************************************/
void Game::reset(int board)
{
    if (board % 2 != 0)
    {
        for (int row = 0; row < 40; row++)
        {
            for (int col = 0; col < 60; col++)
            {
                board1.setArray(row, col, false);
            }
        }
    }
    
    else if (board % 2 == 0)
    {
        for (int row = 0; row < 40; row++)
        {
            for (int col = 0; col < 60; col++)
            {
                board2.setArray(row, col, false);
            }
        }
    }
}


/***********************************************************************
 * This function will initialize the cells within an array in the      *
 * correct quadrant.                                                   *
 **********************************************************************/
void Game::setFixedOscillator(int quad)
{
    if (quad == 1)
    {
        board1.setArray(14, 18, true);
        board1.setArray(14, 19, true);
        board1.setArray(14, 20, true);
    }
    
    else if (quad == 2)
    {
        board1.setArray(14, 38, true);
        board1.setArray(14, 39, true);
        board1.setArray(14, 40, true);
    }
    
    else if (quad == 3)
    {
        board1.setArray(24, 18, true);
        board1.setArray(24, 19, true);
        board1.setArray(24, 20, true);
    }
    
    else if (quad == 4)
    {
        board1.setArray(24, 38, true);
        board1.setArray(24, 39, true);
        board1.setArray(24, 40, true);
    }
    
    else if (quad == 5)
    {
        board1.setArray(19, 28, true);
        board1.setArray(19, 29, true);
        board1.setArray(19, 30, true);
    }
}


/***********************************************************************
 * This function will initialize the cells within an array in the      *
 * correct quadrant.                                                   *
 **********************************************************************/
void Game::setGlider(int quad)
{
    if (quad == 1)
    {
        board1.setArray(14, 20, true);
        board1.setArray(15, 18, true);
        board1.setArray(15, 20, true);
        board1.setArray(16, 19, true);
        board1.setArray(16, 20, true);
    }
    
    else if (quad == 2)
    {
        board1.setArray(14, 40, true);
        board1.setArray(15, 38, true);
        board1.setArray(15, 40, true);
        board1.setArray(16, 39, true);
        board1.setArray(16, 40, true);
    }
    
    else if (quad == 3)
    {
        board1.setArray(24, 20, true);
        board1.setArray(25, 18, true);
        board1.setArray(25, 20, true);
        board1.setArray(26, 19, true);
        board1.setArray(26, 20, true);
    }
    
    else if (quad == 4)
    {
        board1.setArray(24, 40, true);
        board1.setArray(25, 38, true);
        board1.setArray(25, 40, true);
        board1.setArray(26, 39, true);
        board1.setArray(26, 40, true);
    }
    
    else if (quad == 5)
    {
        board1.setArray(19, 30, true);
        board1.setArray(20, 28, true);
        board1.setArray(20, 30, true);
        board1.setArray(21, 29, true);
        board1.setArray(21, 30, true);
    }
}


/***********************************************************************
 * This function will initialize the cells within an array in the      *
 * correct quadrant.                                                   *
 **********************************************************************/
void Game::setGliderCannon(int quad)
{
    if (quad == 1)
    {
        board1.setArray(14, 3, true);
        board1.setArray(15, 3, true);
        board1.setArray(14, 4, true);
        board1.setArray(15, 4, true);
        board1.setArray(14, 13, true);
        board1.setArray(15, 13, true);
        board1.setArray(16, 13, true);
        board1.setArray(13, 14, true);
        board1.setArray(17, 14, true);
        board1.setArray(12, 15, true);
        board1.setArray(18, 15, true);
        board1.setArray(12, 16, true);
        board1.setArray(18, 16, true);
        board1.setArray(15, 17, true);
        board1.setArray(13, 18, true);
        board1.setArray(17, 18, true);
        board1.setArray(14, 19, true);
        board1.setArray(15, 19, true);
        board1.setArray(16, 19, true);
        board1.setArray(15, 20, true);
        board1.setArray(12, 23, true);
        board1.setArray(13, 23, true);
        board1.setArray(14, 23, true);
        board1.setArray(12, 24, true);
        board1.setArray(13, 24, true);
        board1.setArray(14, 24, true);
        board1.setArray(11, 25, true);
        board1.setArray(15, 25, true);
        board1.setArray(10, 27, true);
        board1.setArray(11, 27, true);
        board1.setArray(15, 27, true);
        board1.setArray(16, 27, true);
        board1.setArray(12, 37, true);
        board1.setArray(13, 37, true);
        board1.setArray(12, 38, true);
        board1.setArray(13, 38, true);
    }
    
    else if (quad == 2)
    {
        board1.setArray(14, 23, true);
        board1.setArray(15, 23, true);
        board1.setArray(14, 24, true);
        board1.setArray(15, 24, true);
        board1.setArray(14, 33, true);
        board1.setArray(15, 33, true);
        board1.setArray(16, 33, true);
        board1.setArray(13, 34, true);
        board1.setArray(17, 34, true);
        board1.setArray(12, 35, true);
        board1.setArray(18, 35, true);
        board1.setArray(12, 36, true);
        board1.setArray(18, 36, true);
        board1.setArray(15, 37, true);
        board1.setArray(13, 38, true);
        board1.setArray(17, 38, true);
        board1.setArray(14, 39, true);
        board1.setArray(15, 39, true);
        board1.setArray(16, 39, true);
        board1.setArray(15, 40, true);
        board1.setArray(12, 43, true);
        board1.setArray(13, 43, true);
        board1.setArray(14, 43, true);
        board1.setArray(12, 44, true);
        board1.setArray(13, 44, true);
        board1.setArray(14, 44, true);
        board1.setArray(11, 45, true);
        board1.setArray(15, 45, true);
        board1.setArray(10, 47, true);
        board1.setArray(11, 47, true);
        board1.setArray(15, 47, true);
        board1.setArray(16, 47, true);
        board1.setArray(12, 57, true);
        board1.setArray(13, 57, true);
        board1.setArray(12, 58, true);
        board1.setArray(13, 58, true);
    }
    
    else if (quad == 3)
    {
        board1.setArray(24, 3, true);
        board1.setArray(25, 3, true);
        board1.setArray(24, 4, true);
        board1.setArray(25, 4, true);
        board1.setArray(24, 13, true);
        board1.setArray(25, 13, true);
        board1.setArray(26, 13, true);
        board1.setArray(23, 14, true);
        board1.setArray(27, 14, true);
        board1.setArray(22, 15, true);
        board1.setArray(28, 15, true);
        board1.setArray(22, 16, true);
        board1.setArray(28, 16, true);
        board1.setArray(25, 17, true);
        board1.setArray(23, 18, true);
        board1.setArray(27, 18, true);
        board1.setArray(24, 19, true);
        board1.setArray(25, 19, true);
        board1.setArray(26, 19, true);
        board1.setArray(25, 20, true);
        board1.setArray(22, 23, true);
        board1.setArray(23, 23, true);
        board1.setArray(24, 23, true);
        board1.setArray(22, 24, true);
        board1.setArray(23, 24, true);
        board1.setArray(24, 24, true);
        board1.setArray(21, 25, true);
        board1.setArray(25, 25, true);
        board1.setArray(20, 27, true);
        board1.setArray(21, 27, true);
        board1.setArray(25, 27, true);
        board1.setArray(26, 27, true);
        board1.setArray(22, 37, true);
        board1.setArray(23, 37, true);
        board1.setArray(22, 38, true);
        board1.setArray(23, 38, true);
    }
    
    else if (quad == 4)
    {
        board1.setArray(24, 23, true);
        board1.setArray(25, 23, true);
        board1.setArray(24, 24, true);
        board1.setArray(25, 24, true);
        board1.setArray(24, 33, true);
        board1.setArray(25, 33, true);
        board1.setArray(26, 33, true);
        board1.setArray(23, 34, true);
        board1.setArray(27, 34, true);
        board1.setArray(22, 35, true);
        board1.setArray(28, 35, true);
        board1.setArray(22, 36, true);
        board1.setArray(28, 36, true);
        board1.setArray(25, 37, true);
        board1.setArray(23, 38, true);
        board1.setArray(27, 38, true);
        board1.setArray(24, 39, true);
        board1.setArray(25, 39, true);
        board1.setArray(26, 39, true);
        board1.setArray(25, 40, true);
        board1.setArray(22, 43, true);
        board1.setArray(23, 43, true);
        board1.setArray(24, 43, true);
        board1.setArray(22, 44, true);
        board1.setArray(23, 44, true);
        board1.setArray(24, 44, true);
        board1.setArray(21, 45, true);
        board1.setArray(25, 45, true);
        board1.setArray(20, 47, true);
        board1.setArray(21, 47, true);
        board1.setArray(25, 47, true);
        board1.setArray(26, 47, true);
        board1.setArray(22, 57, true);
        board1.setArray(23, 57, true);
        board1.setArray(22, 58, true);
        board1.setArray(23, 58, true);
    }
    
    else if (quad == 5)
    {
        board1.setArray(19, 13, true);
        board1.setArray(20, 13, true);
        board1.setArray(19, 14, true);
        board1.setArray(20, 14, true);
        board1.setArray(19, 23, true);
        board1.setArray(20, 23, true);
        board1.setArray(21, 23, true);
        board1.setArray(18, 24, true);
        board1.setArray(22, 24, true);
        board1.setArray(17, 25, true);
        board1.setArray(23, 25, true);
        board1.setArray(17, 26, true);
        board1.setArray(23, 26, true);
        board1.setArray(20, 27, true);
        board1.setArray(18, 28, true);
        board1.setArray(22, 28, true);
        board1.setArray(19, 29, true);
        board1.setArray(20, 29, true);
        board1.setArray(21, 29, true);
        board1.setArray(20, 30, true);
        board1.setArray(17, 33, true);
        board1.setArray(18, 33, true);
        board1.setArray(19, 33, true);
        board1.setArray(17, 34, true);
        board1.setArray(18, 34, true);
        board1.setArray(19, 34, true);
        board1.setArray(16, 35, true);
        board1.setArray(20, 35, true);
        board1.setArray(15, 37, true);
        board1.setArray(16, 37, true);
        board1.setArray(20, 37, true);
        board1.setArray(21, 37, true);
        board1.setArray(17, 47, true);
        board1.setArray(18, 47, true);
        board1.setArray(17, 48, true);
        board1.setArray(18, 48, true);
    }
}


/***********************************************************************
 * This function will determine the fate of the cells within an array  *
 **********************************************************************/
void Game::getFate(int flip)
{
    int count = 0;
    
    if (flip % 2 != 0)
    {
        for (int row = 1; row < 39; row++)
        {
            for (int col = 1; col < 59; col++)
            {
                // Checks performed for live cells
                if (board1.getArray(row - 1, col - 1))
                {
                    count++;
                }
                
                if (board1.getArray(row - 1, col))
                {
                    count++;
                }
                
                if (board1.getArray(row - 1, col + 1))
                {
                    count++;
                }
                
                if (board1.getArray(row, col - 1))
                {
                    count++;
                }
                
                if (board1.getArray(row, col + 1))
                {
                    count++;
                }
                
                if (board1.getArray(row + 1, col - 1))
                {
                    count++;
                }
                
                if (board1.getArray(row + 1, col))
                {
                    count++;
                }
                
                if (board1.getArray(row + 1, col + 1))
                {
                    count++;
                }
                
                // Cell dies from lonliness
                if (count < 2 && board1.getArray(row, col))
                {
                    board2.setArray(row, col, false);
                }
                
                // Cell dies from overcrowding
                if (count > 3 && board1.getArray(row, col))
                {
                    board2.setArray(row, col, false);
                }
                
                // Birth of a new cell
                if (count == 3 && !board1.getArray(row, col))
                {
                    board2.setArray(row, col, true);
                }
                
                // Live cell stays alive
                if ((count == 3 || count == 2) && board1.getArray(row, col))
                {
                    board2.setArray(row, col, true);
                }
                
                count = 0;
            }
        }
    }
    
    if (flip % 2 == 0)
    {
        for (int row = 1; row < 39; row++)
        {
            for (int col = 1; col < 59; col++)
            {
                // Checks performed for live cells
                if (board2.getArray(row - 1, col - 1))
                {
                    count++;
                }
                
                if (board2.getArray(row - 1, col))
                {
                    count++;
                }
                
                if (board2.getArray(row - 1, col + 1))
                {
                    count++;
                }
                
                if (board2.getArray(row, col - 1))
                {
                    count++;
                }
                
                if (board2.getArray(row, col + 1))
                {
                    count++;
                }
                
                if (board2.getArray(row + 1, col - 1))
                {
                    count++;
                }
                
                if (board2.getArray(row + 1, col))
                {
                    count++;
                }
                
                if (board2.getArray(row + 1, col + 1))
                {
                    count++;
                }
                
                // Cell dies from lonliness
                if (count < 2 && board2.getArray(row, col))
                {
                    board1.setArray(row, col, false);
                }
                
                // Cell dies from overcrowding
                if (count > 3 && board2.getArray(row, col))
                {
                    board1.setArray(row, col, false);
                }
                
                // Birth of a new cell
                if (count == 3 && !board2.getArray(row, col))
                {
                    board1.setArray(row, col, true);
                }
                
                // Live cell stays alive
                if ((count == 3 || count == 2) && board2.getArray(row, col))
                {
                    board1.setArray(row, col, true);
                }
                
                count = 0;
            }
        }
    }
}


/***********************************************************************
 * This function will display the cells in an array. "_" cell is dead  *
 * "0" cell is alive.                                                  *
 **********************************************************************/
void Game::display(int board)
{
    if (board % 2 == 0)
    {
        for (int row = 10; row < 30; row++)
        {
            for (int col = 10; col < 50; col++)
            {
                if (board1.getArray(row, col))
                {
                    cout << "O";
                }
                else
                {
                    cout << "_";
                }
            }
            cout << endl;
        }
    }
    
    else if (board % 2 != 0)
    {
        for (int row = 10; row < 30; row++)
        {
            for (int col = 10; col < 50; col++)
            {
                if (board2.getArray(row, col))
                {
                    cout << "O";
                }
                else
                {
                    cout << "_";
                }
            }
            cout << endl;
        }
    }
}




















