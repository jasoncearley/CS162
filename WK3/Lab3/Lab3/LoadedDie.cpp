
#include "LoadedDie.hpp"

/*********************************************************************
 ** Function: LoadedDie::LoadedDie()
 ** Description: Default Constructor
 ** Parameters: None
 ** Pre-Conditions: None
 ** Post-Conditions: None
 *********************************************************************/

LoadedDie::LoadedDie() {
    this->num_sides = 0;
}

/*********************************************************************
 ** Function: LoadedDie::roll()
 ** Description: Returns the value of a single roll of the die for the
                 LoadedDie object
 ** Parameters: None
 ** Pre-Conditions: None
 ** Post-Conditions: None
 *********************************************************************/

int LoadedDie::roll() {
    
    int total = Die::getDieNum();
    
    // if/else statement to return a value higher than normal
    // but not > the # of sides on the die
    if (total < (num_sides/2))
    {
        return total * 2;
    }
    
    else
    {
        return total;
    }
}

