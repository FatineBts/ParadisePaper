#include "ContreLaMontre.hh"

ContreLaMontre::ContreLaMontre(){}

ContreLaMontre::~ContreLaMontre(){}

void ContreLaMontre::initialisation() // va initialiser les pages propres à contre la montre notamment la page d'accueil
{
    _page="/Users/fatine/Desktop/images/contrelamontre.jpg";
    
}


void ContreLaMontre::choix_question(Questions question, Reponses reponse)
{
    /// Partie 1: on a nos 10 nombres aléatoires
    int tmp;
    for(int i=0; i<5; i++)
    {
        tmp=rand()%31;
        _nombre[i] = tmp; // on choisit 5 nombres aléatoires entre 0 et 31 et on les stocke dans _nombre
        
        while(tmp==10) //tant que tmp= 10 qui correpond à l'image de fin, on recherche un rand()
            _nombre[i]=rand()%31;
    }

    
   ///Partie 2: on récupère les 5 images correspondantes
    for(int i=0; i<5; i++)
    {
        _PATH_choisis[i]=question.get_question(_nombre[i]); // on met dans les PATH allant de 0 à 4 les PATH aléatoires obtenus dans la partie 1
        _PATH_reponses[i]=reponse.get_liste_rep(_nombre[i]); //on prend les réponses correspondantes aux questions
        
        std::cout << "question" << _PATH_choisis[i] << "reponse" << _PATH_reponses[i] << std::endl;
    }
    
    _PATH_choisis[5]=question.get_question(10); //le path de fin de la partie contre la montre correspond à l'image 10 tout comme pour la partie entrainement

}

