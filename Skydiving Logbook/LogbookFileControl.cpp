#include "LogbookFileControl.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

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

// Opens logbook file and write. Not working as intended at the moment.
string LogbookFileControl::readFile(int i)
{
	string fileLine;
	logbook.open(filename, ios::in);

	if (logbook.is_open() && i<11)
	{
		while (k<=10 && getline( logbook, fileLine))
		{
			fileRead[k] = fileLine;
			k++;
		}
	}
	else
	{
		cout << "Error no file open";
	}
	
	return fileLine;
}

// Will write data to the logbook database, for now it just creates a basic logbook entry for testing
void LogbookFileControl::printToFile()
{
	logbook.open(filename);
	logbook << filePrint;
	logbook.close();
}


// Number 6c - This function is gets user input and inputs the values entered into an array.
// Function to get user input using the provided prompts and store the input in the variables array
void LogbookFileControl::getUserInput(string prompts[], string variables[]) {
	cin.ignore();
	for (int i = 0; i < numVariables; ++i) {
		
		cout << prompts[i];
		getline(cin, variables[i]);
	}
}

// Function to write the prompts and variables to a file with the specified filename
void LogbookFileControl::writeToFile(string prompts[], string variables[], string filename) {
	ofstream outputFile(filename, ios_base::app);
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

void LogbookFileControl::closeFile()
{
	logbook.close();
}