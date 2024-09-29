#include <iostream>
#include "./objects/Belt.h"
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

void Belt::Replace(Element x, int p) {
	if (p < 1 || p > count)
	{
		cout << "Erro ao substituir elemento.";
		abort();
	}
	Entry[p] = x;
};

void Belt::Clear() { count = 0; };