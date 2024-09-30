#include "Weapon.h"
#include "Potion.h"
#include "Element.h"
#include "Hero.h"
using namespace std;

#ifndef BELT_H
#define BELT_H

const int MAX_SIZE = 5;
const int MAX_WEIGHT = 20;
class Belt
{
public:
    Belt();
    ~Belt();
    bool Full();
    bool Empty();
    void Insert(int p, Element element);
    void Delete(int p, Element& element);
    int Size();
    void Retrieve(int p, Element& element);
    void ShowElements();
    void InteractWithBelt(Hero& hero);
    void Replace(Element element, int p);
    void Clear();

private:
    Element Entry[MAX_SIZE + 1];
    int count;
};

#endif