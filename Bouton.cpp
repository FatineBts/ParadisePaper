//
//  Bouton.cpp
//  Cpp
//
//  Created by Fatine Bentires on 02/01/2018.
//  Copyright © 2018 Fatine Bentires. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>
#include "Bouton.hpp"


Bouton::Bouton(int x, int y, int w, int h)
{
    //Initialisation des variables du bouton
    box.x = x;
    box.y = y;
    box.w = w;
    box.h = h;
    
    //Initialisation du sprite par defaut pour le bouton
    
}

void Bouton::handle_events()
{
    SDL_Event e;
    //Les coordonnees de la souris
    int x = 0, y = 0;
    
    //Si la souris a bougee
    if( e.type == SDL_MOUSEMOTION )
    {
        //Recuperation des coordonnees de la souris
        x = e.motion.x;
        y = e.motion.y;
    }
}
