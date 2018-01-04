//
//  Solo.hpp
//  Cpp
//
//  Created by Fatine Bentires on 03/01/2018.
//  Copyright © 2018 Fatine Bentires. All rights reserved.
//

#ifndef Solo_hpp
#define Solo_hpp

#include <stdio.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_events.h>
#include "SDL2_image/SDL_image.h"
#include <iostream>

/*
 Va donner le déroulement de l'affichage pour la partie solo.
 */

class Solo
{
public:
    Solo();
    ~Solo();
    void initialisation(); // va charger l'image 
    std::string page; // contient l'adresse de la page

private:

};


#endif /* Solo_hpp */
