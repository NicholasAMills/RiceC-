#include "stdafx.h"
#include "player.h"

player::player() {
	name = "Default";
}

player::player(string theName) {
	name = theName;
}

player::displayName(string playerName) {
	cout << "Your new name is: " << playerName << endl;
}

player::greet() {
	cout << "Welcome weary traveler." << endl;
}

int main() {
	player myObject = new player();
	myObject.greet();
	return 0;
}