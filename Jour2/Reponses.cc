#include <iostream>
#include <string>
#include <vector>
#include "Reponses.hh"
#include "Questions.hh"

Reponses::Reponses(Questions q,int num_bonne_reponse, std::vector<std::string> liste_rep)
{
	_question = q;
	_num_bonne_reponse = num_bonne_reponse;
	_liste_rep = liste_rep;
}

Reponses::~Reponses(){}
