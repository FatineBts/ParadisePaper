#include <iostream>
#include <string>
#include "Questions.hh"

Questions::Questions(){}

Questions::Questions(int num_question, std::string enonce)
{
	_num_question = num_question;
	_enonce = enonce;
}

Questions::~Questions(){}

int Questions::get_num()
{
	return(_num_question);
}

std::string Questions::get_enonce()
{
	return(_enonce);
}
 
