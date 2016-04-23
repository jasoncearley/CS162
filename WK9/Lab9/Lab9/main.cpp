//
//  main.cpp
//  Lab9
//
//  Created by Jason Cearley on 11/22/15.
//  Copyright © 2015 Jason Cearley. All rights reserved.
//

#include <iostream>
using std::cout;
using std::endl;

#include <cstdlib>
#include <ctime>
#include <vector>
using std::vector;

#include <queue>
using std::queue;

#include "Menu.hpp"

int main()
{
    int choice = 0, number_of_servers = 0, rand_num = 0, time_click = 0, wait_time1 = 0, wait_time2 = 0,
    wait_time3 = 0;
    unsigned seed = 0;
    
    //create seed for RNG
    seed = static_cast<unsigned>(time(0));
    
    //seed RNG
    srand(seed);
    
    do
    {
        //display menu of choices to user
        menu();
        
        //get, validate, and return user's choice
        choice = user_selection();
        
        // Get random # b/w 1 & 20
        rand_num = (rand() % 20) + 1;
        
        //single queue for all servers
        if (choice == 1)
        {
            cout << "Enter the number of servers: ";
            number_of_servers = validate();
            
            // create a single queue for all servers to take from
            queue<int> line;
            
            // simulate the begining of the day
            if (time_click == 0)
            {
                //add people to the single line
                for (int a = 0; a < (2*number_of_servers) + rand_num; a++)
                {
                    line.push(a);
                }
                
                // calculate wait time
                wait_time1 = static_cast<int>(line.size())/number_of_servers;
                
                // remove all the people from the line
                while (line.size() > 0)
                {
                    //remove people from the line based on number of servers
                    for (int a = 0; a < number_of_servers; a++)
                    {
                        // test to ensure line is not empty
                        if (line.size() > 0)
                        {
                            line.pop();
                        }
                    }
                }
                
                // advance time
                time_click++;
            }
            
            // simulate afternoon
            if (time_click == 1)
            {
                //add people to the single line
                for (int a = 0; a < (3*number_of_servers) + rand_num; a++)
                {
                    line.push(a);
                }
                
                // calculate wait time
                wait_time2 = static_cast<int>(line.size())/number_of_servers;
                
                // remove all the people from the line
                while (line.size() > 0)
                {
                    //remove people from the line based on number of servers
                    for (int a = 0; a < number_of_servers; a++)
                    {
                        // test to ensure line is not empty
                        if (line.size() > 0)
                        {
                            line.pop();
                        }
                    }
                }
                
                // advance time
                time_click++;
            }
            
            // simulate evening
            if (time_click == 2)
            {
                //add people to the single line
                for (int a = 0; a < number_of_servers + rand_num; a++)
                {
                    line.push(a);
                }
                
                // calculate wait time
                wait_time3 = static_cast<int>(line.size())/number_of_servers;
                
                // remove all the people from the line
                while (line.size() > 0)
                {
                    //remove people from the line based on number of servers
                    for (int a = 0; a < number_of_servers; a++)
                    {
                        // test to ensure line is not empty
                        if (line.size() > 0)
                        {
                            line.pop();
                        }
                    }
                }
            }
            
            // average wait time throughout the "day"
            cout << "Your average wait time was " << (wait_time1 + wait_time2 + wait_time3)/3 << "." << endl;
            
            // reset variables for use again
            wait_time1 = wait_time2 = wait_time3 = 0;
            time_click = 0;
        }
        
        //one queue per server
        else if (choice == 2)
        {
            cout << "Enter the number of servers: ";
            number_of_servers = validate();
            
            int test = 0, longest_line = 0;
            
            // create a vector of queues based on the number of servers
            vector<queue<int> > multi_line(number_of_servers);
            
            // used to access each queue in the vector multi_line
            int b = 0;
            
            // simulate beginning of the day
            if (time_click == 0)
            {
                //add people to each line
                for (int a = 0; a < (2*number_of_servers) + rand_num; a++)
                {
                    b = (b % number_of_servers);
                    
                    multi_line[b].push(a);
                    
                    b++;
                }
                
                // find the longest line
                for (int a = 0; a < multi_line.size(); a++)
                {
                    if (multi_line[a].size() > longest_line)
                    {
                        longest_line = static_cast<int>(multi_line[a].size()) ;
                    }
                }
                
                // calculate wait time based on size of the longest line
                wait_time1 = longest_line;
                
                do
                {
                    //remove one person from each line
                    for (int a = 0; a < multi_line.size(); a++)
                    {
                        b = (b % number_of_servers);
                        
                        // test to ensure line is not empty
                        if (multi_line[b].size() > 0)
                        {
                            multi_line[b].pop();
                        }
                        
                        b++;
                    }
                    
                    // reset test back to zero
                    test = 0;
                    
                    // check to see if all lines are empty
                    for (int a = 0; a < number_of_servers; a++)
                    {
                        if (!multi_line[a].empty())
                        {
                            test++;
                        }
                    }
                    
                } while (test != 0);
                
                // advance time
                time_click++;
            }
            
            // simulate afternoon
            if (time_click == 1)
            {
                //add people to each line
                for (int a = 0; a < (3*number_of_servers) + rand_num; a++)
                {
                    b = (b % number_of_servers);
                    
                    multi_line[b].push(a);
                    
                    b++;
                }
                
                longest_line = 0;
                
                // find the longest line
                for (int a = 0; a < multi_line.size(); a++)
                {
                    if (multi_line[a].size() > longest_line)
                    {
                        longest_line = static_cast<int>(multi_line[a].size()) ;
                    }
                }
                
                // calculate wait time based on size of the longest line
                wait_time2 = longest_line;
                
                do
                {
                    //remove one person from each line
                    for (int a = 0; a < multi_line.size(); a++)
                    {
                        b = (b % number_of_servers);
                        
                        // test to ensure line is not empty
                        if (multi_line[b].size() > 0)
                        {
                            multi_line[b].pop();
                        }
                        
                        b++;
                    }
                    
                    // reset test back to zero
                    test = 0;
                    
                    // check to see if all lines are empty
                    for (int a = 0; a < number_of_servers; a++)
                    {
                        if (!multi_line[a].empty())
                        {
                            test++;
                        }
                    }
                    
                } while (test != 0);
                
                // advance time
                time_click++;
            }
            
            // simulate evening
            if (time_click == 2)
            {
                //add people to each line
                for (int a = 0; a < number_of_servers + rand_num; a++)
                {
                    b = (b % number_of_servers);
                    
                    multi_line[b].push(a);
                    
                    b++;
                }
                
                longest_line = 0;
                
                // find the longest line
                for (int a = 0; a < multi_line.size(); a++)
                {
                    if (multi_line[a].size() > longest_line)
                    {
                        longest_line = static_cast<int>(multi_line[a].size()) ;
                    }
                }
                
                // calculate wait time based on size of the longest line
                wait_time3 = longest_line;
                
                do
                {
                    //remove one person from each line
                    for (int a = 0; a < multi_line.size(); a++)
                    {
                        b = (b % number_of_servers);
                        
                        // test to ensure line is not empty
                        if (multi_line[b].size() > 0)
                        {
                            multi_line[b].pop();
                        }
                        
                        b++;
                    }
                    
                    // reset test back to zero
                    test = 0;
                    
                    // check to see if all lines are empty
                    for (int a = 0; a < number_of_servers; a++)
                    {
                        if (!multi_line[a].empty())
                        {
                            test++;
                        }
                    }
                    
                } while (test != 0);
                
                // advance time
                time_click++;
            }
            
            // average wait time throughout the "day"
            cout << "Your average wait time was " << (wait_time1 + wait_time2 + wait_time3)/3 << "." << endl;
            
            // reset variables for use again
            wait_time1 = wait_time2 = wait_time3 = 0;
            time_click = 0;
        }
        
    } while (choice != 3);
    
    return 0;
}
