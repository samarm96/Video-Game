#pragma once
#include "Character.h"
#include "Inventory.h"
#include "Item.h"
class Character
{
private:
	int inventorySize;
	Inventory charInventory;
public:
	Character();
	~Character();
	int getInventorySize();
	void setInventorySize(int size);
	void accessInventory();
	void takeItem(Item* item);
};

