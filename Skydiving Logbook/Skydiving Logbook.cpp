/*

This is the student and assignment information header block.

Eliot Augusto
S01604182
May 6, 2023
Professor Hemmes
CSC 1060

Assignment Information:
This program is a capstone project designed to incorporate the following concepts into an application:

    Algorithms
    UML diagrams
    Inputs and Output (I/O)
    Variables
    Arrays
    File I/O
    Iteration (loops)
    Interaction
    Control

This program incorporates those ideas by interacting with the user to get their input through a menu screen, and the log entry part of the program. The program then inputs the data into a text file, reads the
text file, and then displays the information read from the txt file onto the screen. Arrays are used to encapsulate string prompts to the user, and by containing the data that is input and read into the file.
Control is obtain through switch cases that use various loops to control data input and output.

*Notes*
There were several features that I wanted to add to this program, but I think I would have to approach it differently from the beginning to get the features that I want. As it stands the program compiles, runs and meets
all the requirements for the project rubric. I wanted to add the ability to cycle through logbook files, edit and delete entries. This was a bit more work than I anticipated and I expect that I would need a bit more
knowledge around file and database structure. I attempted these functions, but the more I added the more other functionality broke. I spent most of the remaining week unbreaking the project.

TODO:
* Modify the rile read function to accept parameters to return different outputs based on which 10 lines of data the user wants to see
* Modify the file structure to allow for easy parsing of the data file
* Add a delete function that only deletes that specific logbook entry
* Add an edit function that only modifies the specific logbook entry

*/


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
    //Number 7 - This is the main control loop. There are whiles, fors, ifs, and a switch case used in the main() function
    //Number 9 - This seection of code encompasses the Control portion of the requirements. It uses a switch case to decide the program path and detects for invalid entries.
    while (keepRunning >= 1) {
        menu.mainScreen(isValidChoice);
        //Check user entry for selection option
        switch (menu.getMenuSelection()) {

        case 1:            
            isValidChoice = menu.setMenuValid();    //Reset notification line
            //book.printToFile();                     //Prints information to logbook for view testing
            book.pathGet();                         //Open logbook file
            
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
            isValidChoice = menu.setMenuValid();
            menu.recordLog();
            break;


            // Exit appilcation
        case 3:
            keepRunning = menu.exitApp();
            break;
            //Delete all data for testing
        case 4:
            book.deleteData();
            break;

            //Create base data in file for testing
        case 5:
            book.printToFile();
            break;
            
            // Choice isn't valid, set variable for text notification to user
        default:
            isValidChoice = 0;
            break;
        }
    }

}


