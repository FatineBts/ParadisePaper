#include <iostream>
#include <string>
#include <vector>
#include "Reponses.hh"
#include "Questions.hh"


Reponses::Reponses(){}

Reponses::Reponses(Questions q,int num_bonne_reponse)
{
	_question = q;
	_num_bonne_reponse = num_bonne_reponse;
}


void Reponses::initialisation() //initialisation des réponses associées aux questions
{
    _liste_rep[0]="/Users/fatine/Desktop/images/reponses.jpg";
    _liste_rep[1]="/Users/fatine/Desktop/images/reponses.jpg";
    _liste_rep[2]="/Users/fatine/Desktop/images/reponses.jpg";
    _liste_rep[3]="/Users/fatine/Desktop/images/reponses.jpg";
    _liste_rep[4]="/Users/fatine/Desktop/images/reponses.jpg";
    _liste_rep[5]="/Users/fatine/Desktop/images/reponses.jpg";
    _liste_rep[6]="/Users/fatine/Desktop/images/reponses.jpg";
    _liste_rep[7]="/Users/fatine/Desktop/images/reponses.jpg";
    _liste_rep[8]="/Users/fatine/Desktop/images/reponses.jpg";
    _liste_rep[9]="/Users/fatine/Desktop/images/reponses.jpg";
    _liste_rep[10]="/Users/fatine/Desktop/images/reponses.jpg";

}

std::string Reponses::recuperation_reponses(Entrainement entrainement, ContreLaMontre clm,int numero_question, int mode)
{
    std::string rep;
    
    
    //si c'est le mode 1 entrainement alors on récupère les réponses de l'entrainement
    if(mode==1)
    {
        rep=entrainement.reponses_entrainement[numero_question];
    }
    
    else if(mode==2)
    {
        rep=clm.reponses_clm[numero_question];
    
    }
    
    
    //si c'est le mode 2 alors contre la montre
    
    return(rep);
}



Reponses::~Reponses(){}
