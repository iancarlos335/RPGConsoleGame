/*
Ian Carlos Azevedo Martins - 2212006
Rafael Calixto Avelar - 2223579
Gabriel Augusto Ravaneli - 2189116
*/
#include <iostream>
#include "../objects/Enemy.h"
using namespace std;

Enemy::Enemy() {}
Enemy::Enemy(int level) {
	switch (rand() % 4)
	{
	case 0:
		name = "Minion " + level;
		atackPoints = 20 * level;
		healthPoints = 50 * level;
		break;
	case 1:
		name = "Soldado " + level;
		atackPoints = 30 * level;
		healthPoints = 70 * level;
		break;
	case 2:
		name = "Bruxa " + level;
		atackPoints = 50 * level;
		healthPoints = 100 * level;
		break;
	case 3:
		name = "Boss " + level;
		atackPoints = 70 * level;
		healthPoints = 200 * level;
		break;
	}
}
Enemy::~Enemy() {}