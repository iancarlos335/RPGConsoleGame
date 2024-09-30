#include <iostream>
#include "../objects/Hero.h"
using namespace std;

Hero::Hero()
{
	cout << "Digite o nome do heroi abaixo:" << endl;
	getline(cin, name);

	belt = Belt();
	bag = Bag();
}

Hero::~Hero() {}
void Hero::Heal(Potion potion) {
	healthPoints += potion.GetHeal();
}

void Hero::ChangeWeapon(Weapon varWeapon) {
	weapon = varWeapon;
}
void Hero::Damage() {}
void Hero::createHero() {}
