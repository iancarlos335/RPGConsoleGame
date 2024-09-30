/*
Ian Carlos Azevedo Martins - 2212006
Rafael Calixto Avelar - 2223579
Gabriel Augusto Ravaneli - 2189116
*/
#include <iostream>
#include "../objects/Bag.h"
#include "../objects/Hero.h"
using namespace std;

Hero::Hero()
{
	cout << "Digite o nome do heroi abaixo:" << endl;
	getline(cin, name);

	belt = Belt();
	bag = Bag();
}

Hero::~Hero() {}
void Hero::Heal(Potion potion) {
	healthPoints += potion.GetHeal();
}

void Hero::ChangeWeapon(Weapon varWeapon) {
	weapon = varWeapon;
}
void Hero::Damage() {}
void Hero::createHero() {}

void Hero::InteractWithBelt(Hero & hero) {
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
		hero.belt.ShowElements();
		break;
	case 2:
		cout << "Escreva a posição do elemento deseja usar abaixo:" << endl;
		cin >> intAnswer;
		hero.belt.Retrieve(intAnswer, element);
		if (element.typeOfElement == 1)
			hero.Heal(element.potion);
		else if (element.typeOfElement == 2)
			hero.ChangeWeapon(element.weapon);
		break;
	case 3:
		break;
	}
};

void Hero::InteractWithBag(Hero& hero) {
	int intAnswer;
	Element element;
	cout << "O que deseja fazer?" << endl
		<< "1 - Ver elementos" << endl
		<< "2 - Usar elemento no topo" << endl
		<< "3 - Remover todos elementos da mochila" << endl
		<< "4 - Sair" << endl;
	cin >> intAnswer;
	switch (intAnswer)
	{
	case 1:
		hero.bag.ShowElements();
		break;
	case 2:
		hero.bag.Pop(element);
		if (element.typeOfElement == 1) {
			hero.Heal(element.potion);
			cout << "Elemento usado: " << endl
				<< "Nome: " << element.potion.GetName() << endl
				<< "Cura: " << element.potion.GetHeal() << endl
				<< "Peso: " << element.potion.GetWeight() << endl;
		}
		else if (element.typeOfElement == 2) {
			hero.ChangeWeapon(element.weapon);
			cout << "Elemento usado: " << endl
				<< "Nome: " << element.weapon.GetName() << endl
				<< "Dano: " << element.weapon.GetDamage() << endl
				<< "Peso: " << element.weapon.GetWeight() << endl;
		}
		break;
	case 3:
		hero.bag.Clear();
		cout << "Todos elementos removidos da mochila." << endl;
		break;
	case 4:
		break;
	}
}