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
    int roundsWithEfect = 0;

public:
    Weapon();
    Weapon(int level);
    ~Weapon();
};

#endif