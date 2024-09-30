#include "Element.h"
#include "Enemy.h"
#include "Hero.h"
using namespace std;

#ifndef SQM_H
#define SQM_H

class SQM
{
public:
	Enemy enemy;
	Element element;
	bool isEmpty = false;
	bool isBattleRound = false;

	SQM();
	SQM(int level, bool& mandatoryWeapon);
	~SQM();

	void createBattle(Hero& hero, Enemy& enemy);
};

#endif