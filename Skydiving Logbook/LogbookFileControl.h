#pragma once
#include <iostream>
#include <fstream>
#include <string>

using namespace std;


class LogbookFileControl
{
public:

	//Number 4 - Variables - There are more variables created in other parts of the program. But this is one area in which I am using them
	//Number 5 - The array fileRead[] is used to capture all of the logbook entries for the program.
	

    
	fstream logbook;
	string filename = "logbook.txt";
	string fileRead[10];					// Array initialization for reading from logbook database file
	string variables[10];
    string prompts[10] = {
    "Enter the jump number: ",
    "Enter the date: ",
    "Enter the Drop Zone Location: ",
    "Enter the plane used: ",
    "Enter your jump altitude: ",
    "Enter the freefall delay time: ",
    "Enter the accumulated free fall time: ",
    "Enter your equipment used on the jump: ",
    "Enter a title for the jump: ",
    "Enter a short description of the jump: ",
    };

	// Test template string
	string filePrint = "1234\nNov-15-1987\nKLMO\nKing Air\n12500\n55\n360\nSabre 3 150\n6-Way Sit Fly\nThis jump was with Alex, John, Joni, Denis, Lindsay and myself. I bailed to my back. Breakoff at 5500.";

	void pathGet();
	bool isFileOpen();
	void createFile();
	string readFile();
	void printToFile();
	void getUserInput(string prompts[], string variables[]);
	void writeToFile(string prompts[], string variables[], const string filename);


};




