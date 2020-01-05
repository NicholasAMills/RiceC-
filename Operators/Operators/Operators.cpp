// Operators.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <random>

using namespace std;

// NUMBER GUESSING GAME: Enter a number and if you can guess correctly, you win!

int main()
{
	random_device rd; // random_device is the random number generator, and rd is the name we're giving our generator.
	int chance = rd()%10 + 1; // get a random number between 1 and 10 and assign it to chance
	int choice; // user's guess
	int health = 5; // user's health
	bool OnOff = false; 

	cout << "Answer: " << chance << endl;
	if (OnOff) { // For booleans, you don't need to put if (OnOff == true). The name itself means it's true. If we wanted to check false, it would be if (!OnOff).
		while (health > 1) { // While loop: does not necessarily have to run if condition is not met. If health is < 1, this loop will not run.
			// Keep the game running as long as player has health

		/*do while loop: This loop will always happen AT LEAST once.
		Error checking: The do while loop will continue until the user enters a number between 1 and 10 */
			do {
				cout << "enter a number between 1 and 10" << endl;
				cin >> choice;
			} while (choice > 10 || choice < 1); /*Check if the choice is more than 10 OR less than 1. Don't forget the semicolon at the end of this line! */
			// The || represents OR. This means that if any of the conditions in that list are true, the code will run. Note: you can have as many as you want.
			// Ex: we can have conditions x || y || z where x, y, and z are some pre-set conditions. 
			if (choice == chance) { // Win condition
				cout << "You win! Congratulations!!!";
				return 0; //End the program if they win. No need to continue on. 
			}
			else {
				health--; //subtract one life from health if they guess the wrong number
				cout << "That was not correct. You have " << health << " more lives" << endl; //display remaining lives
			}
		}
	}
	else
		cout << "switch is off" << endl;
	cout << "BOOM! (you lost)";
	return 0;
}
