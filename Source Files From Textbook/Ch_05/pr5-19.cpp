 // This program uses a loop to write multiple values to a file.
 #include <iostream>
 #include <fstream>       // Needed to use files
 using namespace std;

int main()
{
	ofstream outputFile;  // File stream object
	int numberOfDays;     // Number of days of sales
    double sales;         // Sales amount for a day
    
    // Get the number of days
    cout << "For how many days do you have sales? ";
    cin  >> numberOfDays;
 
    // Open the output file
    outputFile.open("Sales.txt");
 
    // Loop once for each day of sales
    for (int count = 1; count <= numberOfDays; count++)
    {
       // Get the sales amount for a day
       cout << "Enter the sales for day " << count << ": ";
       cin  >> sales;
       
       // Write the sales amount to the file
       outputFile << sales << endl;
    }
    // Close the file
    outputFile.close();

    cout << "Data written to Sales.txt\n";
    return 0;
}
