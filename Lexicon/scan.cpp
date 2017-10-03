#include "scan.h"



scan::scan(char* filename)
{
	mylex = new Lexicon();
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
		char temp = 'l';
		while (temp != EOF)
		{
			myfile.get(temp);
			mylex->readin(temp);
		}
		mylex->filter();
	}
}
