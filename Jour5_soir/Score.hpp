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
 - de vérifier que si la personne a vu le score ou pas et de bloquer ou pas l'incrémentation du score en conséquence 
 
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
    bool get_a_vu_reponse(bool avu){_a_vu_reponse=avu; return _a_vu_reponse;}//on met dans la fonction si l'utilisateur a vu la reponse ou pas
    
private:
    int _score;
    bool _essai;
    std::string _images[50];
    bool _a_vu_reponse;
    Reponses _r;
    
};





#endif /* Score_hpp */
