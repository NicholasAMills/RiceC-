// Arrays_and_Vectors.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{ //ARRAYS
  //index (what "slot" it is in):   0  1  2  3  4
	int rocketLeagueGamesWon[5] = { 1, 2, 5, 2, 0 };
	int choice;

	//How to print out all Indexs in an array
	cout << "Printing out all Indexs in the array: " << endl;
	cout << "{"; // opening bracket for array
	for (int i = 0; i < 5; i++) {
		cout << rocketLeagueGamesWon[i] << " ";
	}
	cout << "}" << endl;; //close bracket once loop is finished

	// Editing values in an array
	cout << "enter an INDEX and I will double its current value: ";
	cin >> choice;
	// referencing the index chosen in rocketLeagueGamesWon, and then taking its value and doubling it
	rocketLeagueGamesWon[choice] *=  2;

	cout << "New array is: " << endl;
	cout << "{";
	for (int i = 0; i < 5; i++) {
		cout << rocketLeagueGamesWon[i] << " ";
	}
	cout << "}" << endl;

//////////////////////////////////////////////////////////////////////////////////

	//VECTORS
	vector<int> numberOfIndex; //Syntax: vector<data type> vectorName;
	vector<string> catNames;

	//manually add items to a vector list: vectorName.push_back(value); ORDER MATTERS!
	catNames.push_back("Luna");
	catNames.push_back("Bailey");

	char choice1; //y or n choice for below

	cout << "cat names: " << endl;;
	for (int i = 0; i < catNames.size(); i++) { // vectorName.size() is the number of Indexs inside of it. 
		cout << catNames.at(i) << endl;  //vectorName.at(value) is how you reference the specific value
	}
	cout << "\n\n";
	do {
		//Print out all Indexes
		cout << endl;
		cout << "There are currently " << numberOfIndex.size() << " indexes in your vector. Would you like to ";
		//ask user if they want to add another index to their vector
		cout << "add/remove an index to the vector? Enter y or n: ";
		// user enters their choice
		cin >> choice1;
		if (choice1 == 'y') {
			cout << "Add or remove? Enter a or r: ";
			cin >> choice1;
			if (choice1 == 'a') {
				cout << "What value would you like to this current index?" << endl;
				int addIndexValue;
				cin >> addIndexValue;
				numberOfIndex.push_back(addIndexValue); // push_back adds another index. Can only add one index at a time but you can add the value inside the parameter.
			}		 
			else if (choice1 == 'r')
				numberOfIndex.pop_back(); //pop back removes the last index. Can only do one at a time. No parameter value required since it's being removed
			cout << "Your current vector is: {";
			for (int i = 0; i < numberOfIndex.size(); i++) {
				cout << numberOfIndex.at(i) << " ";
			}
			cout << "}" << endl;

		}
	} while (choice1!= 'n');
	
}
