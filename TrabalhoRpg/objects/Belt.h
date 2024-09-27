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
    void Full();
    void Empty();
    void Insert(int x);
    void Delete(int &x);
    int Size();
    void Retrieve(int &x, int p);
    void Replace(int x, int p);
    void Clear();

private:
    Element Entry[MAX_SIZE + 1];
    int count;
};

#endif