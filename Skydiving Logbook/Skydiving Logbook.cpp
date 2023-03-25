// Skydiving Logbook.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>

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


HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE); // For Text Color


void menu()
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
void viewLog() {
    system("cls");
    cout << R"(

 *********************************************************************************************
Jump #      Date      Place        Aircraft        Altitude        Delay        Total Freefall
)";
}

int main()
{
    //Main program loop
    while (keepRunning >= 1) {
        menu();
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


