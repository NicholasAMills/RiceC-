#pragma once
#include <iostream>
using namespace std;

class Burrito {
public: 
	Burrito();
	int numOfEaten(int);
};

Burrito::Burrito() {
	cout << "Burrito" << endl;
}

int Burrito::numOfEaten(int a) {
	return a * 3;
}