#include "Potion.h"



Potion::Potion()
{
	setName("Potion");
	PType = "Healing";
	Modifier = 4;
}

Potion::Potion(std::string N, std::string P, int M) : PType(P), Modifier(M)
{
	setName(N);
	setDescription("This item will give you a modifier of type " + PType);
}

Potion::~Potion()
{
}

int Potion::getModifier() {
	return Modifier;
}

void Potion::setModifier(int val) {
	Modifier = val;
}

void Potion::displayStats()
{
	std::cout << "	Potion Type: " << PType << "\n";
	std::cout << "	Potion Modifier: " << Modifier << "\n";
}
