//
//  ContreLaMontre.hpp
//  Cpp
//
//  Created by Fatine Bentires on 04/01/2018.
//  Copyright © 2018 Fatine Bentires. All rights reserved.
//

#ifndef ContreLaMontre_hpp
#define ContreLaMontre_hpp

#include <stdio.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_events.h>
#include "SDL2_image/SDL_image.h"
#include <iostream>

/*
 Va donner le déroulement de l'affichage pour la partie solo.
 */

class ContreLaMontre
{
public:
    ContreLaMontre();
    ~ContreLaMontre();
    void initialisation(); //charge les images
    std::string page;// PATH de la page 
    std::string reponses_clm[50];
    
private:
    
};


#endif /* ContreLaMontre_hpp */
