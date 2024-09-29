#include <iostream>
#include "../objects/Bag.h"
using namespace std;

Bag::Bag() { top = NULL; }

Bag::~Bag() {
	Element x;
	while (!Empty())
		Pop(x);
}

bool Bag::Full() { return false; }
bool Bag::Empty() { return (top == NULL); }

void Bag::Push(Element x) {
	BagPointer p;
	p = new BagNode;
	if (p == NULL)
	{
		cout << "Memoria insuficiente";
		abort();
	}
	p->element = x;
	p->nextNode = top;
	top = p;
}

void Bag::Pop(Element& x) {
	BagPointer p;
	if (Empty())
	{
		cout << "Pilha Vazia";
		abort();
	}
	x = top->element;
	p = top;
	top = top->nextNode;
	delete p;
}

void Bag::Clear() {
	Element x;
	while (!Empty())
		Pop(x);
}

int Bag::Size() { return 0; }