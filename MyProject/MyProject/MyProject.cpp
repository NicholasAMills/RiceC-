// MyProject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	// This is a comment. Comments are notes you can put in your program to help specify what something is doing. 

	// To make a comment, use double forward slashes. Anything afterwards will be ignored by the compiler. 

	/* this is 
	a multi-lined 
	comment. */

	int wholeNumber; // Integers are whole numbers
	float decimal; //Floats can hold decimals
	double largeDecimal; //Doubles are twice the size of floats
	bool TrueFalse; //Booleans can hold either true or false
	char character; //Characters can ONLY hold one letter
	string sentence; //Strings are a word or phrase. NOTE: Must include #include <string> in the header! (top of console)

	/* Variables do not need to be assigned right off the bat. You can create it and assign it later as long as 
	   you aren't trying to use it before it is assigned.*/

	wholeNumber = 10;
	decimal = 23.4;
	largeDecimal = 1234567.123;
	TrueFalse = false;
	character = 'a';
	sentence = "This is a string";

	//Displaying information:
	cout << wholeNumber; //display wholeNumber without adding a new line.
	cout << decimal << endl; //display decimal and then adding a new line afterwards
	cout << "TrueFalse's value is: " << TrueFalse << endl; //adding multiple bits of information to one cout statement
	
	//Getting information from user
	string name; //Again, declaring this down here is okay because I haven't used it yet
	cout << "What is your name?" << endl; 
	cin >> name; //note: don't add endl here. Leave it as cin >> variable; It will read up to the first white space
	cout << "Your name is: " << name << endl;

	return 0; //once this code is reached, the program will end. 
}