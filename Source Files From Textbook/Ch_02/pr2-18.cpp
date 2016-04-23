// This program shows variable initialization.
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string month = "February";    // month is initialized to "February"  
	int year,                     // year is not initialized
	    days  = 28;               // days is initialized to 28
	    
	year = 2007;                  // Now year is assigned a value

	cout << "In "   << year << " " << month
		 << " had " << days << " days.\n";

	return 0;
}
