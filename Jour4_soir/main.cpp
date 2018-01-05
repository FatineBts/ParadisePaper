#include <SDL2/SDL.h>
#include <SDL2/SDL_events.h>
#include "SDL2_image/SDL_image.h"
#include <iostream>
#include <sstream>
#include <cstring>
#include <string>

#include "Questions.hpp"
#include "Reponses.hpp"
#include "Affiche.hpp"
#include "Ecran.hpp"
#include "Entrainement.hpp"
#include "ContreLaMontre.hh"
#include "Score.hpp"

#define IMG_PATH "/Users/fatine/Desktop/Cpp/Cpp/IMG/paradise.jpeg"
#define WIDTH 935
#define HEIGHT 520

/*
 
 Ce qu'il reste à faire: 
 
 - Gérer le truc du PATH pour qu'il y ai pas de soucis
 - Voir pq les classes Ecran et Affiche marchent pas trop (constructeur par défaut)
 
 */


int quizz ()

{
    // Données: fenetre, renderer et image
  /*
    bool quit = false; // tant qu'on décide de ne pas quitter
    SDL_Window *win=NULL;
    SDL_Renderer *renderer=NULL;
    SDL_Texture *img=NULL;
    
    Ecran ecran; //On créé l'écran
    Ecran(win,renderer,img,520,935,"Paradise Paper","/Users/fatine/Desktop/Cpp/Cpp/IMG/paradise.jpeg");
    std::cout << ecran.get_l() <<std::endl;
    int w=ecran.get_l();
    int h=ecran.get_h(); // longueur et hauteur
    
    Affiche premiere_image; //création de la classe affiche
    premiere_image.Init(&ecran); //affiche la premiere image
    SDL_Rect texr; texr.x = 12; texr.y = HEIGHT/70; texr.w = w*1.2; texr.h = h*1.2; // donne les dimensions de l'image
    
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
    SDL_Rect texr; texr.x = 12; texr.y = HEIGHT/70; texr.w = w*1.2; texr.h = h*1.2; // donne les dimensions de l'image

    
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    
    /* Partie entrainement */
    
    Entrainement partie_entrainement; // on crée la partie d'entrainement
    partie_entrainement.initialisation(); // on récupère la page


    /* Partie questions */
    
    Questions questions; // on crée une classe Questions pour la partie solo
    questions.initialisation(); // on charge toutes les questions d'un coup
    
    /* Partie réponses */
    
    Reponses reponses; // on créer une classe Reponses pour la partie contre la montre
    reponses.initialisation(); //on charge la photo avec toutes les réponses

    /* Partie contre la montre */
    
    ContreLaMontre partie_contrelamontre; //on recupere la partie contre la montre
    partie_contrelamontre.initialisation(); // on charge la page
    
    partie_contrelamontre.choix_question(questions,reponses); //on utilise la fonction qui donne les questions de manière aléatoire
   
    /* Pour le score */
    
    Score score; // va servir au score
    score.initialisation(); // on charge toutes les images du score
    
    
    /* Données pour compter les itérations et pour l'état courant */
    
    int i=0; // compteur pour la fleche droite pour entrainement
    int j=0; //compteur fleche droite pour contre la montre
    int etat_courant=0; //va nous permettre de dire si la personne a choisi l'entrainement ou contre la montre
    
    
    /* boucle principale */
    
    while (!quit) //tant qu'on quitte pas le jeu
        
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
                    
                    img = IMG_LoadTexture(renderer,partie_entrainement.get_page().c_str()); // charge l'image de la partie d'entrainement
                    SDL_QueryTexture(img, NULL, NULL, &w, &h);
                    etat_courant=1; //on passe état courant à 1
                    break;
                    
                case SDLK_2: // si il appuie sur 2 -> on fait du contre la montre
        
                    img = IMG_LoadTexture(renderer,partie_contrelamontre.get_page().c_str()); // charge l'image de la partie contre la montre
                    SDL_QueryTexture(img, NULL, NULL, &w, &h);
                    etat_courant=2; //on passe à 2 donc on sait que l'utilisateur a choisi contre la montre
                    break;
                
                case SDLK_a: // si il repond A au QCM
                    
                    if(etat_courant==1) //si on est en mode entrainement
                       score.resultat(reponses,i-1,1,"A"); //le numéro de la question correspond à l'itérateur i
                        //std::cout << score.get_score() << std::endl;

                    
                    else if(etat_courant==2) // si on est en contre la montre
                       score.resultat(reponses,j-1,1,"A");


                    break;
                
                case SDLK_b: // si il repond B au QCM
                    
                    if(etat_courant==1) //si on est en mode entrainement
                        score.resultat(reponses,i-1,1,"B"); //le numéro de la question correspond à l'itérateur i-1 car on a itéré i dès qu'on est passé à l'image

                    
                    else if(etat_courant==2) // si on est en contre la montre
                       score.resultat(reponses,j-1,1,"B");


                    break;
                    
            
                case SDLK_c: // si il repond C au QCM
                    
                    if(etat_courant==1) //si on est en mode entrainement
                        score.resultat(reponses,i-1,1,"C"); //le numéro de la question correspond à l'itérateur i-1 car on a itéré i dès qu'on est passé à l'image
                    
                    else if(etat_courant==2) // si on est en contre la montre
                        score.resultat(reponses,j-1,1,"C");
                    
                    break;
                    
                case SDLK_RIGHT: // si on appuie sur la flèche de droite, on passe à la question suivante
                    
                    if(etat_courant==1) //si on est en mode entrainement
                    {
                        img = IMG_LoadTexture(renderer,questions.get_question(i).c_str()); // charge l'image
                        i+=1;
                        SDL_QueryTexture(img, NULL, NULL, &w, &h); // recuperer la longueur et largeur
                        
                    }
                    
                    else if(etat_courant==2) // si on est en contre la montre
                    {
                        img = IMG_LoadTexture(renderer,partie_contrelamontre.get_PATH_choisis(j).c_str()); // charge l'image
                        j+=1;
                        SDL_QueryTexture(img, NULL, NULL, &w, &h); // recuperer la longueur et largeur
                        
                    }
                    break;
                    
                    
                case SDLK_UP: // si on appuie sur la fèche du haut, on regarde les réponses
                    
                    if(etat_courant==1) //si on est en mode entrainement
                    {
                        img = IMG_LoadTexture(renderer,reponses.get_liste_rep(i-1).c_str()); // on regarde la réponse de l'image correspondante i, comme on itéré i on met i-1
                        SDL_QueryTexture(img, NULL, NULL, &w, &h); // recuperer la longueur et largeur
                    }
                    
                    else if(etat_courant==2) // si on est en contre la montre
                    {
                        img = IMG_LoadTexture(renderer,partie_contrelamontre.get_PATH_reponses(j-1).c_str()); // va donner la réponse de la question correspondante
                        SDL_QueryTexture(img, NULL, NULL, &w, &h); // recuperer la longueur et largeur
                        
                    }
                    
                   break;
                    
                case SDLK_DOWN: //pour voir son score
                    if(i==11 || j==6) // si on est arrivés à la fin (i=11) et qu'on est en mode entrainement
                    {
                        img = IMG_LoadTexture(renderer,score.get_images(score.get_score()).c_str());
                        // on recupère la photo du score correpondant
                        SDL_QueryTexture(img, NULL, NULL, &w, &h); // recuperer la longueur et largeur
                    }
                    
                    break;
                    
               }
               break;
                
        }
        
        // netoie l'écran
        SDL_RenderClear(renderer);
        // copie la texture
        SDL_RenderCopy(renderer, img, NULL, &texr);
        //montre les images
        SDL_RenderPresent(renderer);
        
    }
    
    
    return 0;
}



int main(int argc, char **argv)
{
    quizz();
    return 0;
    
}
