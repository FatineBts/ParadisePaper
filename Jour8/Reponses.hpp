#ifndef Reponses_hpp
#define Reponses_hpp

#include <iostream>
#include <string>
#include <vector>
#include "Questions.hpp"
#include "Entrainement.hpp"
#include "ContreLaMontre.hpp"

/*
    La classe réponse va permettre de:
 
 - de charger les images dans la fonction initialisation() et d'enregistrer les chemin (PATH) en passant dans _liste_rep[50]
 - de stocker les réponses "A", "B" ou "C" dans un vecteur _liste_ecrite_rep[50] et d'initialiser ses réponses dans initialisation_reponses_ecrites(); 
 - d'associer la bonne réponse à la bonne question avec recuperation_reponses(); 
 
 */

class ContreLaMontre;

class Reponses: public Questions
{
public:
    Reponses(); 
    Reponses(Questions question);
    ~Reponses();
    
    void mise_a_jour();
    void initialisation(); //va initialiser les PATH des réponses
    void initialisation_reponses_ecrites(); //initialise les réponses écrites
    
    std::string recuperation_reponses(int numero_question, int mode); //permet de récupérer les réponses écrites (pas images) de la bonne classe (entrainement ou contre la montre)
    
    std::string operator()(int i){return _liste_rep[i];}
    std::string get_liste_ecrite_rep(int i){return _liste_ecrite_rep[i];}
    int get_num_reponse(){return _num_reponse;}
        
protected:
	Questions _question; //fait appel à la classe question
	int _num_reponse; //donne le numéro de la réponse
    std::string _liste_rep[50]; // va stocker les PATH des réponses
    std::string _liste_ecrite_rep[50]; // liste des réponses écrites

};

#endif
