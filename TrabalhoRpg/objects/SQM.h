/*
Ian Carlos Azevedo Martins - 2212006
Rafael Calixto Avelar - 2223579
Gabriel Augusto Ravaneli - 2189116
*/
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

	void createBattle(Hero& hero, Enemy& enemy, bool& gameOver);
};

#endif