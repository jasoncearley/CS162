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
#include "Player.hpp"

/***********************************************************************
 * Game constructor used to initialize a game object to default
 * values.
 **********************************************************************/
Game::Game()
{
    AchillesAttackP1 = false;
    AchillesAttackP2 = false;
    Special = false;
    player1 = NULL;
    player2 = NULL;
    local = NULL;
    big_baby = NULL;
    mordor.create_map();
    
    // used for testing
    /*
    cout << "AchillesAttackP1= " << AchillesAttackP1 << endl;
    cout << "AchillesAttackP2= " << AchillesAttackP2 << endl;
     */
}

/***********************************************************************
 * Game destructor used to free heap memory used. 
 **********************************************************************/
Game::~Game()
{
    
}

/***********************************************************************
 * Function used to delete players at end of battle to free heap memory
 * used.
 **********************************************************************/
void Game::deletePlayers()
{
    // delete players that were created using "new" in getPlayer functions
    delete player1;
}

/***********************************************************************
 * Function used to create player one with desired creature.
 **********************************************************************/
void Game::getPlayer1()
{
    // store user given creature name
    string tempName = "";
    
    cout << "You are a Barbarian creature that has been placed in the inner chamber of Mordor." << endl
    << "There are a total of 5 chambers with a different creature in each chamber. You must beat all the" << endl
    << "creatures to win the game. Once you defeat a creature you will be able to take their weapon with you." << endl
    << "You are only allowed to carry 3 weapons with you at any one time. You will also be healed some random" << endl
    << "amount after each battle. If you are killed, you will have to start over. Good Luck!" << endl;
    
    player1 = new Player();
    
    cout << endl << "What would you like to be called? " << endl;
    getline(cin, tempName);
    
    player1->setUserGivenName(tempName);
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
    
    int choice = 0;
    
    // establish opponent based on player room location
    player2 = mordor.getPlayerOpponent();
    
    // check to ensure player1 hasn't already beat this creature
    if (player2->getStrength() <= 0)
    {
        cout << "You have already beaten this creature." << endl;
        
        big_baby = mordor.getWeapon();
        
        cout << "Would you like to add " << big_baby->getName() << " to your bag?" << endl
        << "Enter a 1 for yes and 2 for no: ";
        
        choice = user_selection();
        
        if (choice == 1)
        {
            if (player1->getBagSize() >= 4)
            {
                cout << "Your bag is too full. You will have to remove a weapon first." << endl
                << "Please choose from the following list, the weapon you would like to remove: " << endl
                << "1. " << player1->displayBag(1) << endl
                << "2. " << player1->displayBag(2) << endl
                << "3. " << player1->displayBag(3) << endl
                << "4. None" << endl;
                
                choice = weapon_selection();
                
                if (choice != 4)
                {
                    player1->removeFromBag(choice);
                }
            }
            
            player1->addToBag(big_baby);
        }
        
        return;
    }

    player1->restoreDefault(big_baby->removeWeapon());
    
    cout << endl;
    
    if (player1->getBagSize() == 2)
    {
        cout << "Please choose the weapon you would like to use: " << endl
        << "1. " << player1->displayBag(1) << endl
        << "2. None" << endl;
        
        choice = user_selection();
        
        if (choice != 2)
        {
            big_baby = player1->getWeapon(choice);
            
            player1->applyWeapon(big_baby->useWeapon());
        }
    }
    
    else if (player1->getBagSize() == 3)
    {
        cout << "Please choose the weapon you would like to use: " << endl
        << "1. " << player1->displayBag(1) << endl
        << "2. " << player1->displayBag(2) << endl
        << "3. None" << endl;
        
        choice = weapon_selection2();
        
        if (choice != 3)
        {
            big_baby = player1->getWeapon(choice);
            
            player1->applyWeapon(big_baby->useWeapon());
        }
    }
    
    else if (player1->getBagSize() == 4)
    {
        cout << "Please choose the weapon you would like to use: " << endl
        << "1. " << player1->displayBag(1) << endl
        << "2. " << player1->displayBag(2) << endl
        << "3. " << player1->displayBag(3) << endl
        << "4. None" << endl;
        
        choice = weapon_selection();
        
        if (choice != 4)
        {
            big_baby = player1->getWeapon(choice);
            
            player1->applyWeapon(big_baby->useWeapon());
        }
    }
    
    // do/while loop to continue battle until a player has <= 0 strength points
    do
    {
        cout << endl << "Round " << round + 1 << "...." << endl;
        
        // Player 1 is attacking player 2
        if (round % 2 == 0)
        {
            cout << player1->getUserGivenName() << " Attacking " << player2->getName() << "......" << endl;
            
            // pause to allow player to see what is going on
            usleep(1000000);
            
            // Get attack roll value for creature making function call, player 2 achilles attack is passed to
            // let the getAttack function know whether to halve attack roll or not
            attackRoll = player1->getAttack(AchillesAttackP2);
            
            cout << "The attack roll is: " << attackRoll << endl;
            
            // apply room special feature based on player location
            if (attackRoll == 10 && !Special)
            {
                local = mordor.getPlayerLocation();
                
                local->special_feature();
                
                Special = true;
                
                local = NULL;
            }
            
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
            
            cout << player1->getUserGivenName() << " Strength: " << player1->getStrength() << endl
            << player2->getName() << " Strength: " << player2->getStrength() << endl;
        }
        
        // Player 2 is attacking player1
        else if (round % 2 != 0 && player2->getStrength() > 0)
        {
            cout << player2->getName() << " Attacking " << player1->getUserGivenName() << "......" << endl;
            
            // pause to allow player to see what is going on
            usleep(1000000);
            
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
            
            cout << player1->getUserGivenName() << " Strength: " << player1->getStrength() << endl
            << player2->getName() << " Strength: " << player2->getStrength() << endl;
        }
        
        // increment round to move on
        round++;
        
    } while (player1->getStrength() > 0 && player2->getStrength() > 0);
    
    
    // Declare a winner
    if (player2->getStrength() <= 0)
    {
        cout << endl << player1->getUserGivenName() << " WINS!" << endl;
        
        // Increment winning creature's win count
        int a = 1;
        player1->setWins(a);
        
        // Heal player 1 some random percent
        player1->heal();
        
        choice = 0;
        
        big_baby = mordor.getWeapon();
        
        cout << endl << "Would you like to add " << big_baby->getName() << " to your bag?" << endl
        << "Enter a 1 for yes and 2 for no: ";
        
        choice = user_selection();
        
        if (choice == 1)
        {
            if (player1->getBagSize() >= 4)
            {
                cout << endl << "Your bag is too full. You will have to remove a weapon first." << endl
                << "Please choose from the following list, the weapon you would like to remove: " << endl
                << "1. " << player1->displayBag(1) << endl
                << "2. " << player1->displayBag(2) << endl
                << "3. " << player1->displayBag(3) << endl
                << "4. None" << endl;
                
                choice = weapon_selection();
                
                if (choice != 4)
                {
                    player1->removeFromBag(choice);
                }
            }
            
            player1->addToBag(big_baby);
        }
        
        // Reset bools for both players in case another battle is played without exiting program
        AchillesAttackP1 = false;
        AchillesAttackP2 = false;
        Special = false;
    }

    if (player1->getStrength() <= 0)
    {
        cout << endl << player2->getName() << " WINS!" << endl;
        
        //mordor.deletMap();
    }
}

/***********************************************************************
 * Function used to move player from one room to the next.
 **********************************************************************/
void Game::move()
{
    mordor.traverse_map();
    
    // exit current game since player1 choose opton 5 from room menu.
    if (!mordor.getPlayerLocation())
    {
        player1->setStrength(0);
    }
}

/***********************************************************************
 * Function used to get player1's strength for use in Main.cpp to 
 * control a do/while loop.
 **********************************************************************/
int Game::getPlayer1Strength()
{
    return player1->getStrength();
}

/***********************************************************************
 * Function used to free heap memory and reset game. 
 **********************************************************************/
void Game::endGame()
{
    mordor.deletMap();
    
    deletePlayers();
}

/***********************************************************************
 * Function used to get the win total of player one to check if he/she
 * has defeated all the creatures.
 **********************************************************************/
int Game::getPlayer1Wins()
{
    return player1->getWins();
}









