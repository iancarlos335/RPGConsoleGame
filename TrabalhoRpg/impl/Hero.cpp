/*
Ian Carlos Azevedo Martins - 2212006
Rafael Calixto Avelar - 2223579
Gabriel Augusto Ravaneli - 2189116
*/
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
