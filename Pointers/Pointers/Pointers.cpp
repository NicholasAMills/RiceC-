// Pointers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

// prototypes
void pointerFunction1(int); //without pointer
void pointerFunction2(int*); //with pointer
void referenceFunction1(string); //without reference
void referenceFunction2(string&); //with reference


int main()
{
	string exampleString = "Hello, world!";
	int exampleNumber = 10;

	referenceFunction1(exampleString);
	cout << "referenceFunction1: " << exampleString << endl;

	referenceFunction2(exampleString);

	cout << "referenceFunction2: " << exampleString << endl;

	cout << endl;

	cout << "exampleNumber's memory address is: " << &exampleNumber << endl; // Put the & symbol in front of a variable to reference its location in memory

	cout << "Enter a number: ";
	int number;
	cin >> number;

	pointerFunction1(number); //NOTICE WE ARE ENTERING A VOID FUNCTION! We are not returning anything
	cout << "result of function1 is: " << number << endl;

	pointerFunction2(&number); //NOTICE WE ARE ENTERING A VOID FUNCTION! We are not returning anything
	cout << "result of function2 is: " << number << endl;

}


void referenceFunction1(string x) { //Only passing in the string
	x = "reference 1";
}

void referenceFunction2(string &x) { //Passing in the memory address associated with the string we're passing in. 
	x = "reference 2"; //This will now change the original value even though we aren't returning anything
}

void pointerFunction1(int x) {
	// we are entering function1 
	x *= 2; //multiply the value by 2
}

void pointerFunction2(int* x) {
	*x *= 2; //multiply the value by 2
}


