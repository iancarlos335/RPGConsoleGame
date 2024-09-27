#include <string>
using namespace std;

#ifndef POTION_H
#define POTION_H

class Potion
{
private:
    string name;
    int weight;
    int heal;
    int endurance = 0;
    int roundsWithEfect = 0;

public:
    Potion();
    Potion(int level);
};

#endif