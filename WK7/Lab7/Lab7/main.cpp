//
//  main.cpp
//  Lab7
//
//  Created by Jason Cearley on 11/8/15.
//  Copyright © 2015 Jason Cearley. All rights reserved.
//

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::ifstream;
using std::ofstream;

#include <fstream>
#include <vector>
using std::vector;

#include <string>
using std::string;

#include "Menu.hpp"

//Functions

/***********************************************************************
 * This function displays a vector on integers contents
 **********************************************************************/
void showVector(vector<int> showMe)
{
    for (int a = 0; a < showMe.size(); a++)
    {
        cout << showMe[a] << " ";
    }
    
    cout << endl;
}

/***********************************************************************
 * This function performs a linear search of a vector containing 
 * integers
 **********************************************************************/
bool linear_search(vector<int> searchMe, int searchFor)
{
    // Perform linear search of vector
    for (int a = 0; a < searchMe.size(); a++)
    {
        if (searchMe[a] == searchFor)
        {
            cout << searchFor << " was found at postition " << a + 1;
            return true;
        }
    }
    
    return false;
}

/***********************************************************************
 * This function performs a selection sort of a vector containing
 * integers
 **********************************************************************/
void select_sort(vector<int> &sortMe)
{
    // outer for loop keeps track of sorted section of vector
    for (int outer = 0; outer < (sortMe.size() - 1); outer++)
    {
        // keep track of what has been sorted and what has not
        int index = outer;
        
        // store value currently being evaluated
        int value = sortMe[outer];
        
        // inner loop advances through remainder of unsorted vector looking for the min value
        for (int inner = outer + 1; inner < sortMe.size(); inner++)
        {
            // when min value is found, store its info (value and location) to the min variables
            if (sortMe[inner] < value)
            {
                value = sortMe[inner];
                index = inner;
            }
        }
        
        // take larger value and place it in the smaller values location
        sortMe[index] = sortMe[outer];
        
        // take the smaller value and place it at the end of the sorted section
        sortMe[outer] = value;
    }
}

/***********************************************************************
 * This function performs a binary search of a vector containing
 * integers
 **********************************************************************/
void binary_search(vector<int> searchMe, int searchFor)
{
    // variables used to track the begining, middle, and end of a vector
    int begin = 0, middle = 0;
    int end = static_cast<int>((searchMe.size() - 1));
    
    // flag to tell while loop to keep going until the value is found
    bool found = false;
    
    // while loop to perform a binary search of the vector
    while (!found && begin <= end)
    {
        middle = (begin + end)/2;
        
        // used for testing
        //cout << "Middle = " << middle << endl;
        
        // alert user value was found and at what position
        if (searchMe[middle] == searchFor)
        {
            cout << searchFor << " was found at postion " << middle + 1 << endl;
            found = true;
        }
        
        // value is in lower half of vector
        else if (searchMe[middle] > searchFor)
        {
            end = middle - 1;
        }
        
        // value is in upper half of vector
        else
        {
            begin = middle + 1;
        }
    }
    
    // while loop completed and value was not found
    if (!found)
    {
        cout << searchFor << " was not found in your file." << endl;
    }
}

int main()
{
    int choice = 0;         // Variable to hold the user's menu choice
    int temp = 0;           // Variable used to copy contents of file to a vector
    int value = 0;          // Value user would like to search for
    bool sorted = true;    // Track whether a list is sorted or not
    vector <int> holding_pen; // Vector used to store file contents for manipulation
    string users_file_input;      // Variable to hold the user's input file name
    string users_file_output;      // Variable to hold the user's output file name
    ifstream inputFile;     // Varialbe to allow reading from a file
    ofstream outputFile;    // Variable to allow writing to a file
    
    do
    {
        
        // Display a menu for user to choose from
        menu();
        
        // Call user_selection function to get, validate, & return user's selection
        choice = user_selection();
        
        // Perform user's selection to search an unsorted file
        if (choice == 1)
        {
            cout << "Enter the name of the input file you would like to use (ex. test.txt): ";
            getline(cin, users_file_input);
            
            cout << "Enter the value you would like to search for: ";
            cin >> value;
            cin.get();
            
            // open file for reading
            inputFile.open(users_file_input.c_str());
            
            // quit program if file cannot be opened for reading
            if(!inputFile)
            {
                cout << "There was an error opening the file." << endl;
                return 0;
            }
            
            // while loop to copy contents of file to a vector
            while (inputFile >> temp)
            {
                holding_pen.push_back(temp);
            }
            
            // search vector for desired value and if found tell user
            if (linear_search(holding_pen, value))
            {
                cout << " in " << users_file_input << endl;
            }
            
            // value was not found in the file
            else
            {
                cout << value << " was not located in " << users_file_input << endl;
            }
            
            // close file
            inputFile.close();
            
            // used for testing
            //showVector(holding_pen);
            
            // clear vector of its contents in case another search is performed
            holding_pen.clear();
        }
        
        // Perform user's selection to sort a file
        else if (choice == 2)
        {
            cout << "Enter the name of the input file you would like to use (ex. test.txt): ";
            getline(cin, users_file_input);
            
            cout << "Enter the name of the output file you would like to use (ex. test.txt): ";
            getline(cin, users_file_output);
            
            // open file for reading
            inputFile.open(users_file_input.c_str());
            
            // quit program if file cannot be opened for reading
            if(!inputFile)
            {
                cout << "There was an error opening the file." << endl;
                return 0;
            }
            
            // while loop to copy contents of file to a vector
            while (inputFile >> temp)
            {
                holding_pen.push_back(temp);
            }
            
            // close file
            inputFile.close();
            
            // use a selection sort algorithm to sort the vector
            select_sort(holding_pen);
            
            // used for testing
            //showVector(holding_pen);
            
            // open the output file to write to
            outputFile.open(users_file_output.c_str());
            
            // copy the vector to the user's desired output file
            for (int a = 0; a < holding_pen.size(); a++)
            {
                outputFile << holding_pen[a] << endl;
            }
            
            // close the output file
            outputFile.close();
            
            // clear vector of its contents in case another search is performed
            holding_pen.clear();
        }
        
        // Perform user's selection to search a sorted file
        else if (choice == 3)
        {
            cout << "Enter the name of the input file you would like to use (ex. test.txt): ";
            getline(cin, users_file_input);
            
            cout << "Enter the value you would like to search for: ";
            cin >> value;
            cin.get();
            
            // open file for reading
            inputFile.open(users_file_input.c_str());
            
            // quit program if file cannot be opened for reading
            if(!inputFile)
            {
                cout << "There was an error opening the file." << endl;
                return 0;
            }
            
            // while loop to copy contents of file to a vector
            while (inputFile >> temp)
            {
                holding_pen.push_back(temp);
            }
            
            // close file
            inputFile.close();
            
            // check to ensure list is sorted
            for (int a = 0; a < (holding_pen.size() - 1); a++)
            {
                if (holding_pen[a] > holding_pen[a + 1])
                {
                    sorted = false;
                }
            }
            
            // perform binary search if list is sorted
            if (sorted)
            {
                binary_search(holding_pen, value);
            }
            
            else
            {
                cout << "This list is not sorted. Please try again with a sorted list." << endl;
            }
            
            // reset sorted to true in case another operation is performed;
            sorted = true;
            
            // clear vector of its contents in case another operation is performed
            holding_pen.clear();
        }
        
    } while (choice != 4);
    
    return 0;
}























