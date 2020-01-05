// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	int choice;
    //Arrays                    0  1  2  3  4
	int rocketLeagueWins[5] = { 3, 1, 0, 5, 9 };

	cout << "Pick a day and I will tell you how many wins you had: ";
	cin >> choice; 

	for (int i = 0; i < 5; i++) {
		cout << rocketLeagueWins[i] << endl;
	}

	cout << rocketLeagueWins[choice];

	//Vectors
	vector<int> bagOfMarbles;
	char userChoice;
	char yesno;
	cout << "Do you want to add or remove a marble?" << endl;
	cin >> userChoice;
	if (userChoice == 'y') {

		do {
			cout << "Do you want to add or take away a marble?" << endl;
			cin >> yesno;
			if (yesno == 'a') {
				bagOfMarbles.push_back(1);
			}
			else if (yesno == 'r') {
				bagOfMarbles.pop_back();
			}
		} while (userChoice != 'n');
	}

}
