/*
Ian Carlos Azevedo Martins - 2212006
Rafael Calixto Avelar - 2223579
Gabriel Augusto Ravaneli - 2189116
*/
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

	void InteractWithBag(Hero& hero);
	void InteractWithBelt(Hero& hero);

	string name;
	Weapon weapon;
	int healthPoints = 100;
	int endurance = 0;
	int level;

private:
};

#endif