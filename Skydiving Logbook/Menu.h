#pragma once
#include <stdlib.h>
#include <iostream>
#include <windows.h>
#include <conio.h>
#include <string>

/* Section created to capture keypresses for advanced GUI application. Probably will delete

// Definitions for ASCII values
#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77
#define KEY_ENTER 13
#define KEY_ESCAPE 27
*/

using namespace std;

class Menu
{

public:
    // Variable declarations
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE); // For Text Color
    int mainMenuInvalidOption = 1;
    int mainMenuSelection = 0;
    string menuOptions[10] = { "Jump #", "Date", "Place", "Aircraft", "Altitude", "Delay", "Total Freefall", "Equipment", "Maneuver", "Description" };
    int linesRead = 0;

    // Class declarations
    void mainScreen(int mainMenuInvalidOption);
    void viewLog();
    int getMenuSelection();
    int setMenuValid();
    int exitApp();
    void noPreviousLog();
};