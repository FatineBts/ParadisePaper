#ifndef Questions_hpp
#define Questions_hpp

#include <iostream>
#include <string>
#include <SDL2/SDL.h>
#include <SDL2/SDL_events.h>
#include "SDL2_image/SDL_image.h"

/*
 La classe question va permettre de: 
 - charger les images dans la fonction initialisation() et d'enregistrer les chemin (PATH) en passant
 - stocker les chemins dans le tableau _question[50]
 - stocker le numéro de la question dans _num_question
 - augmenter le numéro de la question courante avec compteur_question()
 */


class Questions 
{
public: 
    Questions();
    ~Questions();
    void mise_a_jour();
    virtual void initialisation(); // va initialiser tous les PATH des images des questions -> fonction virtuelle 
    std::string get_question(int i){ return _question[i];} //retourne le PATH de la question i
    int get_num_question(){return _num_question;}
    int compteur_question(); //augmente le numéro de la question
    
protected: 
	int _num_question; //donne le numéro de la question
    std::string _question[50]; // va permettre de stocker tous les PATH


};

#endif
