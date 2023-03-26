// Skydiving Logbook.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
#include "Menu.h"
#include "LogbookFileControl.h"




// Variables for menu control
int isValidChoice = 1;
int keepRunning = 1;

//Class Definitions
Menu menu;                      // View Controller
LogbookFileControl book;        // File Controller


int main()
{
    
    //Main program loop
    while (keepRunning >= 1) {
        menu.mainScreen(isValidChoice);
        //Check user entry for selection option
        switch (menu.getMenuSelection()) {

        case 1:            
            isValidChoice = menu.setMenuValid();    //Reset notification line
            book.printToFile();                     //Prints information to logbook for view testing
            book.pathGet();                         //Open logbook file. Function was intended to get user's "My Documents" folder. Decided to keep logbook at program location
            
            //Check if logbook.txt is created, if not then create a new file
            if (book.isFileOpen()) {
                menu.viewLog();
            }

            else {
                book.createFile();
                menu.noPreviousLog();               
            }
            break;


            //TODO: Bring user to data entry part
        case 2:
            std::cout << "Beep!\n";
            isValidChoice = menu.setMenuValid();
            break;


            // Exit appilcation
        case 3:
            keepRunning = menu.exitApp();
            break;


            // Choice isn't valid, set variable for text notification to user
        default:
            isValidChoice = 0;
            break;
        }
    }

}


