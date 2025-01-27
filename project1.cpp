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
	int small, large;
	float total, tax, total_tax;
	
	//Processing
	cout << "Number of small rooms: ";
	cin >> small;
	cout << "Number of large rooms: ";
		cin >> large;

		total = (25.00 * small) + (35.00 * large);
		tax= 0.0825*(total);
		total_tax= total*tax;

	//Output
		cout<<"Estimate for Carpet Cleaning Service"<<endl;
		cout<<"---------------------------"<<endl;
		cout<<" Number of small rooms: "<<small<<endl;
		cout<<" Number of large rooms: "<<large <<endl;
		
		cout << " Price per small rooms: $25.00"<<endl;
		cout << " Price per large rooms: $35.00"<<endl;
		cout<<"----------------------------"<<endl;
		cout << " Total: $" << total<<endl;
		cout<<" Tax: $"<<tax<<endl;
		cout<<"====================="<<endl;
		cout<< " Total w/Tax: $"<<total_tax<<endl;

		cout<< " This estimate is valid for 30 days.";


	return 0;
}
