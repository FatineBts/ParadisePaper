#ifndef Questions_hpp
#define Questions_hpp

#include <iostream>
#include <string>
#include <SDL2/SDL.h>
#include <SDL2/SDL_events.h>
#include "SDL2_image/SDL_image.h"

/*
 La classe question va permettre de: 
 - de charger les images dans la fonction initialisation() et d'enregistrer les chemin (PATH) en passant
 - de stocker les chemins dans le tableau _question[50]
 -
 */


class Questions 
{
public: 
	Questions();
    ~Questions();
    void initialisation(); // va initialiser tous les PATH des images des questions
    std::string get_question(int i){ return _question[i];} //retourne le PATH de la question i
    
protected: 
	int _num_question; //donne le numéro de la question
    std::string _question[50]; // va permettre de stocker tous les PATH


};

#endif
