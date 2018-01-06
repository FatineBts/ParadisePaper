#ifndef Score_hpp
#define Score_hpp

#include <stdio.h>
#include "Entrainement.hpp"
#include "ContreLaMontre.hh"
#include "Reponses.hpp"

/*
 La classe score permet de:
 - d'initialiser les photos des scores possibles avec initialisation() et de stocker les chemins dans _images[50];
 - de récupérer le score final stocké dans _score grâce à la fonction resultat(Reponses reponse,int numero_question, int mode,std::string touche);
 
 */


class Score: Reponses
{

public:
    Score();
    Score(Reponses r);
    ~Score();
    void initialisation(); 
    void resultat(int numero_question,int mode,std::string touche); // en fonction de si la personne donne la bonne réponse ou pas
    int get_score(){return  _score;} // recupere le score
    std::string get_images(int i){return _images[i];}
    
private: 
    int _score;
    bool _essai;
    std::string _images[50];
    Reponses _r;
    
};





#endif /* Score_hpp */
