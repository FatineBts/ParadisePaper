#ifndef Solo_hpp
#define Solo_hpp

#include <stdio.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_events.h>
#include <SDL2/SDL_image.h> //contenu dans la bibliothèque SDL2
#include <iostream>
#include <vector>
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
    std::vector<std::string> get_page() {return _page;} //pour ne pas modifier
    std::vector <std::string> _page; // contient le chemin PATH de la page, ne peut pas être modifié

private:
    
};


#endif /* Solo_hpp */
