/////////////////////////////////////////////////////////////////////
//
// Teammates Names: Carolina morales
// Date: 01/27/2025
// Class: CSCI 1470.03
// Semester: Spring 2025
// Instructor: Dr. Jonatan Reyes
//
// Program Name: Lab1
// Program Description: Find total cost of small and large rooms with tax
//
/////////////////////////////////////////////////////////////////////
#include <iostream>
using namespace std;

int main() {
	//Input
	int small;
	int large;
	float total;
	float tax;
	float total_tax;

	//Processing
	cout << "Number of small rooms: ";
	cin >> small;
	cout << "Number of large rooms: ";
		cin >> large;

		total = (25 * small) + (35 * large);
		tax= 0.0825*total;
		total_tax= total*tax;

	//Output
		cout<<"Estimate for Carpet Cleaning Service";
		cout<<"-------------------------------------";
		cout<<"Number of small rooms: "<<small;
		cout<<"Number of large rooms: "<<large;
		cout << "Price per small rooms: $25.00";
		cout << "Price per large rooms: $35.00";
		cout<<"------------------------------------";
		cout << "Total: $" << total;
		cout<<"Tax: $"<<tax;
		cout<<"===================================";
		cout<< "Total w/Tax: $"<<total_tax;

		cout<< "This estimate is valid for 30 days.";

	return 0;
}
