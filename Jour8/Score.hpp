#ifndef Score_hpp
#define Score_hpp

#include <stdio.h>
#include "Entrainement.hpp"
#include "ContreLaMontre.hpp"
#include "Reponses.hpp"

/*
 La classe score permet de:
 - d'initialiser les photos des scores possibles avec initialisation() et de stocker les chemins dans _images[50];
 - de récupérer le score final stocké dans _score grâce à la fonction resultat(Reponses reponse,int numero_question, int mode,std::string touche);
 - de vérifier que si la personne a vu le score ou pas et de bloquer ou pas l'incrémentation du score en conséquence 
 - de vérifier si la personne a déjà donné répondu à la question
 
 */


class Score: Reponses
{

public:
    Score();
    Score(Reponses r);
    void mise_a_jour();
    ~Score();
    virtual void initialisation(); // seconde fonction virtuelle 
    void resultat(int numero_question,int mode,std::string touche, int i); // en fonction de si la personne donne la bonne réponse ou pas
    int get_score(){return  _score;} // recupere le score
    void update_score(int score){_score=score;}
    std::string operator()(int i){return _images[i];} // operateur de surcharge 
    bool get_a_vu_reponse(bool avu){_a_vu_reponse=avu; return _a_vu_reponse;}//on met dans la fonction si l'utilisateur a vu la reponse ou pas
    bool get_essai(int i){return _essai[i];}
    
protected:
    int _score;
    std::string _images[50];
    bool _essai[50];
    bool _a_vu_reponse;
    bool _a_donne_reponse;
    Reponses _r;
    
};





#endif /* Score_hpp */
