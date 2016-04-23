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

class Game
{
protected:
    bool AchillesAttackP1; // used to track whether player one has cut the achilles of their opponent
    bool AchillesAttackP2; // used to track whether player two has cut the achilles of their opponent
    Creature* player1;
    Creature* player2;
    
public:
    Game();     // Constructor
    void deletePlayers();    // Delete players once battle is over to free heap memory used
    void getPlayer1(); // Function used to create a creature for player 1
    void getPlayer2(); // Function used to create a creature for player 2
    void Battle();     // Function used to simulate battle b/w two creatures.
};

#endif
