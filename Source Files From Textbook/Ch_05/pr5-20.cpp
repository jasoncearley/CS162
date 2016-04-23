// This program uses a loop to read in multiple values from a file.
#include <iostream>
#include <fstream>             // Needed to use files
using namespace std;

int main()
{
	ifstream inputFile;        // File stream object
	int numberOfDays;          // Number of days of sales
    double sales,              // Sales amount for a day
		   totalSales = 0.0;   // Accumulator 
    
    // Get the number of days
    cout << "How many days of sales data are stored in your file? ";
    cin  >> numberOfDays;
 
    // Open the input file
    inputFile.open("Sales.txt");
 
    // Loop once for each piece of data to be read from the file
    for (int count = 1; count <= numberOfDays; count++)
    {
       // Read a sales figure from the file and add it to the sum
       inputFile >> sales;
       totalSales += sales; 
    }
    // Close the file
    inputFile.close();

    cout << "Total sales for the " << numberOfDays << " days were $"
	     << totalSales;
		 
    return 0;
}
