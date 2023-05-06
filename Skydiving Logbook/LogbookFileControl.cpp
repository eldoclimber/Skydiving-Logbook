#include "LogbookFileControl.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

const int numVariables = 10; // Logbook entry count

// Function intended to get file location, for now it creates the logbook.txt.
void LogbookFileControl::pathGet()
{
	
	logbook.open(filename, ios::app);

}

// Check if class object has a file opened
bool LogbookFileControl::isFileOpen()
{
	bool rtnBool;
	rtnBool = logbook.is_open();
	return rtnBool;
}

// Create the logbook file
void LogbookFileControl::createFile()
{

	logbook.open(filename, ios::app);

}

// Opens logbook file and write.
// Number 6a - This function is part of the file I/O requirement. It reads text from the logbook file
string LogbookFileControl::readFile()
{
	string fileLine;
	int k = 0;
	logbook.open(filename, ios::in);

	//Check to see if the program can open a file. If not, lets the user know and creates a file
	if (logbook.is_open())
	{
		while (getline(logbook, fileLine))
		{
			fileRead[k] = fileLine;
			k++;
		}
	}
	else
	{
		cout << "Error no file open";
		printToFile();                     //Prints information to logbook for view testing
		cout << "A default logbook has been created for you in the project folder. Please select the menu option again to see the default values";
	}
	logbook.close();
	return fileLine;
}

// Creates a basic logbook entry for testing
// Number 6b - This function is part of the file I/O requirement. It writes to the logbook text file. It current uses a generated selection of text for testing purposes.
void LogbookFileControl::printToFile()
{
	logbook.open(filename);
	logbook << filePrint;
	logbook.close();
}


// Number 6c - This function is gets user input and inputs the values entered into an array.
// Function to get user input using the provided prompts and store the input in the variables array
void LogbookFileControl::getUserInput(string prompts[], string variables[]) {
	for (int i = 0; i < numVariables; ++i) {
		cout << prompts[i];
		getline(cin, variables[i]);
	}
}

// Function to write the prompts and variables to a file with the specified filename
void LogbookFileControl::writeToFile(string prompts[], string variables[], string filename) {
	ofstream outputFile(filename);
	if (outputFile.is_open()) {
		for (int i = 0; i < numVariables; ++i) {
			outputFile << variables[i] << endl;
		}
		outputFile.close();
	}
	else {
		cerr << "Unable to open file." << endl;
	}
}
