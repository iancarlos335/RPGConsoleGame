/*
Ian Carlos Azevedo Martins - 2212006
Rafael Calixto Avelar - 2223579
Gabriel Augusto Ravaneli - 2189116
*/
#include <iostream>
#include "../objects/Element.h"
using namespace std;

Element::Element() {}

Element::Element(int level, bool& mandatoryWeapon)
{
	if (mandatoryWeapon)
	{
		weapon = Weapon(level);
		typeOfElement = 1;
		mandatoryWeapon = false;
	}
	else
	{
		switch (rand() % 2)
		{
		case 0:
			weapon = Weapon(level);
			typeOfElement = 1;
			mandatoryWeapon = false;
			break;
		case 1:
			potion = Potion(level);
			typeOfElement = 2;
			break;
		}
	}
}

Element::~Element() {}