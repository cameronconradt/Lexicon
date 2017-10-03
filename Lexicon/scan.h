#pragma once
#include "Lexicon.h"
#include <fstream>
class scan
{
public:
	scan(char* infilename);
	~scan();
	string tostring();
	void startscan();
protected:
	Lexicon* mylex;
	char* filename;
};

