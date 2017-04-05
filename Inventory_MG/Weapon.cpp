#include "Weapon.h"



Weapon::Weapon() : Damage(6), Modifier(0)
{
	setName("Weapon");
	DType = "Melee";
	setDescription("This item will mess you up");
}

Weapon::Weapon(std::string N, std::string T, int D, int M) : Damage(D), Modifier(M), DType(T)
{
	setName(N);
	setDescription("This item will mess you up");
}


Weapon::~Weapon()
{
}

std::string Weapon::getDType() {
	return DType;
}

void Weapon::setDType(std::string type) {
	DType = type;
}

int Weapon::getDamage() {
	return Damage;
}

void Weapon::setDamage(int val) {
	Damage = val;
}

int Weapon::getModifier() {
	return Modifier;
}

void Weapon::setModifier(int val) {
	Modifier = val;
}

void Weapon::displayStats()
{
	std::cout << "	Damage Type: " << DType << "\n";
	std::cout << "	Damage: " << Damage << "\n";
	std::cout << "	Damage Modifier: " << Modifier << "\n";
}