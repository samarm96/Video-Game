//
//  main.cpp
//  test
//
//  Created by Samar Mathur on 3/22/17.
//  Copyright © 2017 Samar Mathur. All rights reserved.
//

#include <iostream>
#include <string>
#include "functions.hpp"
#include "Player.h"

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    srand(time(NULL));

    cout << "What is your name, adventurer?\n";
    Player Player1("Samar", 2, 1);
    //cout << "Your hp is: " << Player1.getHP();
    fight();
    
	system("PAUSE"); //Added to prevent quick program exit
    
    return 0;

}
//int argc, const char * argv[]
