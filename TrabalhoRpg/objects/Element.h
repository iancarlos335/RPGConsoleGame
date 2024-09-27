#include "Potion.h"
#include "Weapon.h"

#ifndef ELEMENT_H
#define ELEMENT_H

class Element
{
public:
    Element();
    Element(int level, bool& mandatoryWeapon);
    ~Element();

    Weapon weapon;
    Potion potion;
    int typeOfElement; // 1 is weapon | 2 is potion
};

#endif