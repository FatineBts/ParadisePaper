#pragma once
#include <iostream>
#include <string>
 
class Questions 
{
public: 
	//Questions();
	Questions();
	Questions(int num_question, std::string enonce); 
	int get_num();
	std::string get_enonce();
	~Questions();

protected: 
	int _num_question;
	std::string _enonce; 

};