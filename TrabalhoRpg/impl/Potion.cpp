#include <iostream>
#include "../objects/Potion.h"
using namespace std;

Potion::Potion() {}

Potion::Potion(int level)
{
	switch (rand() % 4)
	{
	case 0:
		name = "Poção de cura leve";
		heal = 20 * level;
		weight = 2;
		break;
	case 1:
		name = "Poção de cura média";
		heal = 50 * level;
		weight = 4;
		break;
	case 2:
		name = "Poção de cura regenerativa";
		heal = 20 * level;
		weight = 3;
		break;
	case 3:
		name = "Poção de cura total";
		heal = 100 * level;
		weight = 6;
		break;
	/*case 4:
		name = "Poção de resistência";
		heal = 0;
		endurance = 40 * level;
		roundsWithEfect = 2;
		weight = 5;
		break;*/
	}
}

string Potion::GetName() const{ return name; }
int Potion::GetWeight() const{ return weight; }
int Potion::GetHeal() const{ return heal; }
int Potion::GetEndurance() const{ return endurance; }
//int Potion::GetRoundsWithEfect() const{ return roundsWithEfect; }
