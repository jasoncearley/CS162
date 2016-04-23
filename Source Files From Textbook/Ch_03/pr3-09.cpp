// This program illustrates the prestandard C++ form of type casting.
#include <iostream>
using namespace std;

int main()
{
	int    books,
		   months;
	double booksPerMonth;

	// Get user inputs
	cout << "How many books do you plan to read? ";
	cin  >> books;
	cout << "How many months will it take you to read them? ";
	cin  >> months;

	// Compute and display books read per month
	booksPerMonth = double(books) / months;
	cout << "That is " << booksPerMonth << " books per month.\n";
	return 0;
}
