// Skydiving Logbook.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>
#include "Menu.h"

Menu obj1;

// Definitions for ASCII values
#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77
#define KEY_ENTER 13
#define KEY_ESCAPE 27

using namespace std;
// Variables for menu control
int mainMenuSelection, mainMenuInvalidOption;
int keepRunning = 1;

//Class Definitions


HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE); // For Text Color


int main()
{
    //Main program loop
    while (keepRunning >= 1) {
        obj1.mainScreen();
        //Check user entry for selection option
        switch (mainMenuSelection) {

        case 1:
            cout << "So difficult!\n";
            mainMenuInvalidOption = 0; // Reset menu state
            break;

        case 2:
            cout << "Beep!\n";
            mainMenuInvalidOption = 0; // Reset menu state
            break;

        case 3:
            keepRunning = 0;
            break;

        default:
            mainMenuInvalidOption = 1;
            break;
        }
    }

}


