//
//  Affiche.hpp
//  Cpp
//
//  Created by Fatine Bentires on 03/01/2018.
//  Copyright © 2018 Fatine Bentires. All rights reserved.
//

#ifndef Affiche_hpp
#define Affiche_hpp

#include <stdio.h>
#include <stdio.h>
#include <SDL2/SDL.h>
#include <iostream>
#include "Ecran.hpp"

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
