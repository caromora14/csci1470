#include <iostream>

using namespace std;


void positiveorneg(int x, int& y) {
	if (x > 0) {

		y = true;

	}
	else {
		y = false;
	}

}
bool posorneg(int x) {

	if (x > 0) {

		return true;
	}
	else {

		return false;
	}
}

	int main() {

		int x, y;
		

		cout << "Enter a number: ";
		cin >> x;

		if (x > 0) {

			cout << "The conditional statement in the main program says that the number  " << x << " is positive." << endl;
		}
		else {

			cout << "The conditional statement in the main program says that the number  " << x << " is negative." << endl;

			

		}

		

		bool posorne = posorneg(x);

		if (posorne) {

			cout << "After calling the value-retuning function, we determined that the number " << x << " is positive." << endl;
		}
		else {

			cout << "After calling the value-retuning function, we determined that the number  " << x << " is negative." << endl;
		}

		positiveorneg(x, y);

		if (posorne) {

			cout << "After calling the void function, we determined that the number " << x << " is positive." << endl;
		}
		else {

			cout << "After calling the void function, we determined that the number  " << x << " is negative."<<endl;

			return 0;


		}
	
}
