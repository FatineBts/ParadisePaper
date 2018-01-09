#ifndef ContreLaMontre_hpp
#define ContreLaMontre_hpp

#include <stdio.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_events.h>
#include "SDL2_image/SDL_image.h"
#include <iostream>
#include <ctime> 
#include <cstdlib>
#include <list>
#include "Questions.hpp"
#include "Reponses.hpp"

/*
 La classe ContreLaMontre permet de: 
 - initialiser l'image de la page contre la montre dans la fonction initialisation() + d'enregistrer le chemin dans _page
 - De donner 5 questions au hasard avec la fonction choix_question() et de stocker les chemins des questions dans _PATH_choisis[50] et les réponses des questions correspondantes dans _PATH_reponses[50]
*/

class Reponses;

class ContreLaMontre
{

public:
    ContreLaMontre();
    ~ContreLaMontre();
    void initialisation(); //charge les réponses écrites de la partie contre la montre
   std::string get_page(){return _page.front();} //retourne le chemin de la page contre la montre
    int get_nombre(int i){return _nombre[i];} //va stocker les nombres aléatoires
    void choix_question(Questions question, Reponses reponse); //fonction qui va permettre de choisir 5 questions au hasard
    std::string get_PATH_choisis(int i){return _PATH_choisis[i];} // recupère les PATH choisis
    std::string get_PATH_reponses(int i){return _PATH_reponses[i];} //recupère les réponses correspondantes

private:
    std::list<std::string> _page;// PATH de la page -> conteneur STL
    std::string _PATH_choisis[50];
    std::string _PATH_reponses[50];
    int _nombre[20];
};


#endif /* ContreLaMontre_hpp */
