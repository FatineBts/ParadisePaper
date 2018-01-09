#include "Score.hpp"

Score::Score(){
    
    
    _score=0;
    _a_vu_reponse=false;
    
    for(int i=0; i<20; i++)
        _essai[i]=false; // on initialise tous les essais à faux

} //on met le score à 0
// on met essai à 1 donc première tentative, on met _a_vu_reponse et _a_donne_reponse à false


Score::Score(Reponses r){ _r=r;}

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

void Score::resultat(int numero_question, int mode, std::string touche, int i) // en fonction de si la personne donne la bonne réponse ou pas
{
    // fait appel à la réponse faite par l'utilisateur 
    std::string reponse_faite=_r.recuperation_reponses(numero_question,mode);
    bool verdict= get_a_vu_reponse(_a_vu_reponse); //on dit qu'il a vu la reponse
        
    if(reponse_faite==touche && verdict==false && _essai[i]==false) //si il appuie sur le bon résultat et qu'il n'a pas vu la réponse
    {
        _score= _score +1; // si il appuie sur la bonne touche on augmente son score)
        std::cout << "_score_boucle=" << _score << std::endl;
        _essai[i]=true; //on passe essai de la boucle correspondante à true après
    }

    else
        _essai[i]=true;
    
}


Score::~Score(){}



