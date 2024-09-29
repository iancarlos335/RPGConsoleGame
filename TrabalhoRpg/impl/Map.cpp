#include <iostream>
#include "../objects/Map.h"
using namespace std;

Map::Map() {}

Map::Map(int level)
{
	bool mandatoryWeapon = level == 1 ? true : false;
	int firstBattle = rand() % (MAX_ROUNDS - 5 + 1) + 5;                    // 5 to 10 SQM paths
	int lastBattle = rand() % (MAX_ROUNDS - firstBattle + 1) + firstBattle; // 5 to 10 SQM paths

	for (int i = 0; i < MAX_ROUNDS; i++)
	{
		if (firstBattle == i + 1 || lastBattle == i + 1)
			sqm[i] = SQM(level, true, mandatoryWeapon);
		else if (level == 1 && i == 3 && mandatoryWeapon) { // Hero doesn't have any weapon before first battle
			sqm[i] = SQM(level, false, mandatoryWeapon);
		}
		else
			sqm[i] = SQM(level, false, mandatoryWeapon);
	}
}

Map::~Map() {}