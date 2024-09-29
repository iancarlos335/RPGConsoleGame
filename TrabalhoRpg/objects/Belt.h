#include "Weapon.h"
#include "Potion.h"
#include "Element.h"
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
    void Insert(int p, Element x);
    void Delete(int p, Element& x);
    int Size();
    void Retrieve(int p, Element& x);
    void Replace(Element x, int p);
    void Clear();

private:
    Element Entry[MAX_SIZE + 1];
    int count;
};

#endif