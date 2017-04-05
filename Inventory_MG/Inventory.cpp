#include "Inventory.h"
#include "Weapon.h" 
#include "Potion.h"
#include <vector>
#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;


Inventory::Inventory() : size(5), inventory(5)
{
	std::vector<Item*> inventory;
	inventory.reserve(5);
	for (int i = 0; i < 5; i++) {
		inventory.emplace_back(&emptyItem);
	}
	
}

Inventory::Inventory(int s) : size(s), inventory(s)
{
	std::vector<Item*> inventory;
	inventory.reserve(size);
	for (int i = 0; i < size; i++) {
		inventory.emplace_back(&emptyItem);
	}

}

Inventory::~Inventory()
{
}

int Inventory::getSize()
{
	return inventory.size();
}

void Inventory::setSize(int s)
{
	size = s; //todo: resize inventory vector when this parameter is changed
}

void Inventory::addItem(Item* item)
{
	if (!inventory.back()) {
		inventory.emplace(inventory.begin(), item);
		inventory.erase(inventory.begin()+size);
		cout << item->getName() << " has been placed into your inventory\n";
	}
	else {
		cout << "There's no space!\n";
	}
}

void Inventory::destroyItem(int i)
{
	if (inventory.at(i)) {
		cout << inventory.at(i)->getName() << " has been destroyed.\n";
		inventory.erase(inventory.begin() + i);
		inventory.emplace_back(&emptyItem);
	}
}

void Inventory::openInventory() //redefined access function to deal with null slots instead of "empty objects"
{
	int choice; int exitCode1 = 0; int exitCode2 = 0; int num;
	//Item *invI = new Item;
	cout << "Opening inventory...\n\n";
	Sleep(2000);
	while (exitCode1 != 1) {
		exitCode2 = 0;
		displayMenu();
		cout << "Choose item to examine or enter 0 to exit:  "; cin >> choice; 
		if (choice == 0) { exitCode1 = 1; continue; }
		else if (choice <= size) { num = choice - 1; }
		else if (choice > size) { continue; }
		if (inventory.at(num)) { //changed to if(ptr)
			cout << "You take a closer look at the " << inventory.at(num)->getName() << "\n";
		}
		else { cout << "There is no item in that slot\n"; system("PAUSE"); continue; }
		while (exitCode2 != 1) {
			cout << "What would you like to do with this item? \n";
			cout << "1) Look at stats \n" << "2) Use Item \n" << "3) Equip Item \n" << "4) Destroy Item \n" << "5) Drop Item \n" << "6) Look at something else \n";
			cin >> choice;
			switch (choice) {
			case 1:
				/*invI = inventory.at(num);
				invI->displayStats();*/
				inventory.at(num)->displayStats();
				continue;
			case 2:
				cout << "You can't figure out how to use this..\n\n";
				Sleep(2000);
				continue;
			case 3:
				cout << "You try equiping the item but realize that you have no idea how..\n\n";
				Sleep(2000);
				continue;
			case 4:
				cout << "You brutally destroy the item!\n\n";
				Sleep(2000);
				destroyItem(num);
				exitCode2 = 1;
				continue;
			case 5:
				cout << "Don't litter.\n\n";
				Sleep(2000);
				continue;
			case 6:
				cout << "You stop examining the " << inventory.at(num)->getName() << "\n\n";
				Sleep(2000);
				exitCode2 = 1;
				continue;
			}
		}
	}
	cout << "Closing inventory...\n";
}

void Inventory::displayMenu()
{
	cout << "INVENTORY \n";
	cout << "===================================================\n";
	cout << "Inventory Slots: \n";
	for (int i = 0; i < size; i++) { //check for null for each entry -> if null, print empty, if not, manipulate item
		if (!inventory.at(i)) { cout << "Empty Slot\n\n"; }
		else {
			cout << i + 1 << ") " << inventory.at(i)->getName() << "\n";
			cout << "   Description: " << inventory.at(i)->getDescription() << "\n";
		}
	}
	cout << "===================================================\n\n";

}