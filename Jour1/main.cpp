//
//  main.cpp
//  Cpp
//
//  Created by Fatine Bentires on 02/01/2018.
//  Copyright © 2018 Fatine Bentires. All rights reserved.
//

#include <SDL2/SDL.h>
#include <iostream>
#include <sstream>
#include "Joueur.hh"
#include "Questions.hh"
#include "Reponses.hh"
#include <SDL2/SDL_events.h>
#include "SDL2_image/SDL_image.h"

#define IMG_PATH "/Users/fatine/Desktop/Quizz/ParadisePaper/ParadisePaper/IMG/paradise.jpeg"
#define WIDTH 950
#define HEIGHT 550

int main(int argc, char **argv)
{
    
    /*
    
    Joueur player1("SOULARUE","Loris",0);
    std::cout << player1.get_nom() << std::endl;
    std::cout << player1.get_prenom() << std::endl;
    std::cout << player1.get_score() << std::endl;
    
    
    Questions q1(1,"bonjour");
    std::cout << q1.get_num() << std::endl;
    std::cout << q1.get_enonce() << std::endl;
    
    std::cout << "OK" << std::endl;
    */
    
    

    /////////////////// 1 _ Première image, solo, multi ou contre la montre ///////////////////////////////////////////
     

     
     
     // On déclare les variables
     
     SDL_Window *win = NULL; // crée la fenetre
     SDL_Renderer *renderer = NULL;
     bool quit = false; // tant qu'on décide de ne pas quitter
     SDL_Texture *img = NULL; // pour l'image
     int w, h; // longueur et largeur
     
     if (SDL_Init(SDL_INIT_VIDEO) < 0) //initialisation
     return 1;
     
     win = SDL_CreateWindow("Projet Paradise Paper", 100, 100, WIDTH, HEIGHT, 0); // cree la fenetre
     renderer = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED); // cree le renderer
     
     
     img = IMG_LoadTexture(renderer, IMG_PATH); // charge l'image
     SDL_QueryTexture(img, NULL, NULL, &w, &h); // recuperer la longueur et largeur
     SDL_Rect texr; texr.x = 12; texr.y = HEIGHT/50; texr.w = w*3.1; texr.h = h*3; // donne les dimensions de l'image
     
     
     // boucle principale
     
     while (!quit) {
     
     // event handling
     SDL_Event e;
     SDL_WaitEvent(&e);
     
     switch (e.type)
     {
     case SDL_QUIT:
     quit = true;
     break;
     
     
     case SDL_KEYUP:
     switch (e.key.keysym.sym)
     {
     case SDLK_ESCAPE:
     break;
     }
     
      
     case SDL_MOUSEWHEEL:
             std::cout << e.wheel.x << e.wheel.y<< std::endl;
         break;
     }
         
     // clear the screen
     SDL_RenderClear(renderer);
     // copy the texture to the rendering context
     SDL_RenderCopy(renderer, img, NULL, &texr);
     // flip the backbuffer
     // this means that everything that we prepared behind the screens is actually shown
     SDL_RenderPresent(renderer);
     }
     
     
     
     // pour détruire toutes les fenetres
     SDL_DestroyTexture(img);
     SDL_DestroyRenderer(renderer);
     SDL_DestroyWindow(win);
    
    
    /////////////////////////////// En fonction du click de l'utilisateur ///////////////////////////////////////////
    
    /// A - si solo on lance la classe solo
    
    
    // en fonction de l'endroit où l'utilisateur clique

    
    /*
    SDL_Event e;
    SDL_WaitEvent(&e);
 
    switch (e.type == SDL_MOUSEMOTION) // si il clique
    {
        case x== and y==: // si les coordonnées sont celles de solo
            //on affiche blabla
            break;
            
        default:
            break;
    }
    
    
   */
    
    /// B - si multi on lance la classe multi
    
    
    
    
    /// C - si contrelamontre on lance la classe contrelamontre 
    
    return 0;
    
}
