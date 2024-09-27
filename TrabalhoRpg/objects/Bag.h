#include "Element.h"
using namespace std;

#ifndef BAG_H
#define BAG_H

class Bag
{
public:
    Bag();
    ~Bag();
    bool Full();
    bool Empty();

    void Push(Bag x);
    void Pop(Bag &x);

    void Clear();
    int Size();

private:
    struct BagNode
    {
        Element atributes;
        BagNode *nextNode;
    };
    BagNode *top;
    // pile structure
};

#endif