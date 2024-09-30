/*
Ian Carlos Azevedo Martins - 2212006
Rafael Calixto Avelar - 2223579
Gabriel Augusto Ravaneli - 2189116
*/
#include <iostream>
#include "../objects/SQM.h"

using namespace std;

SQM::SQM() {}

SQM::SQM(int level, bool& mandatoryWeapon)
{
	if (isBattleRound)
		enemy = Enemy(level);
	else if (mandatoryWeapon)
		element = Element(level, mandatoryWeapon);
	else
	{
		switch (rand() % 2)
		{
		case 0:
			element = Element(level, mandatoryWeapon);
			break;
		case 1:
			isEmpty = true;
			break;
		}
	}
}

SQM::~SQM() {}
