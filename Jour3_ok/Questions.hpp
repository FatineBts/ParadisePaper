#pragma once
#include <iostream>
#include <string>
#include <SDL2/SDL.h>
#include <SDL2/SDL_events.h>
#include "SDL2_image/SDL_image.h"

/*
 La classe question va permettre de faire défiler les questions pour l'utilisateur. Elle contiendra une fonction qui permettra le déroulement de l'affichage.
 */


class Questions 
{
public: 
	Questions();
    ~Questions();
    
    std::string question[50]; // va permettre de mettre toutes les images
    void initialisation(); // va initialiser toutes les images des questions 
    
protected: 
	int _num_question;
    

};

