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

void Bag::InteractWithBag(Hero& hero) {
	BagPointer p;
	p = top;
	while (p != NULL)
	{
		if (p->element.typeOfElement == 1)
		{
			hero.weapon = p->element.weapon;
			cout << "Arma equipada" << endl;
		}
		else
		{
			hero.potion = p->element.potion;
			cout << "Pocao equipada" << endl;
		}
		p = p->nextNode;
	}

	int intAnswer;
	Element element;
	cout << "O que deseja fazer?" << endl
		<< "1 - Ver elementos" << endl
		<< "2 - Usar elemento" << endl
		<< "3 - Sair" << endl;
	cin >> intAnswer;
	switch (intAnswer)
	{
	case 1:
		ShowElements();
		break;
	case 2:
		cout << "Escreva a posição do elemento deseja usar abaixo:" << endl;
		cin >> intAnswer;
		Retrieve(intAnswer, element);
		if (element.typeOfElement == 1)
			hero.Heal(element.potion);
		else if (element.typeOfElement == 2)
			hero.ChangeWeapon(element.weapon);
		break;
	case 3:
		break;
	}
}