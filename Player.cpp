#include "Player.h"
#include <iostream>
#include <math.h>
#include "functions.hpp"
using namespace std;

//Method definitions for Player class

Player::Player(string playerName, int classSelect, int level)
{
    setName(playerName);
    setClass(classSelect);
    setLevel(level);
    setMaxHP(level);
    setHP(maxHP);
    setXP(level);
}

Player::Player()
{
}
Player::~Player()
{
}
void Player::setClass(int classSelect){ Class = classSelect;}
//1 for warrior
//2 for mage
//3 for ranger

//Setters and getters

void Player::setName(std::string playerName){ name = playerName; }
std::string Player::getName(){return name;}

void Player::setLevel(int level){ playerLevel = level; }
int Player::getLevel(){ return playerLevel; }

void Player::setMaxHP(int level){ maxHP = getLevel()*(rand()%8+rand()%8+rand()%8); }
int Player::getMaxHP(){return maxHP;}

void Player::setHP(int maxHP){ HP = maxHP; }
int Player::getHP(){return HP;}


void Player::setXP(int level){ XP = pow((getLevel()/0.2),2); }
int Player::getXP(){return XP;}

void Player::setXPnext(int level){ XPnext = pow((getLevel()/0.2),2); }
int Player::getXPnext(){return XPnext;}



int Player::magic(int mana, int damage){
    int spellSelect;
label3:
    cout << "What spell would you like to cast?\n1) Fireball\n2) Ice bolt\n3) Back\n";
    cin >> spellSelect;
    
    switch(spellSelect){
        case 1:
            if (mana < 0){
                cout << "Not enough mana!";
                goto label3;
            }
            mana = mana - 1;
            damage = 4;

            return damage;

        case 2:
            if (mana < 1){
                cout << "Not enough mana!";
                goto label3;

            }
            damage = 6;
            return damage;
            
        case 3:
            break;
            //return fight();
    }
    return 0;
}




