//
//  Ecran.hpp
//  Cpp
//
//  Created by Fatine Bentires on 03/01/2018.
//  Copyright © 2018 Fatine Bentires. All rights reserved.
//

#ifndef Ecran_hpp
#define Ecran_hpp

#include <stdio.h>
#include <SDL2/SDL.h>
#include <iostream>

/*
 Le but de la classe Ecran est de poser les éléments pour affichage en l'occurence la fenetre, l'image, les dimensions, le nom de la fenetre et le chemin. 
 
 */

class Ecran // donne le cadre de l'image
{
    
protected:
    SDL_Window* _win;
    SDL_Renderer* _renderer;
    SDL_Texture* _img;
    
    int _l; // longueur
    int _h; // hauteur
    
    
public:
    Ecran();
    Ecran(SDL_Window *win,SDL_Renderer *renderer,SDL_Texture *img,int l,int h,const std::string screen_name, std::string PATH);
    ~Ecran();
    
    SDL_Window* get_window(){return _win;}
    SDL_Renderer* get_renderer(){return _renderer;}
    SDL_Texture* get_img(){return _img;}
    
    const std::string _screen_name; //a mettre en protégé après
    const std::string _PATH; //chemin pour l'image - a mettre en protégé après
    
    int get_l(){return _l;}
    int get_h(){return _h;}
    
    
};





#endif /* Ecran_hpp */
