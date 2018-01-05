#include <iostream>
#include <string>
#include <SDL2/SDL.h>
#include <SDL2/SDL_events.h>
#include "SDL2_image/SDL_image.h"
#include "Questions.hpp"

Questions::Questions(){}



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

