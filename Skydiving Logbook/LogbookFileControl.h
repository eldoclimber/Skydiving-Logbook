#pragma once
#include <iostream>
#include <fstream>
#include <string>

using namespace std;


class LogbookFileControl
{
public:

	fstream logbook;
	string filename = "logbook.txt";
	string fileRead[11];					// Array initialization for reading from logbook database file

	// Test template string
	string filePrint = "1234\nNov-15-1987\nKLMO\nKing Air\n12500\n55\n360\nSabre 3 150\n6-Way Sit Fly\nThis jump was with Alex, John, Joni, Denis, Lindsay and myself. I bailed to my back. Breakoff at 5500.";

	void pathGet();
	bool isFileOpen();
	void createFile();
	string readFile(int i);
	void printToFile();
	void closeFile();
	void getUserInput(string prompts[], string variables[]);
	void writeToFile(string prompts[], string variables[], const string filename);


};

