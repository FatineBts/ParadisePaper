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
	Questions(int num_question); // va permettre de passer d'une question à l'autre
    ~Questions();
    
    int get_num();
    int position(int num_question_base, int num_question); // va permettre d'afficher les fênetres
    int affichage_questions(int WIDTH, int HEIGHT,std::string PATH);
    std::string question[50]; // va permettre de mettre toutes les images
    void initialisation(); // va initialiser toutes les images des questions 
    
protected: 
	int _num_question;
    

};

