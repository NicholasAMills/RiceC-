// loops.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	cout << "Rocket ship takeoff: " << endl; 
	cout << endl; //extra space
	for (int i = 10; i > 0; i--) { //for (start variable; end condition; incrementation)
		cout << "Rocket blasts off in: " << i << endl;
	}
	cout << "Blast off!";

	cout << "\n\n\n" << endl; //going down 3 lines (2 with the \n, plus one for the endl;)
	////////////////////////////////////////////////////////////////////////////////////////////////////////////

	// Do While loops: Everything with in the "do" brackets will execute AT LEAST once and continue until the conditions in the while() are met. 
	cout << "Enter a number that is a multiple of 5: ";
	int multOfFive;
	do {
		cin >> multOfFive;
		if (multOfFive % 5 != 0) // check if the remainder is 0 if multOfFive is divided by 5
			cout << "Nope. Not a multiple of 5. Try again: " << endl; // if their number is not a mult of 5, try again. 
	} while (multOfFive % 5 != 0); // Loop will not exit until multOfFive is a multiple of 5. 
	cout << "Thank you!" << endl;

	cout << "\n\n" << endl; //more spaces
	///////////////////////////////////////////////////////////////////////////////////////////////////////////

	// While loops: this will loop until the condition in parentesis are met. However this does not necessarily have to execute if the condition is already met. 
	int subtraction; 
	cout << "Enter a number and I will subtract it by 1 down to 0" << endl;
	cin >> subtraction;

	while (subtraction > 0) {
		cout << "inside loop" << endl; //show it is inside of the loop
		cout << subtraction << " -1 = "; // displaying " *current number* - 1 = " NOTE: No endl; so it will appear on the same line and appear as an equation
		subtraction--; //subtracting 1 from the number
		cout << subtraction << endl; // throw on the number - 1 to the end of the equation. Ex: if subtraction = 5, it will show 5 - 1 = 4
	}
	cout << "outside of loop\nFinished!" << endl; //show it is outside the loop
	cout << subtraction << endl; //showing the final value for subtraction, which will always be 0 in this case. 

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
