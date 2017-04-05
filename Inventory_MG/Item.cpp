#include "Item.h"



Item::Item()
{
	name = "EMPTY";
	Description = "Default";
}


Item::~Item()
{
}

std::string Item::getDescription() {
	return Description;
}

void Item::setDescription(std::string desc) {
	Description = desc;
}

void Item::displayStats()
{
	std::cout << "Base\n";
}

std::string Item::getName()
{
	return name;
}

void Item::setName(std::string N)
{
	name = N;
}