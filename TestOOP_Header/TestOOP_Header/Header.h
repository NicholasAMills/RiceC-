#pragma once
#include <iostream>
using namespace std;

class testClass {
public: 
	testClass(); //Constructor. The constructor is called immediately after the object for this class is created. 
	void displayMessage();
	int multiplyNumber(int);
};

// Constructor - classname::functionName       NOTE: constructor does not have a return type. It is its own thing.           
testClass::testClass() {
	cout << "This is the constructor. This is generally used to initialize variables when an object is created" << endl;
}

// Functions stil work the same way: return type, name (but this time with class specifier), and parameters.
void testClass::displayMessage() {
	cout << "This is a message" << endl;
}

int testClass::multiplyNumber(int a) {
	return a * 2;
}