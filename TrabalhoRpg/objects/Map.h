#include "Enemy.h"
#include "Element.h"
#include "SQM.h"
using namespace std;

#ifndef MAP_H
#define MAP_H

const int MAX_ROUNDS = 10;
class Map
{
public:
	Map();
	Map(int level);
	~Map();
	SQM sqm[MAX_ROUNDS];

private:
	int currentRound;
	bool mandatoryWeapon = false;	
};

#endif