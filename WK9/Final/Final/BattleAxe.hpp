//
//  BattleAxe.hpp
//  Final
//
//  Created by Jason Cearley on 11/27/15.
//  Copyright © 2015 Jason Cearley. All rights reserved.
//

#ifndef BattleAxe_hpp
#define BattleAxe_hpp

#include <stdio.h>
#include "Weapons.hpp"

class BattleAxe: public Weapons
{
public:
    BattleAxe(); // Constructor
    virtual string useWeapon(); // Function to use the BattleAxe
};

#endif /* BattleAxe_hpp */
