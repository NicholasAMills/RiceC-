#pragma once
#ifndef burrito_h
#define burrito_h
#include <iostream>
using namespace std;

class burrito {
public:
	burrito();
};

burrito::burrito() {
	cout << "This is the constructor in 'burrito.h'" << endl;
}

#endif 