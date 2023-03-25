// Skydiving Logbook.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
#include "Menu.h"

// Definitions for ASCII values
#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77
#define KEY_ENTER 13
#define KEY_ESCAPE 27

using namespace std;
// Variables for menu control
int isValidChoice = 1;
int keepRunning = 1;

//Class Definitions
Menu menu;


int main()
{
    //Main program loop
    while (keepRunning >= 1) {
        menu.mainScreen(isValidChoice);
        //Check user entry for selection option
        switch (menu.getMenuSelection()) {

        case 1:
            cout << "So difficult!\n";
            menu.setMenuValid();
            break;

        case 2:
            cout << "Beep!\n";
            menu.setMenuValid();
            break;

        case 3:
            keepRunning = menu.exitApp();
            break;

        default:
            isValidChoice = 0;
            break;
        }
    }

}


