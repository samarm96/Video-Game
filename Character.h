#pragma once
#include <string>

//Base class for any future character object

class Character
{
public:
	Character();
	virtual ~Character();
	std::string Class;
	int hitpoints;
	int inventory[30];
	std::string CharacterName;
};

