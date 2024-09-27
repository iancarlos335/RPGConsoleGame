#include <string>
using namespace std;

#ifndef ENEMY_H
#define ENEMY_H

class Enemy
{
private:
    string name;
    int atackPoints;
    int healthPoints;

public:
    Enemy();
    Enemy(int level);
    ~Enemy();
};

#endif