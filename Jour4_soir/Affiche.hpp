#ifndef Affiche_hpp
#define Affiche_hpp

#include <stdio.h>
#include <stdio.h>
#include <SDL2/SDL.h>
#include "SDL2_image/SDL_image.h"
#include <SDL2/SDL_events.h>
#include <iostream>
#include "Ecran.hpp"

/*
 Le but de la classe Affiche qui hérite d'écran est de créer les fonctions qui vont permettre l'affichage à proprement parler. 
 Ainsi la fonction Init permet d'initialiser, affichage va afficher à l'écran la page d'accueil. 
 
 */


class Affiche: public Ecran
{
    
public:
    Affiche():Ecran(){}
    
    int Init(Ecran* ecran); // va permettre d'initialiser la première page avec Solo, multi ou contre la montre
    void affichage(SDL_Renderer* renderer,SDL_Window* win,SDL_Texture* img,int WIDTH, int HEIGHT); // affiche
    void destruction(SDL_Renderer* renderer,SDL_Window* win,SDL_Texture* img);
    ~Affiche();
    
};



#endif /* Affiche_hpp */
