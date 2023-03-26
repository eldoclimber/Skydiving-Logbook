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
		getline(logbook, fileLine);
		fileRead[i] = fileLine;
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