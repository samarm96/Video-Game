#pragma once
#include "Inventory.h"
#include "Weapon.h" 
#include "Potion.h"
#include <vector>
#include <iostream>

class Inventory
{
private:
	static const int defaultSize = 5;
	int size;
	Item emptyItem;
	std::vector<Item*> inventory;
public:
	Inventory();
	Inventory(int s);
	~Inventory();
	void openInventory();
	void displayMenu();
	int getSize();
	void setSize(int s);
	void addItem(Item* item);
	void destroyItem(int i);
};

