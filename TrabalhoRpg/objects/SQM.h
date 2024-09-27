#include "Element.h"
#include "Enemy.h"
using namespace std;

#ifndef SQM_H
#define SQM_H

class SQM
{
public:
	Enemy enemy;
	Element element;
	bool isEmpty = false;

	SQM();
	SQM(int level, bool isBattleRound, bool& mandatoryWeapon);
	~SQM();
};

#endif