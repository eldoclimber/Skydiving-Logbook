#pragma once
#include <stdlib.h>
#include <iostream>
#include <windows.h>
//#include "Skydiving Logbook.cpp"
//#include "Menu.cpp"

using namespace std;

class Menu
{

public:
    // Variable declarations
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE); // For Text Color
    int mainMenuInvalidOption = 1;
    int mainMenuSelection = 0;

    // Class declarations
    void mainScreen(int mainMenuInvalidOption);
    void viewLog();
    int getMenuSelection();
    int setMenuValid();
    int exitApp();
};