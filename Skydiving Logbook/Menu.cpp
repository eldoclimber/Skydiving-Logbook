#include "Menu.h"
#include <iomanip>
#include "LogbookFileControl.h"
#include <string>

using namespace std;

// Displays initial main menu
void Menu::mainScreen(int mainMenuInvalidOption)
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
    //Number 3 - Inputs and Outputs. There will be a more detailed input section that is being built
    //Number 8 - This is part of the user interaction. There will be a larger section on this built later
    if (mainMenuInvalidOption == 0) {
        SetConsoleTextAttribute(hConsole, 4); // 4 is the color red
        cout << "Please select a valid option" << endl;
        SetConsoleTextAttribute(hConsole, 7); // 7 is the color white
    }
    else {
        cout << "\n";
    }
    cout << "1 - View Logbook Entries\n2 - Add Log Entry\n3 - Exit\n";
    cout << "Please type a number of the menu entry and press enter: ";
    cin >> mainMenuSelection;


}

void Menu::viewLog()
{
    LogbookFileControl obj1;
    //int i;
    int j = 0;

    // Copying standard cout format
    ios init(NULL);
    init.copyfmt(cout);

    // Clear screen, write each data type and corresponding part from the logbook file
    system("cls");

    

    for (string i : menuOptions)
    {
        
        obj1.readFile();
        cout << setw(15) << right << i << ":  " << left << obj1.fileRead[j] << "\n";
        j++;
        //Checks to see if the array has finished outputing file information
        // Wait for user input and return to main menu.
        if (j == 10)
        {
            cout.copyfmt(init);     // Returning cout format to standard
            cout << "\n\n\nPress any key to return to the main menu" << endl;
            _getch();
        }

    }

    
    
}

// Returns menu selection
int Menu::getMenuSelection() 
{
    return mainMenuSelection;
}

//Provides user notification for invalid menu entry.
int Menu::setMenuValid() 
{
    mainMenuInvalidOption = 1;
    return mainMenuInvalidOption;
}
// Exit app
int Menu::exitApp() 
{
    return 0;
}

// Checks if user has a previous logbook.txt document in the project folder.
void Menu::noPreviousLog()
{
    system("cls");
    cout << "No previous logbook has been detected. A new logbook has been created.\n\nPress any key to continue . . .";
    _getch();
    viewLog();
}

void Menu::recordLog()
{
    // Copy standard cout formatting and clear screen
    ios init(NULL);
    init.copyfmt(cout);
    system("cls");
    LogbookFileControl obj1;

    cout << "Please follow the prompts to enter a logbook entry: \n";
    obj1.getUserInput(obj1.prompts, obj1.variables);

}