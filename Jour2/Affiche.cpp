//
//  Affiche.cpp
//  Cpp
//
//  Created by Fatine Bentires on 03/01/2018.
//  Copyright © 2018 Fatine Bentires. All rights reserved.
//

#include "Affiche.hpp"
#include <SDL2/SDL.h>
#include "SDL2_image/SDL_image.h"
#include <SDL2/SDL_events.h>
#define IMG_PATH "/Users/fatine/Desktop/Cpp/Cpp/IMG/paradise.jpeg"

int Affiche::Init(Ecran* ecran)
{

    int WIDTH=ecran->get_l();
    
    int HEIGHT=ecran->get_h();
    SDL_Window* win=ecran->get_window();
    SDL_Renderer* renderer=ecran->get_renderer();
    SDL_Texture* img=ecran->get_img();
    
    if (SDL_Init(SDL_INIT_VIDEO) < 0) //initialisation
        return 1;
    
    win = SDL_CreateWindow(ecran->_screen_name.c_str(), 100, 100, WIDTH, HEIGHT, 0); // cree la fenetre - c.str() pour récupérer le str
    renderer = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED); // cree le renderer

    
    img = IMG_LoadTexture(renderer,ecran->_PATH.c_str()); // charge l'image
    SDL_QueryTexture(img, NULL, NULL,&WIDTH, &HEIGHT); // recuperer la longueur et largeur


    return 0;
}

void Affiche::affichage(SDL_Renderer* renderer,SDL_Window* win,SDL_Texture* img,int WIDTH, int HEIGHT)
{
    SDL_Rect texr; texr.x = 12; texr.y = HEIGHT/50; texr.w = WIDTH*3.1; texr.h = HEIGHT*3; // donne les dimensions de l'image
    // clear the screen
    SDL_RenderClear(renderer);
    // copy the texture to the rendering context
    SDL_RenderCopy(renderer, img, NULL, &texr);
    // flip the backbuffer
    // this means that everything that we prepared behind the screens is actually shown
    SDL_RenderPresent(renderer);

}

void Affiche::destruction(SDL_Renderer* renderer,SDL_Window* win,SDL_Texture* img)
{
    // pour détruire toutes les fenetres, normalement devraient être dans le déstructeur on verra ça après
    SDL_DestroyTexture(img);
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(win);

}


Affiche::~Affiche(){}
