#include <iostream>
#include "../objects/Bag.h"
using namespace std;

Bag::Bag() {}

Bag::~Bag() {}
bool Bag::Full() { return false; }
bool Bag::Empty() { return false; }

void Bag::Push(Bag x) {}
void Bag::Pop(Bag &x) {}

void Bag::Clear() {}
int Bag::Size() { return 0; }