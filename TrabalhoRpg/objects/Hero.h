#include <string>
#include "Belt.h"
#include "Bag.h"
using namespace std;

#ifndef HERO_H
#define HERO_H


class Hero
{

public:
	Hero();
	~Hero();
	void Heal(Potion potion);
	void ChangeWeapon(Weapon weapon);
	void Damage();
	void createHero();

	Belt belt;
	Bag bag;

	string name;
	Weapon weapon;
	int healthPoints = 100;
	int endurance = 0;
	int level;

private:
};

#endif