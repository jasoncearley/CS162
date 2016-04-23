//
//  main.cpp
//  Lab4
//
//  Created by Jason Cearley on 10/19/15.
//  Copyright © 2015 Jason Cearley. All rights reserved.
//

#include <iostream>
using std::string;
using std::cout;
using std::cin;
using std::endl;

#include <cstdlib>
using std::atoi;

/***********************************************************************
 * This function will recursively reverse a string entered by the user.
 **********************************************************************/
void reverse_string(string s)
{
    // Base case is a string of a single character
    if (s.length() == 1)
    {
        cout << s;
    }
    
    // Recursively call the function by sending a smaller and smaller string
    else
    {
        reverse_string(s.substr(1, s.length()));
        cout << s[0];
    }
}

/***********************************************************************
 * This function will recursively sum the values in an array.
 **********************************************************************/
int sum_array(int a[], int s)
{
    // Variable to hold the sum of the array
    int sum = 0;
    
    // Base case is when a[0] is reached
    if (s < 0)
    {
        return sum;
    }
    
    // Recursively sum the values in an array
    else
    {
        return sum = a[s] + sum_array(a, s-1);
    }
}

/***********************************************************************
 * This function will recursively calculate the triangular number 
 * entered by the user.
 **********************************************************************/
int sum_triangle(int s)
{
    // Base case is when number = 0 or rows = 0
    if (s == 0)
    {
        return 0;
    }
    
    // Recursively sum rows to determine triangular number
    else
    {
        return s + sum_triangle(s - 1);
    }
}

/***********************************************************************
 * This function displays the selection menu for the user to choose
 * from.
 **********************************************************************/
void menu()
{
    cout << endl
    << "Please choose a command from the following list:" << endl
    << "1. Reverse a string using a recursive function." << endl
    << "2. Calculate the sum of an array recursively." << endl
    << "3. Calculate the triangular number for N rows recursively." << endl
    << "4. Quit." << endl;
}

/***********************************************************************
 * This function gets the user's menu choice, validates it, and returns
 * it back to main.
 ***********************************************************************/
int user_selection()
{
    string number = "";  // Variable to hold user's input
    unsigned found1 = 0; // Variable used to detect non-numeric entries
    
    // Do/while loop ensures user input only contains valid numbers
    do
    {
        getline(cin, number);
        
        found1 = static_cast<unsigned>(number.find_first_not_of ("1234", 0));
        
        if (found1 != 4294967295 || number.size() > 1)
        {
            cout << "That is not a valid entry. Please select a number "
            << "between 1 and 4: "
            << endl;
        }
    }
    while (found1 != 4294967295 || number.size() > 1);
    
    // atoi converts string into an integer
    return atoi (number.c_str());
}

int main()
{
    int choice = 0;             // Variable to hold the user's menu choice
    string size = "",           // Variable to hold the user's array size. Converted to an int using atio
           reverse_me = "";     // Variable to hold the user's string to reverse
    
    do
    {
        // Display menu of choices for user to choose from
        menu();
        
        // Call function to get and validate user's menu choice. Value is returned to main for use.
        choice = user_selection();
        
        // Perform menu choice 1. Reverse a string recursively
        if (choice == 1)
        {
            cout << "Enter your string: ";
            
            // Store user's string to variable
            getline(cin, reverse_me);
            
            // Function call to reverse the string using recursion
            reverse_string(reverse_me);
            
            cout << endl;
        }
        
        // Perform menu choice 2. Recursively sum an array
        if (choice == 2)
        {
            cout << "How many values will you be entering? ";
            
            // Store size of array to variable as a string
            getline(cin, size);
            
            // Dynamically create an array of ints. Using size variable to establish size of array.
            int* array = new int[atoi (size.c_str())];
            
            // Initialize array to values of 0
            for (int a = 0; a < atoi (size.c_str()); a++)
            {
                array[a] = 0;
            }
            
            // Prompt and store user's value to array
            for (int a= 0; a < atoi (size.c_str()); a++)
            {
                cout << "Enter value " << a + 1 << ": ";
                cin >> array[a];
            }
            
            // Function call to recursively sum array and display to screen
            cout << "The sum or your array is: " << sum_array(array, atoi (size.c_str())) << endl;
            
            // Clear return character left in buffer from entering values into array
            cin.get();
            
            // Reset size to 0 for use again.
            size = "";
            
            // Delete dyamically created array
            delete [] array;
        }
        
        // Perform menu choice 3. Recursively calculate the triangular sum of a number.
        if (choice == 3)
        {
            cout << "Enter number of rows in your triangle and I will calculate the total number of pins needed: ";
            
            // Store number to variable as a string. atoi is used to convert to an int
            getline(cin, size);
            
            // Function call to recursively calculate triangular number and display to screen.
            cout << "The total number of pins needed is " << sum_triangle(atoi (size.c_str())) << endl;
            
            // Reset size to 0 for use again.
            size = "";
        }
        
    } while (choice != 4); // Quit program.
    
    return 0;
}
