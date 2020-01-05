// main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "BadGuys.h" //DON'T FORGET TO INCLUDE YOUR HEADER FILES HERE! Otherwise when you try to reference the classes they won't be recognized!
#include "GoodGuys.h"

int main()
{
	/*Note: the bad guy and good guy both have functions called "damage", "heal" and "getHealth". Classes allow us to name them the same while still
	 being able to distinguish which function belongs to what object */
	Villains bGuy; //Creating a bad guy object
	Heroes gGuy; //Creating a good guy object

	cout << "bGuy's start health: " << bGuy.getHealth() << endl; //Starts at 100 HP because of value set in the Constructor in the BadGuys.h file
	bGuy.damage(50); //Damaging them for 50
	cout << "bGuy's health: " << bGuy.getHealth() << endl; //displaying current health
	bGuy.heal(5); //healing him for 5
	cout << "bGuy's health: " << bGuy.getHealth() << endl; //displaying current health

	cout << "\ngGuy's start health: " << gGuy.getHealth() << endl; //Starts at 100 HP because of value set in the Constructor in the GoodGuys.h file
	gGuy.damage(30);//Damaging them for 50
	cout << "gGuy's health: " << gGuy.getHealth() << endl; //displaying current health
	gGuy.heal(10);//healing them for 5
	cout << "gGuy's health: " << gGuy.getHealth() << endl; //displaying current health
	return 0;
}
