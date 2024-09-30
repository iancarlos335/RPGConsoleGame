/*
Ian Carlos Azevedo Martins - 2212006
Rafael Calixto Avelar - 2223579
Gabriel Augusto Ravaneli - 2189116
*/
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
    /*int roundsWithEfect = 0;*/

public:
    Potion();
    Potion(int level);

	string GetName() const;
	int GetWeight() const;
	int GetHeal() const;
	int GetEndurance() const;
	/*int GetRoundsWithEfect() const;*/
};

#endif