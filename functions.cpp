//
//  functions.cpp
//  test
//
//  Created by Samar Mathur on 3/26/17.
//  Copyright © 2017 Samar Mathur. All rights reserved.
//

#include "functions.hpp"
#include <iostream>
#include <string>
#include "Player.h"

class goblin{
public:
int initmod = 0;
int hp = 20;
int maxhit = 8;
int AC = 10;
int mana = 10;
};

using namespace std;

int fight(Player){
label1:
    Player Player1;
    goblin goblin1;
    int HP = Player1.getHP();
    int flag = 0;
    //int counter = 1;
    int a;
    int hit;
    int damage;
    int hitg;
    
    cout << "You battle a goblin!\n";
    
    int playerInit = rand() % 20 + Player1.initmod;
    while (playerInit == 0){
        playerInit = rand() % 20 + Player1.initmod;
    };
    int goblinInit = rand() % 20 + goblin1.initmod;
    while (goblinInit == 0){
        goblinInit = rand() % 20 + goblin1.initmod;
    };
    while (goblinInit == playerInit){
        playerInit = rand() % 20 + goblin1.initmod;
        goblinInit = rand() % 20 + goblin1.initmod;
        
    };
    
    cout << "You rolled an initiative of: " << playerInit << "\n";
    cout << "The goblin rolled an initiative of: " << goblinInit<< "\n";
    
    if (playerInit > goblinInit){flag = 1;}
    
    while( goblin1.hp > 0 || HP > 0){
    label:
        if(flag == 1){
            cout << "What would you like to do?\n1) Attack \n2) Magic\n";
            std::cin >> a;
            if (a == 1){
                hit = rand() % 20;
                if (hit == 20){
                    Player1.damage = Player1.maxhit;
                    goblin1.hp = goblin1.hp - Player1.damage;
                    cout << "You critical strike!\n";
                    cout << "Goblin health is now: " << goblin1.hp << "\n";
                }
                if (hit == 1){
                    Player1.damage = 0;
                    cout << "You fail epically!\n";
                }
                if (hit > goblin1.AC){
                    Player1.damage = rand()%8;
                    goblin1.hp = goblin1.hp - Player1.damage;
                    cout << "You strike the goblin for " << Player1.damage << " damage!\n";
                    cout << "Goblin health is now: " << goblin1.hp << "\n";
                }
                if (hit < goblin1.AC){cout << "Your attack misses\n";}
            }
            if (a ==2){
                Player1.damage = Player1.magic(Player1.mana, Player1.damage);
                Player1.mana = Player1.mana-1;
                goblin1.hp = goblin1.hp - Player1.damage;
                cout << "You do " << Player1.damage << " of magic damage!\n";
                cout << "Goblin health is now: " << goblin1.hp << "\n";
            }else{goto label2;}
            
            //Death Conditions
            if (goblin1.hp < 0){
                cout << "You defeat the goblin!\n";
                break;
            }
            if (HP < 0){
                cout << "You have died.\n";
                break;
            }
        label2:
            hitg = rand() % 20;
            if (hitg == 20){
                damage = goblin1.maxhit;
                HP = HP - damage;
                cout << "The goblin hits a critical strike!\n";
                cout << "Your health is now: " << HP << "\n";
            }
            if (hitg == 1){
                damage = 0;
                cout << "The goblin fails epically!\n";
            }
            if (hitg > Player1.AC){
                damage = rand()%6;
                HP = HP - damage;
                cout << "The goblin strikes you for " << damage << " damage!\n";;
                cout << "Your health is now: " << HP << "\n";
            }
            if (hitg < Player1.AC){cout << "The goblin's attack misses\n";}
            
            if (goblin1.hp < 0){
                cout << "You defeat the goblin!\n";
                break;
            }
            if (HP < 0){
                cout << "You have died.\n";
                break;
            }
            
        }else{
            if(flag == 0){
                hitg = rand() % 20;
                if (hitg == 20){
                    damage = goblin1.maxhit;
                    HP = HP - damage;
                    cout << "The goblin hits a critical strike!\n";
                    cout << "Your health is now: " << HP << "\n";
                }
                if (hitg == 1){
                    damage = 0;
                    cout << "The goblin fails epically!\n";
                }
                if (hitg > Player1.AC){
                    damage = rand()%6;
                    HP = HP - damage;
                    cout << "The goblin strikes you for " << damage << " damage!\n";;
                    cout << "Your health is now: " << HP << "\n";
                }
                
                if (hitg < Player1.AC){cout << "The goblin's attack misses\n";}
                
                if (goblin1.hp < 0){
                    cout << "You defeat the goblin!\n";
                    break;
                }
                if (HP < 0){
                    cout << "You have died.\n";
                    break;
                }
                
                cout << "What would you like to do?\n1) Attack \n";
                std::cin >> a;
                if (a == 1){
                    hit = rand() % 20;
                    if (hit == 20){
                        Player1.damage = Player1.maxhit;
                        goblin1.hp = goblin1.hp - Player1.damage;
                        cout << "You critical strike!\n";
                        cout << "Goblin health is now: " << goblin1.hp << "\n";
                    }
                    if (hit == 1){
                        Player1.damage = 0;
                        cout << "You fail epically!\n";
                    }
                    if (hit > goblin1.AC){
                        Player1.damage = rand()%8;
                        goblin1.hp = goblin1.hp - Player1.damage;
                        cout << "You strike the goblin for " << Player1.damage << " damage!\n";
                        cout << "Goblin health is now: " << goblin1.hp << "\n";
                    }
                    if (hit < goblin1.AC){cout << "Your attack misses\n";}
                }else{goto label;}
                
            }
        }
        
        cout << "End Turn.\n";
        
        if (goblin1.hp < 0){
            cout << "You defeat the goblin!\n";
            break;
        }
        if (HP < 0){
            cout << "You have died.\n";
            break;
        }
        
    }
    return 0;
}

