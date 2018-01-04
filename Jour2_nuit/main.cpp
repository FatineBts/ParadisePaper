//
//  main.cpp
//  Cpp
//
//  Created by Fatine Bentires on 02/01/2018.
//  Copyright © 2018 Fatine Bentires. All rights reserved.
//

#include <SDL2/SDL.h>
#include <SDL2/SDL_events.h>
#include "SDL2_image/SDL_image.h"
#include <iostream>
#include <sstream>

#include "Joueur.hh"
#include "Questions.hh"
#include "Reponses.hh"
#include "Affiche.hpp"
#include "Ecran.hpp"

#define IMG_PATH "/Users/fatine/Desktop/Cpp/Cpp/IMG/paradise.jpeg"
#define WIDTH 950
#define HEIGHT 550

int quizz ()

{
    /*SDL_Window *win1=NULL;
    SDL_Renderer *renderer1=NULL;
    SDL_Texture *img1=NULL;
    
    Ecran ecran; //a initialiser avec la bonne image
    Ecran(win1,renderer1,img1,550,950,"Paradise Paper","/Users/fatine/Desktop/a.jpg");
    Affiche solo;
    solo.Init(&ecran); // on crée la page de joueur solo

    
    Ecran ecran2; // a initialiser
    Affiche contrelamontre;
    contrelamontre.Init(&ecran2); //on cree la page contre la montre
    */
    
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
    
    while (!quit)
        
    {
        
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
                
            case SDL_KEYDOWN:
                switch (e.key.keysym.sym)
            {
                case SDLK_ESCAPE: /* Appui sur la touche Echap, on arrête le programme */
                    quit= true;
                    break;
                    
                case SDLK_1: // si il appuie sur 1 -> on fait du solo
                    std::cout << "1" << std::endl;
                    //solo.Init(&ecran);
                    //puis une fonction qui passe d'une question à une autre
                    break;
                    
                case SDLK_2: // si il appuie sur 2 -> on fait du contre la montre
                    std::cout << "2" << std::endl;
                    //multi.Init(&ecran2);
                    break;
                    
                case SDLK_RIGHT: // si on appuie sur la flèche de droite, on passe à la question suivante
                    std::cout << "droite" << std::endl;
                    //std::cout <<ecran._PATH.c_str() << std::endl;
                    img = IMG_LoadTexture(renderer,"/Users/fatine/Desktop/a.jpg"); // charge l'image
                    SDL_QueryTexture(img, NULL, NULL, &w, &h); // recuperer la longueur et largeur
                    break;
                    
                case SDLK_LEFT: // si on appuie sur la flèche de gauche, on passe à la question précédente
                    std::cout << "gauche" << std::endl;
                    img = IMG_LoadTexture(renderer,"/Users/fatine/Desktop/Cpp/Cpp/IMG/paradise.jpeg"); // charge l'image
                    SDL_QueryTexture(img, NULL, NULL, &w, &h); // recuperer la longueur et largeur
                    break;
                    
            }
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
    
    return 0;
}


int quizz1()
{

    Ecran screen; //appel de fonction écran
    SDL_Window *win=NULL;
    SDL_Renderer *renderer=NULL;
    SDL_Texture *img=NULL;
    
    Ecran(win,renderer,img,550,950,"Paradise Paper",IMG_PATH);
    
    Affiche premiere_page; //appel de fonction affiche
    
    premiere_page.Init(&screen); // supposé afficher la première page avec solo multijoueur etc

    
    SDL_Window *win1=NULL;
    SDL_Renderer *renderer1=NULL;
    SDL_Texture *img1=NULL;
    
    Ecran ecran; //a initialiser avec la bonne image
    Ecran(win1,renderer1,img1,550,950,"Paradise Paper","/Users/fatine/Desktop/a.jpg");
    Affiche solo;
    solo.Init(&ecran); // on crée la page de joueur solo
    
    
    int w=ecran.get_l();
    int h=ecran.get_h();
    
    Ecran ecran2; // a initialiser
    Affiche contrelamontre;
    contrelamontre.Init(&ecran2); //on cree la page contre la montre

    
    Questions questions;

    bool quit = false; // tant qu'on décide de ne pas quitter

    
    // boucle principale
    
    while (!quit)
        
    {
        
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
                
            case SDL_KEYDOWN:
                switch (e.key.keysym.sym)
            {
                case SDLK_ESCAPE: /* Appui sur la touche Echap, on arrête le programme */
                    quit= true;
                    break;
                    
                case SDLK_1: // si il appuie sur 1 -> on fait du solo
                    std::cout << "1" << std::endl;
                    solo.Init(&ecran);
                    //puis une fonction qui passe d'une question à une autre
                    break;
                    
                case SDLK_2: // si il appuie sur 2 -> on fait du contre la montre
                    std::cout << "2" << std::endl;
                    contrelamontre.Init(&ecran2);
                    break;
                    
                case SDLK_RIGHT: // si on appuie sur la flèche de droite, on passe à la question suivante
                    std::cout << "droite" << std::endl;
                    //std::cout <<ecran._PATH.c_str() << std::endl;
                    img = IMG_LoadTexture(renderer,"/Users/fatine/Desktop/a.jpg"); // charge l'image
                    SDL_QueryTexture(img, NULL, NULL, &w, &h); // recuperer la longueur et largeur
                    break;
                    
                case SDLK_LEFT: // si on appuie sur la flèche de gauche, on passe à la question précédente
                    std::cout << "gauche" << std::endl;
                    break;
                    
            }
                break;
                
        }
        
        premiere_page.affichage(ecran.get_renderer(),ecran.get_window(),ecran.get_img(),ecran.get_l(),ecran.get_h());
        
    }
    
    
    premiere_page.destruction(ecran.get_renderer(),ecran.get_window(),ecran.get_img());

    
    
    return 0;

}




int main(int argc, char **argv)
{
    
    std::cout <<"toto"<< std::endl;
    quizz();
    //quizz1();
    return 0;
    
}
