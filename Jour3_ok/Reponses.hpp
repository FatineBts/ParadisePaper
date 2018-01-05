#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Questions.hpp"
#include "Entrainement.hpp"
#include "ContreLaMontre.hpp"

/*
    Même principe que Questions mais cette fois avec les Réponses.
 */



class Reponses: public Questions
{
public:
    Reponses(); 
    ~Reponses();
    
    void initialisation();
    std::string _liste_rep[50]; // liste des réponses
    std::string recuperation_reponses(Entrainement entrainement, ContreLaMontre clm,int numero_question, int mode);
    std::string reponses[50];
	
protected:
	Questions _question;
	int _num_bonne_reponse;
	

};
