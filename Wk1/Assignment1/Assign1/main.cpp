//
//  main.cpp
//  Assignment1
//
//  Created by Jason Cearley on 9/30/15.
//  Copyright © 2015 Jason Cearley. All rights reserved.
//

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <unistd.h>
#include <cstdlib>
#include "Classes.hpp"
#include "Menu.hpp"


int main()
{
    int menu_choice = 0,    // Holds the user's menu choice
    start = 0,              // Holds the user's starting quadrant
    countFlips = 1;         // Variable used to toggle b/w 2 arrays
    Game game1;             // Create a Game object to use class functions
    
    // do/while loop to allow user to continue w/o exiting
    do
    {
        // Function call to display menu
        menu();
        
        // Assign menu_choice the value returned by the user_selection function
        menu_choice = user_selection();
        
        // If statement to ensure starting local is only displayed when user isn't quiting
        if (menu_choice != 4)
        {
            // Function call to display menu
            showStartingLocal();
            
            // Assign start the value returned by the getStartingLocal function
            start = getStartingLocal();
        }
        
        // If/else if to perform user's menu choice of a fixed oscillator
        if (menu_choice == 1)
        {
            // fixed oscillator in quadrant 1
            if (start == 1)
            {
                // Variable used to toggle b/w two arrays
                countFlips = 0;
                
                // Reset all cells in both arrays to false
                game1.reset(0);
                game1.reset(1);
                
                // Initialize board1 with a fixed oscillator in quad 1
                game1.setFixedOscillator(start);
                
                cout << "Fixed Oscillator will run for 10 cycles. Press <Enter> to continue." << endl;
                cin.get();
                
                do
                {
                    // Determine fate of living/dead cells
                    game1.getFate(countFlips);
                    
                    // clear screen to keep board "stationary"
                    system("clear");
                    
                    // Reset other board for next iteration
                    game1.reset(countFlips);
                    
                    // Display the correct array
                    game1.display(countFlips);
                    
                    cout << endl;
                    
                    // Increment counter used to toggle b/w arrays
                    countFlips++;
                    
                    // sleep for 0.75 secs to allow user to see "movement" of cells
                    usleep(250000);
                    
                } while (countFlips < 10);
            }
            
            // fixed oscillator in quadrant 2
            if (start == 2)
            {
                // Variable used to toggle b/w two arrays
                countFlips = 0;
                
                // Reset all cells in both arrays to false
                game1.reset(0);
                game1.reset(1);
                
                // Initialize board1 with a fixed oscillator in quad 2
                game1.setFixedOscillator(start);
                
                cout << "Fixed Oscillator will run for 10 cycles. Press <Enter> to continue." << endl;
                cin.get();
                
                do
                {
                    // Determine fate of living/dead cells
                    game1.getFate(countFlips);
                    
                    // clear screen to keep board "stationary"
                    system("clear");
                    
                    // Reset other board for next iteration
                    game1.reset(countFlips);
                    
                    // Display the correct array
                    game1.display(countFlips);
                    
                    cout << endl;
                    
                    // Increment counter used to toggle b/w arrays
                    countFlips++;
                    
                    // sleep for 0.75 secs to allow user to see "movement" of cells
                    usleep(250000);
                    
                } while (countFlips < 10);
            }
            
            // fixed oscillator in quadrant 3
            if (start == 3)
            {
                // Variable used to toggle b/w two arrays
                countFlips = 0;
                
                // Reset all cells in both arrays to false
                game1.reset(0);
                game1.reset(1);
                
                // Initialize board1 with a fixed oscillator in quad 3
                game1.setFixedOscillator(start);
                
                cout << "Fixed Oscillator will run for 10 cycles. Press <Enter> to continue." << endl;
                cin.get();
                
                do
                {
                    // Determine fate of living/dead cells
                    game1.getFate(countFlips);
                    
                    // clear screen to keep board "stationary"
                    system("clear");
                    
                    // Reset other board for next iteration
                    game1.reset(countFlips);
                    
                    // Display the correct array
                    game1.display(countFlips);
                    
                    cout << endl;
                    
                    // Increment counter used to toggle b/w arrays
                    countFlips++;
                    
                    // sleep for 0.75 secs to allow user to see "movement" of cells
                    usleep(250000);
                    
                } while (countFlips < 10);
            }
            
            // fixed oscillator in quadrant 4
            if (start == 4)
            {
                // Variable used to toggle b/w two arrays
                countFlips = 0;
                
                // Reset all cells in both arrays to false
                game1.reset(0);
                game1.reset(1);
                
                // Initialize board1 with a fixed oscillator in quad 4
                game1.setFixedOscillator(start);
                
                cout << "Fixed Oscillator will run for 10 cycles. Press <Enter> to continue." << endl;
                cin.get();
                
                do
                {
                    // Determine fate of living/dead cells
                    game1.getFate(countFlips);
                    
                    // clear screen to keep board "stationary"
                    system("clear");
                    
                    // Reset other board for next iteration
                    game1.reset(countFlips);
                    
                    // Display the correct array
                    game1.display(countFlips);
                    
                    cout << endl;
                    
                    // Increment counter used to toggle b/w arrays
                    countFlips++;
                    
                    // sleep for 0.75 secs to allow user to see "movement" of cells
                    usleep(250000);
                    
                } while (countFlips < 10);
            }
            
            // fixed oscillator in center
            if (start == 5)
            {
                // Variable used to toggle b/w two arrays
                countFlips = 0;
                
                // Reset all cells in both arrays to false
                game1.reset(0);
                game1.reset(1);
                
                // Initialize board1 with a fixed oscillator in center
                game1.setFixedOscillator(start);
                
                cout << "Fixed Oscillator will run for 10 cycles. Press <Enter> to continue." << endl;
                cin.get();
                
                do
                {
                    // Determine fate of living/dead cells
                    game1.getFate(countFlips);
                    
                    // clear screen to keep board "stationary"
                    system("clear");
                    
                    // Reset other board for next iteration
                    game1.reset(countFlips);
                    
                    // Display the correct array
                    game1.display(countFlips);
                    
                    cout << endl;
                    
                    // Increment counter used to toggle b/w arrays
                    countFlips++;
                    
                    // sleep for 0.75 secs to allow user to see "movement" of cells
                    usleep(250000);
                    
                } while (countFlips < 10);
            }
        }
        
        // If/else if to perform user's menu choice of a glider
        if (menu_choice == 2)
        {
            // Glider in quadrant 1
            if (start == 1)
            {
                // Variable used to toggle b/w two arrays
                countFlips = 0;
                
                // Reset all cells in both arrays to false
                game1.reset(countFlips);
                game1.reset(countFlips + 1);
                
                // Initialize board1 with a glider in quad 1
                game1.setGlider(start);
                
                cout << "Program will run until glider is off the screen. Press <Enter> to continue." << endl;
                cin.get();
                
                do
                {
                    // Determine fate of living/dead cells
                    game1.getFate(countFlips);
                    
                    // clear screen to keep board "stationary"
                    system("clear");
                    
                    // Reset other board for next iteration
                    game1.reset(countFlips);
                    
                    // Display the correct array
                    game1.display(countFlips);
                    
                    cout << endl;
                    
                    // Increment counter used to toggle b/w arrays
                    countFlips++;
                    
                    // sleep for 0.75 secs to allow user to see "movement" of cells
                    usleep(250000);
                    
                } while (countFlips <= 63);
            }
            
            // Glider in quadrant 2
            if (start == 2)
            {
                // Variable used to toggle b/w two arrays
                countFlips = 0;
                
                // Reset all cells in both arrays to false
                game1.reset(countFlips);
                game1.reset(countFlips + 1);
                
                // Initialize board1 with a glider in quad 2
                game1.setGlider(start);
                
                cout << "Program will run until glider is off the screen. Press <Enter> to continue." << endl;
                cin.get();
                
                do
                {
                    // Determine fate of living/dead cells
                    game1.getFate(countFlips);
                    
                    // clear screen to keep board "stationary"
                    system("clear");
                    
                    // Reset other board for next iteration
                    game1.reset(countFlips);
                    
                    // Display the correct array
                    game1.display(countFlips);
                    
                    cout << endl;
                    
                    // Increment counter used to toggle b/w arrays
                    countFlips++;
                    
                    // sleep for 0.75 secs to allow user to see "movement" of cells
                    usleep(250000);
                    
                } while (countFlips <= 45);
            }
            
            // Glider in quadrant 3
            if (start == 3)
            {
                // Variable used to toggle b/w two arrays
                countFlips = 0;
                
                // Reset all cells in both arrays to false
                game1.reset(countFlips);
                game1.reset(countFlips + 1);
                
                // Initialize board1 with a glider in quad 3
                game1.setGlider(start);
                
                cout << "Program will run until glider is off the screen. Press <Enter> to continue." << endl;
                cin.get();
                
                do
                {
                    // Determine fate of living/dead cells
                    game1.getFate(countFlips);
                    
                    // clear screen to keep board "stationary"
                    system("clear");
                    
                    // Reset other board for next iteration
                    game1.reset(countFlips);
                    
                    // Display the correct array
                    game1.display(countFlips);
                    
                    cout << endl;
                    
                    // Increment counter used to toggle b/w arrays
                    countFlips++;
                    
                    // sleep for 0.75 secs to allow user to see "movement" of cells
                    usleep(250000);
                    
                } while (countFlips <= 23);
            }
            
            // Glider in quadrant 4
            if (start == 4)
            {
                // Variable used to toggle b/w two arrays
                countFlips = 0;
                
                // Reset all cells in both arrays to false
                game1.reset(countFlips);
                game1.reset(countFlips + 1);
                
                // Initialize board1 with a glider in quad 4
                game1.setGlider(start);
                
                cout << "Program will run until glider is off the screen. Press <Enter> to continue." << endl;
                cin.get();
                
                do
                {
                    // Determine fate of living/dead cells
                    game1.getFate(countFlips);
                    
                    // clear screen to keep board "stationary"
                    system("clear");
                    
                    // Reset other board for next iteration
                    game1.reset(countFlips);
                    
                    // Display the correct array
                    game1.display(countFlips);
                    
                    cout << endl;
                    
                    // Increment counter used to toggle b/w arrays
                    countFlips++;
                    
                    // sleep for 0.75 secs to allow user to see "movement" of cells
                    usleep(250000);
                    
                } while (countFlips <= 23);
            }
            
            // Glider in center
            if (start == 5)
            {
                // Variable used to toggle b/w two arrays
                countFlips = 0;
                
                // Reset all cells in both arrays to false
                game1.reset(countFlips);
                game1.reset(countFlips + 1);
                
                // Initialize board1 with a glider in center
                game1.setGlider(start);
                
                cout << "Program will run until glider is off the screen. Press <Enter> to continue." << endl;
                cin.get();
                
                do
                {
                    // Determine fate of living/dead cells
                    game1.getFate(countFlips);
                    
                    // clear screen to keep board "stationary"
                    system("clear");
                    
                    // Reset other board for next iteration
                    game1.reset(countFlips);
                    
                    // Display the correct array
                    game1.display(countFlips);
                    
                    cout << endl;
                    
                    // Increment counter used to toggle b/w arrays
                    countFlips++;
                    
                    // sleep for 0.75 secs to allow user to see "movement" of cells
                    usleep(250000);
                    
                } while (countFlips <= 43);
            }
        }
        
        // If/else if to perform user's menu choice of a glider cannon
        if (menu_choice == 3)
        {
            // Glider cannon in quadrant 1
            if (start == 1)
            {
                // Variable used to toggle b/w two arrays
                countFlips = 0;
                
                // Reset all cells in both arrays to false
                game1.reset(countFlips);
                game1.reset(countFlips + 1);
                
                // Initialize board1 with a glider cannon in quad 1
                game1.setGliderCannon(start);
                
                cout << "Program will complete 4 Glider Cannon Periods. Press <Enter> to continue." << endl;
                cin.get();
                
                do
                {
                    // Determine fate of living/dead cells
                    game1.getFate(countFlips);
                    
                    // clear screen to keep board "stationary"
                    system("clear");
                    
                    // Reset other board for next iteration
                    game1.reset(countFlips);
                    
                    // Display the correct array
                    game1.display(countFlips);
                    
                    cout << endl;
                    
                    // Increment counter used to toggle b/w arrays
                    countFlips++;
                    
                    // sleep for 0.75 secs to allow user to see "movement" of cells
                    usleep(250000);
                    
                } while (countFlips <= 120);
            }
            
            // Glider cannon in quadrant 2
            if (start == 2)
            {
                // Variable used to toggle b/w two arrays
                countFlips = 0;
                
                // Reset all cells in both arrays to false
                game1.reset(countFlips);
                game1.reset(countFlips + 1);
                
                // Initialize board1 with a glider cannon in quad 2
                game1.setGliderCannon(start);
                
                cout << "Program will complete 4 Glider Cannon Periods. Press <Enter> to continue." << endl;
                cin.get();
                
                do
                {
                    // Determine fate of living/dead cells
                    game1.getFate(countFlips);
                    
                    // clear screen to keep board "stationary"
                    system("clear");
                    
                    // Reset other board for next iteration
                    game1.reset(countFlips);
                    
                    // Display the correct array
                    game1.display(countFlips);
                    
                    cout << endl;
                    
                    // Increment counter used to toggle b/w arrays
                    countFlips++;
                    
                    // sleep for 0.75 secs to allow user to see "movement" of cells
                    usleep(250000);
                    
                } while (countFlips <= 120);
            }
            
            // Glider cannon in quadrant 3
            if (start == 3)
            {
                // Variable used to toggle b/w two arrays
                countFlips = 0;
                
                // Reset all cells in both arrays to false
                game1.reset(countFlips);
                game1.reset(countFlips + 1);
                
                // Initialize board1 with a glider cannon in quad 3
                game1.setGliderCannon(start);
                
                cout << "Program will complete 4 Glider Cannon Periods. Press <Enter> to continue." << endl;
                cin.get();
                
                do
                {
                    // Determine fate of living/dead cells
                    game1.getFate(countFlips);
                    
                    // clear screen to keep board "stationary"
                    system("clear");
                    
                    // Reset other board for next iteration
                    game1.reset(countFlips);
                    
                    // Display the correct array
                    game1.display(countFlips);
                    
                    cout << endl;
                    
                    // Increment counter used to toggle b/w arrays
                    countFlips++;
                    
                    // sleep for 0.75 secs to allow user to see "movement" of cells
                    usleep(250000);
                    
                } while (countFlips <= 120);
            }
            
            // Glider cannon in quadrant 4
            if (start == 4)
            {
                // Variable used to toggle b/w two arrays
                countFlips = 0;
                
                // Reset all cells in both arrays to false
                game1.reset(countFlips);
                game1.reset(countFlips + 1);
                
                // Initialize board1 with a glider cannon in quad 4
                game1.setGliderCannon(start);
                
                cout << "Program will complete 4 Glider Cannon Periods. Press <Enter> to continue." << endl;
                cin.get();
                
                do
                {
                    // Determine fate of living/dead cells
                    game1.getFate(countFlips);
                    
                    // clear screen to keep board "stationary"
                    system("clear");
                    
                    // Reset other board for next iteration
                    game1.reset(countFlips);
                    
                    // Display the correct array
                    game1.display(countFlips);
                    
                    cout << endl;
                    
                    // Increment counter used to toggle b/w arrays
                    countFlips++;
                    
                    // sleep for 0.75 secs to allow user to see "movement" of cells
                    usleep(250000);
                    
                } while (countFlips <= 120);
            }
            
            // Glider cannon in center
            if (start == 5)
            {
                // Variable used to toggle b/w two arrays
                countFlips = 0;
                
                // Reset all cells in both arrays to false
                game1.reset(countFlips);
                game1.reset(countFlips + 1);
                
                // Initialize board1 with a glider cannon in center
                game1.setGliderCannon(start);
                
                cout << "Program will complete 4 Glider Cannon Periods. Press <Enter> to continue." << endl;
                cin.get();
                
                do
                {
                    // Determine fate of living/dead cells
                    game1.getFate(countFlips);
                    
                    // clear screen to keep board "stationary"
                    system("clear");
                    
                    // Reset other board for next iteration
                    game1.reset(countFlips);
                    
                    // Display the correct array
                    game1.display(countFlips);
                    
                    cout << endl;
                    
                    // Increment counter used to toggle b/w arrays
                    countFlips++;
                    
                    // sleep for 0.75 secs to allow user to see "movement" of cells
                    usleep(250000);
                    
                } while (countFlips <= 120);
            }
        }
    }while (menu_choice != 4);
        
    return 0;
}






















