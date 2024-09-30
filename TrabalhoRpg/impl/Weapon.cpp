#include <iostream>
#include "../objects/Weapon.h"
using namespace std;

Weapon::Weapon() {}

Weapon::Weapon(int level)
{
    switch (rand() % 4)
    {
    case 0:
        name = "Espada longa";
        damage = 34 * level;
        weight = 5;
        break;
    case 1:
        name = "Machado de guerra";

        damage = 50 * level;
        weight = 7;
        break;
    case 2:
        name = "Arco sombrio";
        damage = 25 * level;
        weight = 3;
        break;
    case 3:
        name = "Cajado do mago";
        damage = 40 * level;
        weight = 6;
        break;
    /*case 4:
        name = "Adagas venenosas";
        damage = 20 * level;
        weight = 4;
        roundsWithEfect = 2;
        break;*/
    }
}

Weapon::~Weapon() {}


string Weapon::GetName() const { return name; }
int Weapon::GetWeight() const { return weight; }
int Weapon::GetDamage() const { return damage; }
//int Weapon::GetRoundsWithEfect() const { return roundsWithEfect; }