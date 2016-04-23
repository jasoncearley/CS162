// This program uses an array of structures to hold payroll data.
#include <iostream>
#include <iomanip>
using namespace std;

struct PayInfo      
{
	int hours;                   // Hours worked
	double payRate;              // Hourly pay rate
};

int main()
{
	const int NUM_EMPS = 3;      // Number of employees
	int index;
	PayInfo workers[NUM_EMPS];   // Define an array of structures
	double grossPay;
	
	// Get payroll data
	cout << "Enter the hours worked and hourly pay rates of "
	     << NUM_EMPS << " employees.";  
	for (index = 0; index < NUM_EMPS; index++)
	{	cout << "\nHours worked by employee #" << (index + 1);
		cout << ": ";
		cin  >> workers[index].hours;
		cout << "Hourly pay rate for employee #";
		cout << (index + 1) << ": ";
		cin  >> workers[index].payRate;
	}
	
	// Display each employee's gross pay
	cout << "\nHere is the gross pay for each employee:\n";
	cout << fixed << showpoint << setprecision(2);
	for (index = 0; index < NUM_EMPS; index++)
	{
		grossPay = workers[index].hours * workers[index].payRate;
		cout << "Employee #" << (index + 1);
		cout << ": $" << setw(7) << grossPay << endl;
	}
	return 0;
}
