#ifndef Solo_hpp
#define Solo_hpp

#include <stdio.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_events.h>
#include "SDL2_image/SDL_image.h"
#include <iostream>
#include "Reponses.hpp"

/*
 La classe entrainement est composée de:
    - d'une fonction intialisation(); qui initialise le chargement de l'image et qui enregistre le PATH dans _page
*/

class Entrainement
{
public:
    Entrainement();
    ~Entrainement();
    void initialisation(); // initialise le chemin de l'image pour entrainement 
    std::string get_page(){return _page;}
    
private:
    std::string _page; // contient le chemin PATH de la page
    
};


#endif /* Solo_hpp */
