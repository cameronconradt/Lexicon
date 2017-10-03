#include "scan.h"



scan::scan(char* infilename)
{
	mylex = new Lexicon();
	filename = infilename;
}


scan::~scan()
{
}

string scan::tostring()
{
	return mylex->tostring();
}

void scan::startscan()
{
	ifstream myfile(filename);
	if (myfile.is_open())
	{
		char temp;
		while (!myfile.eof())
		{
			myfile.get(temp);
			mylex->readin(temp);
		}
		mylex->filter();
	}
}
