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
#include <cstring>
#include <string>

#include "Joueur.hh"
#include "Questions.hh"
#include "Reponses.hh"
#include "Affiche.hpp"
#include "Ecran.hpp"
#include "Entrainement.hpp"
#include "ContreLaMontre.hpp"
#include "Score.hpp"

#define IMG_PATH "/Users/fatine/Desktop/Cpp/Cpp/IMG/paradise.jpeg"
#define WIDTH 950
#define HEIGHT 550

/*
 
 Ce qu'il reste à faire: 
 
 - Créer les Questions en image et les réponses 
 - Gérer les réponses obtenues au clavier pour les réponses 
 - Gérer le truc du PATH pour qu'il y ai pas de soucis
 - Voir pq les classes Ecran et Affiche marchent pas trop (constructeur par défaut)
 - Passer les trucs en privé et créer les get
 
 */


int quizz ()

{
    // Données: fenetre, renderer et image
   /*
    SDL_Window *win=NULL;
    SDL_Renderer *renderer=NULL;
    SDL_Texture *img=NULL;
    
    
    Ecran ecran; //On créé l'écran
    Ecran(win,renderer,img,550,950,"Paradise Paper","/Users/fatine/Desktop/a.jpg");
    
    Affiche premiere_image; //création de la classe affiche
    premiere_image.Init(&ecran); //affiche la premiere image
    
    */
    
    /* Pour l'image de départ*/

     
    bool quit = false; // tant qu'on décide de ne pas quitter
     
    SDL_Window *win = NULL; // crée la fenetre
    SDL_Renderer *renderer = NULL;
    SDL_Texture *img = NULL; // pour l'image
     
     
    int w, h; // longueur et largeur
    
    if (SDL_Init(SDL_INIT_VIDEO) < 0) //initialisation
        return 1;
    
    win = SDL_CreateWindow("Projet Paradise Paper", 100, 100, WIDTH, HEIGHT, 0); // cree la fenetre
    renderer = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED); // cree le renderer
    
    
    img = IMG_LoadTexture(renderer, IMG_PATH); // charge l'image
    
    SDL_QueryTexture(img, NULL, NULL, &w, &h); // recuperer la longueur et largeur
    SDL_Rect texr; texr.x = 12; texr.y = HEIGHT/50; texr.w = w*1.2; texr.h = h*1.2; // donne les dimensions de l'image

    
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    
    
    Entrainement partie_entrainement; // on crée la partie d'entrainement
    partie_entrainement.initialisation(); // on récupère la page
    
    ContreLaMontre partie_contrelamontre; //on recupere la partie contre la montre
    partie_contrelamontre.initialisation(); // on charge la page
    
    Questions questions_entrainement; // on crée une classe Questions pour la partie solo
    questions_entrainement.initialisation(); // on charge toutes les questions d'un coup
    
    Reponses reponses_entrainement; // on créer une classe Reponses pour la partie contre la montre 
    reponses_entrainement.initialisation(); //on charge la photo avec toutes les réponses
    
    Score score; // va servir au score
    score.initialisation(); // on charge toutes les images du score
    
    int i=0; // compteur pour la fleche droite
    int etat_courant=0; //va nous permettre de dire si la personne a choisi l'entrainement ou contre la montre
    
    // boucle principale
    
    while (!quit)
        
    {
        
        // event handling
        SDL_Event e;
        SDL_WaitEvent(&e); // gestion des évenements
        
        
        switch (e.type)
        {
            case SDL_QUIT:
                quit = true;
                break;
                
            case SDL_KEYDOWN:
                switch (e.key.keysym.sym)
            {
                case SDLK_ESCAPE: /* Appui sur la touche Echap, on arrête le programme */
                    quit= true;
                    break;
                    
                case SDLK_1: // si il appuie sur 1 -> on fait du solo
                    
                    img = IMG_LoadTexture(renderer,partie_entrainement.page.c_str()); // charge l'image de la partie solo
                    SDL_QueryTexture(img, NULL, NULL, &w, &h);
                    etat_courant=1; //on passe état courant à 1
                    break;
                    
                case SDLK_2: // si il appuie sur 2 -> on fait du contre la montre
                    std::cout << "2" << std::endl;
                    img = IMG_LoadTexture(renderer,partie_contrelamontre.page.c_str()); // charge l'image de la partie contre la montre
                    SDL_QueryTexture(img, NULL, NULL, &w, &h);
                    etat_courant=2; //on passe à 2 donc on sait que l'utilisateur a choisi contre la montre
                    break;
                
                case SDLK_a: // si il repond A au QCM
                    std::cout << "A" << std::endl;
                    
                    if(etat_courant==1) //si on est en mode entrainement
                    {
                       score.resultat(reponses_entrainement,partie_entrainement,partie_contrelamontre,i-1,1,"A"); //le numéro de la question correspond à l'itérateur i
                        //std::cout << score.get_score() << std::endl;
                    }
                    
                    else if(etat_courant==2) // si on est en contre la montre
                    {
                       
                    }

                    break;
                
                case SDLK_b: // si il repond B au QCM
                    std::cout << "B" << std::endl;
                    
                    if(etat_courant==1) //si on est en mode entrainement
                    {
                        score.resultat(reponses_entrainement,partie_entrainement,partie_contrelamontre,i-1,1,"B"); //le numéro de la question correspond à l'itérateur i-1 car on a itéré i dès qu'on est passé à l'image
                        
                    }
                    
                    else if(etat_courant==2) // si on est en contre la montre
                    {
                        
                    }

                    break;
                    
            
                case SDLK_c: // si il repond C au QCM
                    std::cout << "C" << std::endl;
                    
                    if(etat_courant==1) //si on est en mode entrainement
                    {
                        score.resultat(reponses_entrainement,partie_entrainement,partie_contrelamontre,i-1,1,"C"); //le numéro de la question correspond à l'itérateur i-1 car on a itéré i dès qu'on est passé à l'image
                        
                    }
                    
                    else if(etat_courant==2) // si on est en contre la montre
                    {
                        
                    }
                    
                    
                    break;
                    
                case SDLK_RIGHT: // si on appuie sur la flèche de droite, on passe à la question suivante
                    
                    if(etat_courant==1) //si on est en mode entrainement
                    {
                        img = IMG_LoadTexture(renderer,questions_entrainement.question[i].c_str()); // charge l'image
                        i+=1;
                        SDL_QueryTexture(img, NULL, NULL, &w, &h); // recuperer la longueur et largeur
                        
                    }
                    
                    else if(etat_courant==2) // si on est en contre la montre
                    {
                        std::cout <<"etat2 droite" << std::endl;
                        
                    }
                    break;
                    
                    
                case SDLK_UP: // si on appuie sur la fèche du haut, on regarde les réponses
                    
                    if(etat_courant==1) //si on est en mode entrainement
                    {
                        img = IMG_LoadTexture(renderer,reponses_entrainement._liste_rep[i].c_str()); // on regarde la réponse de l'image correspondante i
                        SDL_QueryTexture(img, NULL, NULL, &w, &h); // recuperer la longueur et largeur
                    }
                    
                    else if(etat_courant==2) // si on est en contre la montre
                    {
                        std::cout <<"etat2 gauche" << std::endl;
                        
                    }
                    
                   break;
                    
                case SDLK_DOWN: //pour voir son score
                    if(i==11 && etat_courant==1) // si on est arrivés à la fin et qu'on est en mode entrainement
                    {
                        img = IMG_LoadTexture(renderer,score._images[score.get_score()].c_str());
                        // on recupère la photo du score correpondant
                        SDL_QueryTexture(img, NULL, NULL, &w, &h); // recuperer la longueur et largeur
                    
                    }
                    
                    if(i==10 && etat_courant==2) // si on est arrivés à la fin et qu'on est en mode contre la montre
                    {
                        
                    }
                    
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
    quizz();
    //quizz1();
    return 0;
    
}
