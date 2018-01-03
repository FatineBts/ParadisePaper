#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Questions.hh"

class Reponses: public Questions
{
public: 
	//Reponses();
	Reponses(Questions q,int num_bonne_reponse, std::vector<std::string> liste_rep); 
	~Reponses();

protected: 
	Questions _question;
	int _num_bonne_reponse;
	std::vector<std::string> _liste_rep;

};

// std::vector<std::string> strVec = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};