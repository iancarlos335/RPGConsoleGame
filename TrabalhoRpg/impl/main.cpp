#include <iostream>
#include "../objects/Map.h"
#include "../objects/Hero.h"
using namespace std;

const int MAX_LEVEL = 5;
int main()
{
	srand(time(0));
	Map maps[MAX_LEVEL];
	Hero hero = Hero();

	// Create game
	for (int i = 0; i < MAX_LEVEL; i++)
	{
		maps[i] = Map(i + 1);
	}

	// Start game
	for (int i = 0; i < MAX_LEVEL; i++)
	{
		for (int j = 0; j < MAX_ROUNDS; j++) {
			SQM currentSqm = maps[i].sqm[j];
			cout << "Status do jogador:" << endl
				<< "Nível: " << hero.level << endl
				<< "Vida: " << hero.healthPoints << endl
				<< "Resistência: " << hero.endurance << endl
				<< endl << "-----------------------------------------------------" << endl
				<< "Elementos no cinto: " << endl;

			for (int s = 0; i < hero.belt.Size(); s++) {
				Element element;
				hero.belt.Retrieve(s, element);
			}
			<< "Elementos no cinto: "
				<< hero.belt.Retrieve
				hero.bag.Size();

			if (currentSqm.isBattleRound) {
				currentSqm.createBattle(hero, currentSqm.enemy);
			}
			hero

		}
	}
}
