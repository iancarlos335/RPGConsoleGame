/*
Ian Carlos Azevedo Martins - 2212006
Rafael Calixto Avelar - 2223579
Gabriel Augusto Ravaneli - 2189116
*/
#include <string>
using namespace std;

#ifndef ENEMY_H
#define ENEMY_H

class Enemy
{
public:
    Enemy();
    Enemy(int level);
    ~Enemy();

    string name;
    int atackPoints;
    int healthPoints;
};

#endif