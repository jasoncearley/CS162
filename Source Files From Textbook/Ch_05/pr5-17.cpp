// This program writes user input to a file.
#include <iostream>
#include <fstream>        // Needed to use files
#include <string>
using namespace std;

int main()
{
	ofstream outputFile;
    string name1, name2, name3;
 
    // Open the output file
    outputFile.open("Friends.txt");

    // Get the names of three friends
    cout << "Enter the names of three friends.\n";
    cout << "Friend #1: ";
    cin  >> name1;
    cout << "Friend #2: ";
    cin  >> name2;
    cout << "Friend #3: ";
    cin  >> name3;

    // Write the names to the file
    outputFile << name1 << endl;
    outputFile << name2 << endl;
    outputFile << name3 << endl;

    // Close the file
	outputFile.close();

	cout << "The names were saved to a file.\n";
    return 0;
 }
