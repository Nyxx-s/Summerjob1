// Isaac Cummings
// Date: 09/23/22
// Program Title: SummerJob1
// Program Description: Calculates the wages and spending from the users job
#include <iostream>
#include <string>


using namespace std;

// Named constants

int main()
{

	// Variable declaration
	string fname;
	string lname;
	double payrate;
	double hrs;
	double wages;
	//Program title and description for the user
	cout << "Program Title: SummerJob1\nProgram Description: Calculates the wages and spending from the users job\n";
	// User input
	cout << "Please enter your first name\n";
	cin >> fname;
	cout << "Please enter your last name\n";
	cin >> lname;
	cout << "Please enter your hourly payrate\n";
	cin >> payrate;
	cout << "Please enter the number of hours you worked\n";
	cin >> hrs;
	// Calculations
	wages = hrs * payrate;
	// Output to the screen
	cout << "Name: "<<fname<<" "<<lname<<"\nWages: $"<<wages<<"\nTaxes: $"<<wages*0.15<<"\nShopping: $"<<wages*0.2<<"\nEntertainment: $"<<wages*0.1<<"\nSavings: $"<<wages*0.25<<"\nRemainder: $"<<wages*0.3<<"\n";
	return 0;
}