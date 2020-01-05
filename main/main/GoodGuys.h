#pragma once
#include <iostream>
using namespace std;

//Global variables             NOTE: Villains is IDENTICAL except the word "Heroes" is replaced with "Villains"
int heroesHealth; //needs to be global because we are referencing it in multiple functions

class Heroes {
public: //public means that any other file can reference these functions. 
	//function prototypes
	Heroes(); //default constructor (no parameters)
	int getHealth(); //function to return the health
	void damage(int); //function to simulate taking damage
	void heal(int); //function to simulate healing
};

Heroes::Heroes() //Constructor. Generally used to initialize variables. Executes when object is created. 
{
	heroesHealth = 100;
}

void Heroes::damage(int damageTaken) {
	heroesHealth -= damageTaken; //Subtracts villain's health
}

void Heroes::heal(int healthGiven) {
	heroesHealth += healthGiven; //Heals villains
}

int Heroes::getHealth() {
	return heroesHealth; //returns health value. 
}