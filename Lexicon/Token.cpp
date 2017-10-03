#include "Token.h"



Token::Token(string intype, string intext, int inputline)
{
	type = intype;
	text = intext;
	line = inputline;
}


Token::~Token()
{
}
string Token::gettype()
{
	return type;
}
string Token::gettext()
{
	return text;
}
string Token::getline()
{
	stringstream ss;
	ss << line;
	string temp;
	ss >> temp;
	return temp;
}
