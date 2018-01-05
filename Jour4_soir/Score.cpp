#include "Score.hpp"

Score::Score(){_score=0; _essai=1;} //on met le score à 0
//on prend essai dans la structure de la classe Score comme ça pas de pb de local ou d'effacement 

void Score::initialisation() //va contenir les chargements d'images des différents scores possibles
{
    
    _images[0]= "/Users/fatine/Desktop/scores/0.png"; //pour le score de zeros
    _images[1]= "/Users/fatine/Desktop/scores/1.png";
    _images[2]= "/Users/fatine/Desktop/scores/2.png";
    _images[3]= "/Users/fatine/Desktop/scores/3.png";
    _images[4]= "/Users/fatine/Desktop/scores/4.png";
    _images[5]= "/Users/fatine/Desktop/scores/5.png";
    _images[6]= "/Users/fatine/Desktop/scores/6.png";
    _images[7]= "/Users/fatine/Desktop/scores/7.png";
    _images[8]= "/Users/fatine/Desktop/scores/8.png";
    _images[9]= "/Users/fatine/Desktop/scores/9.png";
    _images[10]= "/Users/fatine/Desktop/scores/10.png";
    
}

void Score::resultat(Reponses reponse,int numero_question, int mode, std::string touche) // en fonction de si la personne donne la bonne réponse ou pas
{
    // fait appel à la réponse faite par l'utilisateur 
    std::string reponse_faite=reponse.recuperation_reponses(numero_question,mode);
    
    if(reponse_faite==touche && _essai==1)
    {
        _score= _score +1; // si il appuie sur la bonne touche on augmente son score)
        _essai=2; //le score ne sera augmenté que si elle a raison à la première tentative
    }

    else
        _essai=2; // on bloque les possibles erreurs de score
    
    std::cout << "i=" << numero_question << "score="<<_score << std::endl;

    
}


Score::~Score(){}



