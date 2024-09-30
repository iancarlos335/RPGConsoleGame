/*
Ian Carlos Azevedo Martins - 2212006
Rafael Calixto Avelar - 2223579
Gabriel Augusto Ravaneli - 2189116
*/
#include <string>
using namespace std;

#ifndef WEAPON_H
#define WEAPON_H

class Weapon
{
private:
	string name;
	int weight;
	int damage;
	/*int roundsWithEfect = 0;*/

public:
	Weapon();
	Weapon(int level);
	~Weapon();

	string GetName() const;
	int GetWeight() const;
	int GetDamage() const;
	/*int GetRoundsWithEfect() const;*/
};

#endif