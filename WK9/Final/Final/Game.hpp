//
//  Game.hpp
//  Assign3
//
//  Created by Jason Cearley on 10/30/15.
//  Copyright © 2015 Jason Cearley. All rights reserved.
//

#ifndef Game_hpp
#define Game_hpp

#include <stdio.h>
#include "Creature.hpp"
#include "Map.hpp"
#include "Room.hpp"
#include "Weapons.hpp"
#include "Player.hpp"

class Game
{
protected:
    bool AchillesAttackP1; // used to track whether player one has cut the achilles of their opponent
    bool AchillesAttackP2; // used to track whether player two has cut the achilles of their opponent
    bool Special; // used to track whether player one has applied special feature of the current room
    Map mordor;
    Player* player1;
    Creature* player2;
    Room* local;
    Weapons* big_baby;
    
public:
    Game(); // Constructor
    ~Game(); // Destructor
    void deletePlayers(); // Delete players once battle is over to free heap memory used
    void getPlayer1(); // Function used to create a creature for player 1
    void Battle(); // Function used to simulate battle b/w two creatures.
    void move(); // function used to move from room to room for use in main.cpp
    int getPlayer1Strength(); // function used to get the strength of player1 for use in main.cpp
    int getPlayer1Wins(); // function used to get the wins of player1 for use in main.cpp
    void endGame(); // funciton used to free all heap memory prior to ending game
};

#endif
