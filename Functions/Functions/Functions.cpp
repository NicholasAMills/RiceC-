// Functions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <random>
#include <string>
using namespace std;

// Prototypes
int doubleNumber(int);
float getLargerNumber(double, double);
void printAnswer();
string newMessage();

// Variables
int number;

int main()
{
	string message;
	float num1;
	float num2;

	cout << "Enter a number: ";
	cin >> number;
	cout << "enter a message" << endl;
	cin >> message;

	number = doubleNumber(number); // (my note: use this to demonstrate pointers.)
	message = newMessage();
	printAnswer();
	cout << endl;
	cout << "your message was: " << message;

	cout << "\n\n";
	cout << "Enter two numbers (including decimals) and I will tell you the larger of the two" << endl;
	cout << "First number: ";
	cin >> num1;
	cout << "Second number: ";
	cin >> num2;
	float largerNumber = getLargerNumber(num1, num2);
	cout << "The larger number is " << largerNumber << endl;

	cout << "That larger number * 2 is " << doubleNumber(largerNumber) << endl;

}

int doubleNumber(int x) {
	return x * 2;
}

string newMessage() {
	return "Ha HA! I have hijacked your message and replaced it with my own!";
}

void printAnswer() {
	cout << "Your new number is: " << number; 
}

float getLargerNumber(double firstNumber, double secondNumber) {
	if (firstNumber > secondNumber) {
		return firstNumber;
	}
	else {
		return secondNumber;
	}
}