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

	void pathGet();
};

