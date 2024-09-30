#include <iostream>
#include "../objects/Map.h"
#include "../objects/Hero.h"
#include "../objects/Belt.h"
using namespace std;

const int MAX_LEVEL = 5;
int main()
{
	srand(time(0));
	Map maps[MAX_LEVEL];
	Hero hero = Hero();
	Element beltElements[MAX_SIZE];

	// Create game
	for (int i = 0; i < MAX_LEVEL; i++)
	{
		maps[i] = Map(i + 1);
	}

	// Start game
	for (int i = 0; i < MAX_LEVEL; i++)
	{
		for (int j = 0; j < MAX_ROUNDS; j++)
		{
			SQM currentSqm = maps[i].sqm[j];

			// Hero status
			cout << "Status do jogador:" << endl
				 << "Nível: " << hero.level << endl
				 << "Vida: " << hero.healthPoints << endl
				 << "Resistência: " << hero.endurance << endl
				 << endl
				 << "-----------------------------------------------------" << endl
				 << "Elementos no cinto: " << endl;

			// Hero belt content
			for (int s = 0; i < hero.belt.Size(); s++)
			{
				hero.belt.Retrieve(s + 1, beltElements[s]);

				cout << "Elemento: " << s + 1 << endl;

				switch (beltElements[s].typeOfElement)
				{
				case 1:
					cout << "Nome: " << endl
						 << beltElements[s].weapon.GetName() << endl
						 << "Dano: " << endl
						 << beltElements[s].weapon.GetDamage() << endl
						 << "Peso: " << endl
						 << beltElements[s].weapon.GetWeight() << endl;
					break;
				case 2:
					cout << "Nome: " << endl
						 << beltElements[s].potion.GetName() << endl;
					cout << "Cura: " << endl
						 << beltElements[s].potion.GetHeal() << endl;
					cout << "Peso: " << endl
						 << beltElements[s].potion.GetWeight() << endl;
					break;
				};
			}

			if (currentSqm.isBattleRound)
			{
				currentSqm.createBattle(hero, currentSqm.enemy);
			}
			else if (!currentSqm.isEmpty)
			{
				char charAnswer;
				int intAnswer;
				cout << "Você encontrou um elemento, deseja pegá-lo? (S/N)";
				cin >> charAnswer;
				if (charAnswer == 'S' || charAnswer == 's')
				{
					cout << "Onde você deseja colocar o elemento?" << endl
						 << "1 - Cinto" << endl
						 << "2 - Mochila" << endl;
					cin >> intAnswer;
					switch (intAnswer)
					{
					case 1:
						hero.belt.Insert(hero.belt.Size() + 1, currentSqm.element);
						break;
					case 2:
						hero.bag.Push(currentSqm.element);
						break;
					}
				}
				else
					cout << "Você deixou o elemento para trás.";
			}
			else
			{
				cout << "Você encontrou um caminho vazio, continue sua jornada.";
			}
		}
	}
}
