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
    void Heal();
    void Damage();
    void createHero();

private:
    string name;
    int healthPoints = 100;
    int endurance = 0;
    int level;
    Belt belt;
    Bag bag;
};

#endif