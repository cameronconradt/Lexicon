#include <iostream>
#include "scan.h"

using namespace std;


int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		cout << "incorrect number of arguments" << endl;
		return 0;
	}
	else
	{
		ifstream myfile(argv[1]);
		if (!myfile.is_open())
		{
			cout << "Bad file name!" << endl;
			return 0;
		}
		else
		{
			scan* myscan = new scan(argv[1]);
			myscan->startscan();
			cout << myscan->tostring();
		}

	}
}