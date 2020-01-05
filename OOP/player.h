#pragma once
#include <iostream>
#include <string>

using namespace std;

class player {
public:
	player();
	player(string playerName);
	string name;
	void greetPlayer();
	void setName();
};