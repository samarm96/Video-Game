#pragma once
#include "Character.h"
#include <string>
//Player class, an extension of the Character class
//Notice that attributes and methods are declared here, defined in .cpp

class Player :
	public Character
{
public:
	Player();
	Player(std::string playerName, int classSelect, int level);
	~Player();
    std::string name;
	int initmod = 1;
	int maxhit = 8;
	int AC = 10;
	int mana = 10;
    int damage;
private:
    int playerLevel;
    int Class;
    int maxHP;
    int HP;
	int XP;
	int XPnext;

public:
	//set
    void setName(std::string);
    void setClass(int);
    int magic(int, int);
    void setLevel(int);
    void setMaxHP(int);
    void setHP(int);
	void setXP(int);
	void setXPnext(int);

	//roll
	//leaving this empty till we nail down stats


	//get
	int getXP();
	std::string getName();
	int getXPnext();
	int getHP();
	int getLevel();
	int getMaxHP();

};



