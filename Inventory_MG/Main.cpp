#include <iostream>	
#include <string>
#include "Character.h"
#include "Weapon.h"
#include "Potion.h"
#include <conio.h>
#include <windows.h>
using namespace std;

void main() {
	cout << "Initializing Inventory Test Program..\n";
	Character Player; Weapon Sword("Sword", "Melee", 5, 0); Potion HealingP("Potion of Healing", "Healing", 5);
	cout << "Character and Items created\n";
	system("PAUSE");
	int exitCode = 0;
	int choice;
	cout << "You are sitting next to a campfire thinking about packing your bag.\n";
	Sleep(3000);
	cout << "You look on the ground and see your two items, a " << Sword.getName() << " and a " << HealingP.getName() << " .\n";
	Sleep(2000);
	while (exitCode != 1) {
		cout << "Press 1 to start placing the items in your bag     ";
		cin >> choice;
		if (choice == 1) {
			cout << "You open your bag\n";
			exitCode = 1;
		}
		else {
			cout << "You feel confused...\n";
			system("PAUSE");
		}
	}
	Sleep(1500);
	cout << "First, you check your back to see if there is anything in there already.\n\n";
	Sleep(1500);
	Player.accessInventory();
	cout << "Now you place your items into the bag.\n";
	Sleep(1500);
	Player.takeItem(&Sword);
	Sleep(1500);
	Player.takeItem(&HealingP);
	Sleep(1500);
	cout << "Now you look into your bag again.\n";
	Player.accessInventory();
	cout << "Now you're ready to go!\n";
	Sleep(1500);
	cout << "Program End\n"; system("PAUSE");

	
}

//void main() {
//	Character Player; 
//	Weapon Sword("Sword", "Melee", 5, 0); 
//	Potion HealingP("Potion of Healing", "Healing", 5);
//
//	Player.charInventory.addItem(&Sword);
//	Sleep(2000);
//	Player.accessInventory();
//
//	system("PAUSE");
//}