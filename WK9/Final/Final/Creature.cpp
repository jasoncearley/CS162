//
//  Creature.cpp
//  Assign3
//
//  Created by Jason Cearley on 10/30/15.
//  Copyright © 2015 Jason Cearley. All rights reserved.
//

#include <iostream>
using std::cout;
using std::endl;
#include "Creature.hpp"
#include "Dice.hpp"

/***********************************************************************
 * Creature constructor used to initialize a creature object to default
 * values.
 **********************************************************************/
Creature::Creature()
{
    name = "";
    user_given_name = "";
    Attack = "";
    Defence = "";
    Armor = 0;
    Strength = 0;
    team = 0;
    wins = 0;
    damage_inflicted = 0;
}

/***********************************************************************
 * Virtual Creature destructor used to free momory.
 **********************************************************************/
Creature::~Creature()
{
    
}

/***********************************************************************
 * This function displays the name of the creature object.
 **********************************************************************/
string Creature::getName()
{
    return name;
}

/***********************************************************************
 * This function sets the user given name of the creature object.
 **********************************************************************/
void Creature::setUserGivenName(string ugn)
{
    user_given_name = ugn;
}

/***********************************************************************
 * This function displays the user given name of the creature object.
 **********************************************************************/
string Creature::getUserGivenName()
{
    return user_given_name;
}

/***********************************************************************
 * This function will get the attack roll for a creature based on 
 * their attack data member value. It will convert the first & last 
 * character of the Attack string to an int for use in the DiceRoll()
 * by passing the correct number of rolls and sides for the die.
 **********************************************************************/
int Creature::getAttack(bool achilles)
{
    // Variables used to store the die values needed to pass to the DiceRoll()
    int rolls = 0, sides = 0;
    
    // get normal attack roll if achilles is not cut
    if (!achilles)
    {
        // if/else statement to account for the Attack date members that have die with <= 9 sides
        if (Attack.length() == 3)
        {
            // convert rolls and sides from chars in the attack string to ints by subtracting 48 from the asci value
            rolls = Attack[0]- 48;
            sides = Attack[2] - 48;
            
            // used for testing
            //cout << "Rolls = " << rolls << endl
            //<< "Sides = " << sides << endl;
            
            return DiceRoll(rolls, sides);
        }
        
        // if/else statement to account for the Attack date members that have die with >9 sides
        else
        {
            // convert rolls and sides from chars in the attack string to ints by subtracting 48 from the asci value
            rolls = Attack[0]- 48;
            sides = ((Attack[2] - 48) * 10) + (Attack[3] - 48);
            
            // used for testing
            //cout << "Rolls = " << rolls << endl
            //<< "Sides = " << sides << endl;
            
            return DiceRoll(rolls, sides);
        }
    }
    
    // cut attack roll in half if achilles is cut by halving the sides on the attack die
    else
    {
        // if/else statement to account for the Attack date members that have die with <= 9 sides
        if (Attack.length() == 3)
        {
            // convert rolls and sides from chars in the attack string to ints by subtracting 48 from the asci value
            rolls = Attack[0]- 48;
            sides = (Attack[2] - 48)/2;
            
            // used for testing
            //cout << "Rolls = " << rolls << endl
            //<< "Sides = " << sides << endl;
            
            return DiceRoll(rolls, sides);
        }
        
        // if/else statement to account for the Attack date members that have die with > 9 sides
        else
        {
            // convert rolls and sides from chars in the attack string to ints by subtracting 48 from the asci value
            rolls = Attack[0]- 48;
            sides = (((Attack[2] - 48) * 10) + (Attack[3] - 48))/2;
            
            // used for testing
            //cout << "Rolls = " << rolls << endl
            //<< "Sides = " << sides << endl;
            
            return DiceRoll(rolls, sides);
        }
    }
    
}

/***********************************************************************
 * This function will get the defence roll for a creature based on
 * their defence data member value. It will convert the first & last
 * character of the Defence string to an int for use in the DiceRoll()
 * by passing the correct number of rolls and sides for the die.
 **********************************************************************/
int Creature::getDefence()
{
    // Variables used to store the die values needed to pass to the DiceRoll()
    int rolls = 0, sides = 0;
    
    // if/else statement to account for the Attack date members that have die with <= 9 sides
    if (Defence.length() == 3)
    {
        // convert rolls and sides from chars in the attack string to ints by subtracting 48 from the asci value
        rolls = Defence[0]- 48;
        sides = Defence[2] - 48;
        
        // used for testing
        //cout << "Rolls = " << rolls << endl
        //<< "Sides = " << sides << endl;
        
        return DiceRoll(rolls, sides);
    }
    
    // if/else statement to account for the Attack date members that have die with >9 sides
    else
    {
        // convert rolls and sides from chars in the attack string to ints by subtracting 48 from the asci value
        rolls = Defence[0]- 48;
        sides = ((Defence[2] - 48) * 10) + (Defence[3] - 48);
        
        // used for testing
        //cout << "Rolls = " << rolls << endl
        //<< "Sides = " << sides << endl;
        
        return DiceRoll(rolls, sides);
    }
}

/***********************************************************************
 * This function is used to get the Strength value of the creature
 * object. This function is used during the Battle function for updating 
 * and displaying the current Strength value.
 **********************************************************************/
int Creature::getStrength()
{
    return Strength;
}

/***********************************************************************
 * This function is used to set the Strength value of the creature
 * object. This function is used during the Battle function for updating
 * the current Strength value.
 **********************************************************************/
void Creature::setStrength(int s)
{
    Strength = s;
}

/***********************************************************************
 * This function displays the team of the creature object.
 **********************************************************************/
int Creature::getTeam()
{
    return team;
}

/***********************************************************************
 * This function sets the team of the creature object.
 **********************************************************************/
void Creature::setTeam(int t)
{
    team = t;
}

/***********************************************************************
 * This function displays the wins of the creature object.
 **********************************************************************/
int Creature::getWins()
{
    return wins;
}

/***********************************************************************
 * This function sets the wins of the creature object.
 **********************************************************************/
void Creature::setWins(int w)
{
    wins += w;
}

/***********************************************************************
 * This function displays the damage inflicted by the creature object.
 **********************************************************************/
int Creature::getDamageInflicted()
{
    return damage_inflicted;
}

/***********************************************************************
 * This function sets the damage inflicted by the creature object.
 **********************************************************************/
void Creature::setDamageInflicted(int di)
{
    damage_inflicted += di;
}

/***********************************************************************
 * This function is used to heal a winning creature. It will raise the 
 * strength value of the creature by a certain percentage.
 **********************************************************************/
void Creature::heal()
{
    double percent = 0.0;
    
    // Roll a 10 sided die once and convert value returned to a decimal
    percent = static_cast<double>(DiceRoll(1, 10))/10.0;
    
    cout << "Healing....." << endl
    << "Your strength was " << Strength << " and has been raised by "
    << ((12.0 - static_cast<double>(Strength)) * percent) << ".";
    
    Strength = Strength + ((12.0 - static_cast<double>(Strength)) * percent);
    
    cout << " It is now " << Strength << "." << endl;
}





















