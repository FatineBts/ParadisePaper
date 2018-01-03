//
//  Bouton.hpp
//  Cpp
//
//  Created by Fatine Bentires on 02/01/2018.
//  Copyright © 2018 Fatine Bentires. All rights reserved.
//

#pragma once
#include <stdio.h>
#include <iostream>
#include <SDL2/SDL.h>
#include <string>
#include <vector>

class Bouton
{
    public:
        Bouton(int x, int y, int w, int h);
        ~Bouton();
    
        void handle_events(); // recuperation des evenements, mise en place des boutons
        void show(); //affiche le bouton à l'écran
    
    private:
        SDL_Rect box; // attributs
        SDL_Rect* clip; //parties affichées
        std::vector<std::string> _liste;
    
};


















