#pragma once
#include "Item.h"
class Potion :
	public Item
{
private:
	std::string PType;
	int Modifier;
public:
	Potion();
	Potion(std::string N, std::string P, int M);
	~Potion();
	int getModifier();
	void setModifier(int val);
	void displayStats();
};

