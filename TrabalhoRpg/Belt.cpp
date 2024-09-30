#include <iostream>
#include "./objects/Belt.h"
#include "./objects/Hero.h"
using namespace std;

Belt::Belt() {
	count = 0;
}

Belt::~Belt() {
	cout << "Lista destruída";
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
		cout << "Erro na inserção do elemento no Cinto";
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
		cout << "Erro na deleção do elemento do cinto";
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
		cout << "O elemento buscado não existe";
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
			cout << "Posição no Cinto: " << i << endl
				<< "Nome: " << endl
				<< Entry[i].weapon.GetName() << endl
				<< "Dano: " << endl
				<< Entry[i].weapon.GetDamage() << endl
				<< "Peso: " << endl
				<< Entry[i].weapon.GetWeight() << endl;
			break;
		case 2:
			cout << "Posição no Cinto: " << i << endl
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

void Belt::InteractWithBelt(Hero &hero) {
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