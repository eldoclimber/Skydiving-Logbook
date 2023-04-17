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
// Number 6a - This function is part of the file I/O requirement. It reads text from the logbook file
string LogbookFileControl::readFile()
{
	string fileLine;
	int k = 0;
	logbook.open(filename, ios::in);

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

// Will write data to the logbook database, for now it just creates a basic logbook entry for testing
// Number 6b - This function is part of the file I/O requirement. It writes to the logbook text file. It current uses a generated selection of text for testing purposes.
void LogbookFileControl::printToFile()
{
	logbook.open(filename);
	logbook << filePrint;
	logbook.close();
}