#pragma once
#include "Item.h"
class Weapon :
	public Item
{
private:
	std::string DType;
	int Damage;
	int Modifier;
public:
	Weapon();
	Weapon(std::string N, std::string T, int D, int M);
	~Weapon();
	std::string getDType();
	void setDType(std::string type);
	int getDamage();
	void setDamage(int val);
	int getModifier();
	void setModifier(int val);
	void displayStats();
};

