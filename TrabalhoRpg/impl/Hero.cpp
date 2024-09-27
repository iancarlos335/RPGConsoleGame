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
void Hero::Heal() {}
void Hero::Damage() {}
void Hero::createHero() {}
