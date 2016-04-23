//
//  Game.cpp
//  Assign3
//
//  Created by Jason Cearley on 10/30/15.
//  Copyright © 2015 Jason Cearley. All rights reserved.
//

// standard input/output functions
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include "Game.hpp"
#include "Menu.hpp"
#include "Barbarian.hpp"
#include "Reptile.hpp"
#include "BlueMan.hpp"
#include "Goblin.hpp"
#include "Shadow.hpp"

/***********************************************************************
 * Game constructor used to initialize a game object to default
 * values.
 **********************************************************************/
Game::Game()
{
    AchillesAttackP1 = false;
    AchillesAttackP2 = false;
    player1 = NULL;
    player2 = NULL;
    
    // used for testing
    /*
    cout << "AchillesAttackP1= " << AchillesAttackP1 << endl;
    cout << "AchillesAttackP2= " << AchillesAttackP2 << endl;
     */
}

/***********************************************************************
 * Function used to delete players at end of battle to free heap memory
 * used.
 **********************************************************************/
void Game::deletePlayers()
{
    // delete players that were created using "new" in getPlayer functions
    delete player1;
    delete player2;
}

/***********************************************************************
 * Function used to create player one with desired creature.
 **********************************************************************/
void Game::getPlayer1()
{
    // Variable used to hold player's choice
    int choice = 0;
    
    cout << "Player 1 select your creature....." << endl;
    
    // display menu consisting of available creatures for user to choose from
    creature_select_menu();
    
    // function call to get, validate, and return user's selection
    choice = get_creature_select();
    
    if (choice == 1)
    {
        // create a Goblin and assign to Player1
        player1 = new Goblin();
    }
    
    else if (choice == 2)
    {
        // create a Barbarian and assign to Player1
        player1 = new Barbarian();
    }
    
    else if (choice == 3)
    {
        // Create a Reptile Person and assign to Player1
        player1 = new Reptile();
    }
    
    else if (choice == 4)
    {
        // create a Blue Man and assign to Player1
        player1 = new BlueMan();
    }
    
    else if (choice == 5)
    {
        // create a Shadow and assign to Player1
        player1 = new TheShadow();
    }
}

/***********************************************************************
 * Function used to create player two with desired creature.
 **********************************************************************/
void Game::getPlayer2()
{
    // Variable used to hold player's choice
    int choice = 0;
    
    cout << "Player 2 select your creature....." << endl;
    
    // display menu consisting of available creatures for user to choose from
    creature_select_menu();
    
    // function call to get, validate, and return user's selection
    choice = get_creature_select();
    
    if (choice == 1)
    {
        // create a Goblin and assign to Player2
        player2 = new Goblin();
    }
    
    else if (choice == 2)
    {
        // create a Barbarian and assign to Player2
        player2 = new Barbarian();
    }
    
    else if (choice == 3)
    {
        // Create a Reptile Person and assign to Player2
        player2 = new Reptile();
    }
    
    else if (choice == 4)
    {
        // create a Blue Man and assign to Player2
        player2 = new BlueMan();
    }
    
    else if (choice == 5)
    {
        // create a Shadow and assign to Player2
        player2 = new TheShadow();
    }
}

/***********************************************************************
 * This function is used when two creatures are battling each other. It 
 * will make all function calls to get the attack and defence rolls as 
 * well as armor values. The function will continue until a player has
 * <= 0 Strength points at which time it print winner to the screen and
 * return.
 **********************************************************************/
void Game::Battle()
{
    // Variables used to store die rolls, amount of damage inflicted, and a creature's armor value
    int attackRoll = 0, defenceRoll = 0, damage = 0, armor = 0;
    
    // Variable to keep track of the battle rounds
    int round = 0;
    
    // do/while loop to continue battle until a player has <= 0 strength points
    do
    {
        cout << endl << "Round " << round + 1 << "...." << endl;
        
        // Player 1 is attacking player 2
        if (round % 2 == 0)
        {
            cout << "Player 1 Attacking Player 2......" << endl;
            
            // pause to allow player to see what is going on
            usleep(750000);
            
            // Get attack roll value for creature making function call, player 2 achilles attack is passed to
            // let the getAttack function know whether to halve attack roll or not
            attackRoll = player1->getAttack(AchillesAttackP2);
            
            cout << "The attack roll is: " << attackRoll << endl;
            
            // apply special achilles attack to non-goblin opponents on first occurance of a 12 rolled
            if (attackRoll == 12 && player1->getName() == "Goblin" && player2->getName() != "Goblin" && !AchillesAttackP1)
            {
                // used to track whether player one has cut the achilles of their opponent
                AchillesAttackP1 = true;
                
                cout << "You just cut the achilles of your oppenent. Their attacks are now at half strength." << endl;
            }
            
            // Get defence roll for opponent
            defenceRoll = player2->getDefence();
            
            cout << "The defence roll is: " << defenceRoll << endl;
            
            // account for possibility that the defence value is > the attack value
            if (defenceRoll >= attackRoll)
            {
                cout << "You did not cause any damage since the defence roll exceeded the attack roll." << endl;
            }
            
            else if (attackRoll > defenceRoll)
            {
                // store armor value to a variable to account for the shadows special ability
                // I want to be able to display the armor value to the screen without making another function call
                armor = player2->getArmor();
                
                // total amount of damage inflicted on opponent
                damage =  (attackRoll - defenceRoll) - (armor);
                
                // account for possibility that the opponents armor value is > damage value
                if (damage > 0)
                {
                    cout << "The total damage is: (" << attackRoll << " - " << defenceRoll << ")"
                    << " - " << armor << " = " << damage << endl;
                    
                    // update Opponent's Stength value accordingly
                    player2->setStrength(player2->getStrength() - damage);
                }
                
                // opponent's armor value is large enough to block the attack
                else
                {
                    cout << "You did not cause any damage since your opponent's armor was able to block the blow." << endl;
                }
            }
            
            cout << "Player 1 Strength: " << player1->getStrength() << endl
            << "Player 2 Strength: " << player2->getStrength() << endl;
        }
        
        // Player 2 is attacking player1
        else if (round % 2 != 0 && player2->getStrength() > 0)
        {
            cout << "Player 2 Attacking Player 1......" << endl;
            
            // pause to allow player to see what is going on
            usleep(750000);
            
            // Get attack roll value for creature making function call, player 1 achilles attack is passed to
            // let the getAttack function know whether to halve attack roll or not
            attackRoll = player2->getAttack(AchillesAttackP1);
            
            cout << "The attack roll is: " << attackRoll << endl;
            
            // apply special achilles attack to non-goblin opponents on first occurance of a 12 rolled
            if (attackRoll == 12 && player2->getName() == "Goblin" && player1->getName() != "Goblin" && !AchillesAttackP2)
            {
                // used to track whether player two has cut the achilles of their opponent
                AchillesAttackP2 = true;
                
                cout << "You just cut the achilles of your oppenent. Their attacks are now at half strength." << endl;
            }
            
            // Get defence roll for opponent
            defenceRoll = player1->getDefence();
            
            cout << "The defence roll is: " << defenceRoll << endl;
            
            // account for possibility that the defence value is > the attack value
            if (defenceRoll >= attackRoll)
            {
                cout << "You did not cause any damage since the defence roll exceeded the attack roll." << endl;
            }
            
            else if (attackRoll > defenceRoll)
            {
                // store armor value to a variable to account for the shadows special ability
                // I want to be able to display the armor value to the screen without making another function call
                armor = player1->getArmor();
                
                // total amount of damage inflicted on opponent
                damage =  (attackRoll - defenceRoll) - (armor);
                
                // account for possibility that the opponents armor value is > damage value
                if (damage > 0)
                {
                    cout << "The total damage is: (" << attackRoll << " - " << defenceRoll << ")"
                    << " - " << armor << " = " << damage << endl;
                    
                    // update Opponent's Stength value accordingly
                    player1->setStrength(player1->getStrength() - damage);
                }
                
                // opponent's armor value is large enough to block the attack
                else
                {
                    cout << "You did not cause any damage since your opponent's armor was able to block the blow." << endl;
                }
            }
            
            cout << "Player 1 Strength: " << player1->getStrength() << endl
            << "Player 2 Strength: " << player2->getStrength() << endl;
        }
        
        // increment round to move on
        round++;
        
    } while (player1->getStrength() > 0 && player2->getStrength() > 0);
    
    
    // Declare a winner
    if (player2->getStrength() <= 0)
    {
        cout << endl << "Player 1 WINS!" << endl;
    }

    if (player1->getStrength() <= 0)
    {
        cout << endl << "Player 2 WINS!" << endl;
    }
    
    // Reset achilles attacks for both players in case another battle is played without exiting program
    AchillesAttackP1 = false;
    AchillesAttackP2 = false;
}

















