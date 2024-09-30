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

	void Push(Element x);
	void Pop(Element& x);

	void Clear();
	int Size();

	void ShowElements();
	void InteractWithBag(Hero& hero);

private:
	struct BagNode
	{
		Element element;
		BagNode* nextNode;
	};

	typedef BagNode* BagPointer;
	BagPointer top;
};

#endif