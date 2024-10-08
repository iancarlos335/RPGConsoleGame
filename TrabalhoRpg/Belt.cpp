/*
Ian Carlos Azevedo Martins - 2212006
Rafael Calixto Avelar - 2223579
Gabriel Augusto Ravaneli - 2189116
*/

#include <iostream>
#include "./objects/Belt.h"
#include "./objects/Hero.h"
using namespace std;

Belt::Belt() {
	count = 0;
}

Belt::~Belt() {
	cout << "Lista destru�da";
}

bool Belt::Full() { return (count == MAX_SIZE); }

bool Belt::Empty() {
	return (count == 0);
}

void Belt::Insert(int p, Element x) {
	int i;
	if (Full())
	{
		cout << "Cinto cheio, troque algum elemento.";
		abort();
	}
	if (p < 1 || p > count + 1)
	{
		cout << "Erro na inser��o do elemento no Cinto";
		abort();
	}

	for (i = count; i >= p; i--) {
		Entry[i + 1] = Entry[i];
	}
	Entry[p] = x;
	count++;
}

void Belt::Delete(int p, Element& x) {
	int i;
	if (Empty())
	{
		cout << "Cinto vazio";
		abort();
	}
	if (p < 1 || p > count)
	{
		cout << "Erro na dele��o do elemento do cinto";
		abort();
	}
	x = Entry[p];
	for (i = p; i < count; i++)
		Entry[i] = Entry[i + 1];
	count = count - 1;
}

int Belt::Size() { return count; }

void Belt::Retrieve(int p, Element& x) {
	if (p < 1 || p > count)
	{
		cout << "O elemento buscado n�o existe";
		abort();
	}
	x = Entry[p];
};

void Belt::ShowElements() {
	int i;
	for (i = 1; i <= count; i++)
	{
		cout << "Elemento " << i << endl;
		switch (Entry[i].typeOfElement)
		{
		case 1:
			cout << "Posi��o no Cinto: " << i << endl
				<< "Nome: " << endl
				<< Entry[i].weapon.GetName() << endl
				<< "Dano: " << endl
				<< Entry[i].weapon.GetDamage() << endl
				<< "Peso: " << endl
				<< Entry[i].weapon.GetWeight() << endl;
			break;
		case 2:
			cout << "Posi��o no Cinto: " << i << endl
				<< "Nome: " << endl
				<< Entry[i].potion.GetName() << endl
			    << "Cura: " << endl
				<< Entry[i].potion.GetHeal() << endl
				<< "Peso: " << endl
				<< Entry[i].potion.GetWeight() << endl;
			break;
		};
	}
};

void Belt::Replace(Element x, int p) {
	if (p < 1 || p > count)
	{
		cout << "Erro ao substituir elemento.";
		abort();
	}
	Entry[p] = x;
};

void Belt::Clear() { count = 0; };