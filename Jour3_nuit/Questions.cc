#include <iostream>
#include <string>
#include <SDL2/SDL.h>
#include <SDL2/SDL_events.h>
#include "SDL2_image/SDL_image.h"
#include "Questions.hh"

Questions::Questions(){}


int Questions::position(int num_question_base, int num_question)
{
    int position=0; // on itinialise à 0 comme si c'était la même question
    
    if(num_question<num_question_base) // si la question est inférieure on met choix à -1
        position=-1;
    else if (num_question==num_question_base) // si la question est identique, mon met choix à 0
         position=0;
    
    else
        position=1; // sinon si c'est supérieur on met à +1
    
    return position;
}


int Questions::affichage_questions(int WIDTH, int HEIGHT, std::string PATH)

{
    
    SDL_Window *win = NULL; // crée la fenetre
    SDL_Renderer *renderer = NULL;
    SDL_Texture *img = NULL; // pour l'image
    int w=WIDTH;
    int h=HEIGHT; // longueur et largeur
    
    if (SDL_Init(SDL_INIT_VIDEO) < 0) //initialisation
        return 1;
    
    win = SDL_CreateWindow("Projet Paradise Paper", 100, 100, WIDTH, HEIGHT, 0); // cree la fenetre
    renderer = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED); // cree le renderer
    
    
    img = IMG_LoadTexture(renderer,"/Users/fatine/Desktop/Cpp/Cpp/IMG/paradise.jpeg"); // charge l'image
    SDL_QueryTexture(img, NULL, NULL, &w, &h); // recuperer la longueur et largeur
    SDL_Rect texr; texr.x = 12; texr.y = HEIGHT/50; texr.w = w*3.1; texr.h = h*3; // donne les dimensions de l'image
    
    img = IMG_LoadTexture(renderer,PATH.c_str()); // charge l'image
    SDL_QueryTexture(img, NULL, NULL, &w, &h); // recuperer la longueur et largeur

    return 0;
}



void Questions::initialisation() //initialise les questions -> charge les images 
{

    question[0]="/Users/fatine/Desktop/images/a.jpg";
    question[1]="/Users/fatine/Desktop/images/b.png";
    question[2]="/Users/fatine/Desktop/images/c.png";
    question[3]="/Users/fatine/Desktop/images/4.jpg";
    question[4]="/Users/fatine/Desktop/images/5.jpg";
    question[5]="/Users/fatine/Desktop/images/6.jpg";
    question[6]="/Users/fatine/Desktop/images/7.jpg";
    question[7]="/Users/fatine/Desktop/images/8.jpg";
    question[8]="/Users/fatine/Desktop/images/9.jpg";
    question[9]="/Users/fatine/Desktop/images/10.jpg";
    question[10]="/Users/fatine/Desktop/fini/fini.jpeg"; //contient la page qui dit de cliquer sur la flèche du bas pour avoir les réponses
    
}


Questions::~Questions(){}

