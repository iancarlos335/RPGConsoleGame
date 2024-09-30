/*
Ian Carlos Azevedo Martins - 2212006
Rafael Calixto Avelar - 2223579
Gabriel Augusto Ravaneli - 2189116
*/
#include <iostream>
#include "../objects/Map.h"
#include "../objects/Hero.h"
#include "../objects/Belt.h"
#include "../objects/Bag.h"
#include <fstream>
using namespace std;

const int MAX_LEVEL = 5;
int main()
{
	bool gameOver = false;
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

			// Hero belt elements
			hero.belt.ShowElements();

			if (currentSqm.isBattleRound)
			{
				currentSqm.createBattle(hero, currentSqm.enemy, gameOver);
				if (gameOver) {
					abort();
				}
			}
			else if (!currentSqm.isEmpty)
			{
				char charAnswer;
				int intAnswer;
				Element element;
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
					cout << "Você deixou o elemento para trás." << endl;

				// Interact with belt
				cout << "Deseja interagir com o cinto? (S/N)";
				cin >> charAnswer;
				if (charAnswer == 'S' || charAnswer == 's')
					hero.InteractWithBelt(hero);

				// Interact with bag
				cout << "Deseja interagir com a mochila? (S/N)";
				cin >> charAnswer;
				if (charAnswer == 'S' || charAnswer == 's')
					hero.InteractWithBag(hero);

			}
			else
			{
				cout << "Você encontrou um caminho vazio, continue sua jornada.";
			}
		}
	}

	CreateScoresFile(hero);

}

void CreateScoresFile(Hero hero) {
	ofstream scoresFile;
	scoresFile.open("high_scores.txt");
	scoresFile << "Scores" << endl
		<< "Nome do Heroi: " << hero.name << endl
		<< "Nivel: " << hero.level << endl
		<< "Vida: " << hero.healthPoints << endl;
	scoresFile.close();
}