#include <iostream>
#include "../objects/Map.h"
#include "../objects/Hero.h"
using namespace std;

const int MAX_LEVEL = 5;
int main()
{
    srand(time(0));
    Map maps[MAX_LEVEL + 1];
    Hero hero = Hero();

    // Create game
    for (int i = 0; i < MAX_LEVEL; i++)
    {
        maps[i] = Map(i + 1);
    }

    // Start game
}
