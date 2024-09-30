/*
Ian Carlos Azevedo Martins - 2212006
Rafael Calixto Avelar - 2223579
Gabriel Augusto Ravaneli - 2189116
*/

#include <iostream>
#include "../objects/Bag.h"
#include "../objects/Hero.h"
#include "../objects/Element.h"
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
		cout << "Mochila vazia!";
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

void Bag::ShowElements() {
	BagPointer p;
	p = top;
	while (p != NULL)
	{
		cout << "Elemento: ";
		if (p->element.typeOfElement == 1)
			cout << "Arma" << endl;
		else
			cout << "Pocao" << endl;
		p = p->nextNode;
	}
}