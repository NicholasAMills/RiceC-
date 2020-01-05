// TestOOP_Header.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "Header.h" //DON'T FORGET TO #include YOUR HEADER FILES!
#include "Tester.h"

using namespace std;

int main()
{
	testClass object; //Constructor is immediately called after this line. 
	int input;

	cout << "See? Constructor came first" << endl;

	object.displayMessage(); // objectName.functionName(parameters); 

	cout << "enter a number and I will multiply it by 2: ";
	cin >> input;

	cout << object.multiplyNumber(input); 


	Burrito myBurrito;
	cout << "you ate " << myBurrito.numOfEaten(3) << " burritos";

}

