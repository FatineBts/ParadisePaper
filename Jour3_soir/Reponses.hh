#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Questions.hh"

/*
    Même principe que Questions mais cette fois avec les Réponses.
 */



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
