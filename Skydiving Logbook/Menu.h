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
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE); // For Text Color
    int mainMenuInvalidOption = 1;
    int mainMenuSelection;

    void mainScreen(int mainMenuInvalidOption)
    {
        system("cls");
        cout << R"(

 *********************************************************************************************
 *  _____ _              _ _       _               _                 _                 _     *
 * / ____| |            | (_)     (_)             | |               | |               | |    *
 *| (___ | | ___   _  __| |___   ___ _ __   __ _  | |     ___   __ _| |__   ___   ___ | | __ *
 * \___ \| |/ / | | |/ _` | \ \ / / | '_ \ / _` | | |    / _ \ / _` | '_ \ / _ \ / _ \| |/ / *
 * ____) |   <| |_| | (_| | |\ V /| | | | | (_| | | |___| (_) | (_| | |_) | (_) | (_) |   <  *
 *|_____/|_|\_\\__, |\__,_|_| \_/ |_|_| |_|\__, | |______\___/ \__, |_.__/ \___/ \___/|_|\_\ *
 *              __/ |                       __/ |               __/ |                        *
 *             |___/                       |___/               |___/                         *
 *********************************************************************************************
         

)" << "\n";
        // Check to see if the user has input an invalid menu option, if so notify the user.
        if (mainMenuInvalidOption == 0) {
            SetConsoleTextAttribute(hConsole, 4); // 4 is the color red
            cout << "Please select a valid option" << endl;
            SetConsoleTextAttribute(hConsole, 7); // 7 is the color white

        }
        else {
            cout << "\n";

        }
        cout << "1 - View Logbook Entries\n2 - Add Log Entry\n3 - Exit\n";
        cout << "Please type a number and press enter: ";
        cin >> mainMenuSelection;

        
    }

    void viewLog() {
        system("cls");
        cout << R"(

 *********************************************************************************************
Jump #      Date      Place        Aircraft        Altitude        Delay        Total Freefall
)";
        
    }

    int getMenuSelection() {
        return mainMenuSelection;
    }

    void setMenuValid() {
        mainMenuInvalidOption = 0;
    }
    int exitApp() {
        return 0;
    }
};


