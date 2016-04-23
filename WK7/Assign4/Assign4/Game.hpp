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
#include "Stack.hpp"
#include "Queue.hpp"

class Game
{
protected:
    bool AchillesAttackP1; // used to track whether player one has cut the achilles of their opponent
    bool AchillesAttackP2; // used to track whether player two has cut the achilles of their opponent
    Creature* player1;
    Creature* player2;
    Queue Player1_Winners;
    Queue Player2_Winners;
    Stack Losers;
    
public:
    Game();     // Constructor
    void deletePlayers();    // Delete players once battle is over to free heap memory used
    void getPlayer1(int); // Function used to create a creature Queue for player 1
    void getPlayer2(int); // Function used to create a creature Queue for player 2
    void Battle();     // Function used to simulate battle b/w two creatures.
    void Tournament(); // Function used to control the tournament
};

#endif
