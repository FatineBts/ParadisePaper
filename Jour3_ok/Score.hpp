//
//  Score.hpp
//  Cpp
//
//  Created by Fatine Bentires on 04/01/2018.
//  Copyright © 2018 Fatine Bentires. All rights reserved.
//

/*
 Cette classe va servir à donner le score et en fonction du score de l'utilateur, une image avec un score différent sera affiché à la fin du jeu.
 
 */


#ifndef Score_hpp
#define Score_hpp

#include <stdio.h>
#include "Entrainement.hpp"
#include "ContreLaMontre.hpp"
#include "Reponses.hpp"

class Score
{

public:
    Score();
    ~Score();
    void initialisation(); 
    void resultat(Reponses reponse, Entrainement entrainement, ContreLaMontre clm,int numero_question, int mode,std::string touche); // en fonction de si la personne donne la bonne réponse ou pas
    
    int get_score(){return  _score;} // recupere le score
    
    std::string _images[50];
    
private: 
    int _score;
    int _essai; 
    
};





#endif /* Score_hpp */
