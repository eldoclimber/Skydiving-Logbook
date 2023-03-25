#pragma once
#include <stdlib.h>
#include <iostream>
#include "Skydiving Logbook.cpp"
#include "Menu.cpp"

class Menu
{

public:
    
    void mainScreen() {};
   void viewLog() {};


};


    void Menu::mainScreen(void)
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
        if (mainMenuInvalidOption == 1) {
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

    void Menu::viewLog(void) {
        system("cls");
        cout << R"(

 *********************************************************************************************
Jump #      Date      Place        Aircraft        Altitude        Delay        Total Freefall
)";
        
    }



