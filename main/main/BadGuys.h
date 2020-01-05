#pragma once
#include <iostream>
using namespace std;

//Global variables
int villainHealth;

class Villains {
public: 
	Villains(); 
	int getHealth();
	void damage(int);
	void heal(int);
};

Villains::Villains() //Constructor. Generally used to initialize variables. Executes when object is created. 
{
	villainHealth = 100;
}

void Villains::damage(int damageTaken) {
	villainHealth -= damageTaken; //Subtracts villain's health
}

void Villains::heal(int healthGiven) {
	villainHealth += healthGiven; //Heals villains
}

int Villains::getHealth() {
	return villainHealth; //The whole point of this function is to return the value of 
}