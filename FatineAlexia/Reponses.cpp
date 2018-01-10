#include "Reponses.hpp"
#include "Questions.hpp"

Reponses::Reponses(){}

Reponses::Reponses(Questions question){_num_reponse=0;_question=question;} //on initialise le numéro de la réponse à 0

void Reponses::mise_a_jour(){_num_reponse=0;}


void Reponses::initialisation() //initialisation des réponses associées aux questions
{
    _liste_rep[0]="~/FatineAlexia/IMG/r1.jpg";
    _liste_rep[1]="~/FatineAlexia/IMG/r2.jpg";
    _liste_rep[2]="~/FatineAlexia/IMG/r3.jpg";
    _liste_rep[3]="~/FatineAlexia/IMG/r4.jpg";
    _liste_rep[4]="~/FatineAlexia/IMG/r5.jpg";
    _liste_rep[5]="~/FatineAlexia/IMG/r6.jpg";
    _liste_rep[6]="~/FatineAlexia/IMG/r7.jpg";
    _liste_rep[7]="~/FatineAlexia/IMG/r8.jpg";
    _liste_rep[8]="~/FatineAlexia/IMG/r9.jpg";
    _liste_rep[9]="~/FatineAlexia/IMG/r10.jpg";
    _liste_rep[11]="~/FatineAlexia/IMG/r11.jpg";
    _liste_rep[12]="~/FatineAlexia/IMG/r12.jpg";
    _liste_rep[13]="~/FatineAlexia/IMG/r13.jpg";
    _liste_rep[14]="~/FatineAlexia/IMG/r14.jpg";
    _liste_rep[15]="~/FatineAlexia/IMG/r15.jpg";
    _liste_rep[16]="~/FatineAlexia/IMG/r16.jpg";
    _liste_rep[17]="~/FatineAlexia/IMG/r17.jpg";
    _liste_rep[18]="~/FatineAlexia/IMG/r18.jpg";
    _liste_rep[19]="~/FatineAlexia/IMG/r19.jpg";
    _liste_rep[20]="~/FatineAlexia/IMG/r20.jpg";
    _liste_rep[21]="~/FatineAlexia/IMG/r21.jpg";
    _liste_rep[22]="~/FatineAlexia/IMG/r22.jpg";
    _liste_rep[23]="~/FatineAlexia/IMG/r23.jpg";
    _liste_rep[24]="~/FatineAlexia/IMG/r24.jpg";
    _liste_rep[25]="~/FatineAlexia/IMG/r25.jpg";
    _liste_rep[26]="~/FatineAlexia/IMG/r26.jpg";
    _liste_rep[27]="~/FatineAlexia/IMG/r27.jpg";
    _liste_rep[28]="~/FatineAlexia/IMG/r28.jpg";
    _liste_rep[29]="~/FatineAlexia/IMG/r29.jpg";
    _liste_rep[30]="~/FatineAlexia/IMG/r30.jpg";
    
    
}

void Reponses::initialisation_reponses_ecrites()
{
    _liste_ecrite_rep[0]="C";
    _liste_ecrite_rep[1]="B";
    _liste_ecrite_rep[2]="B";
    _liste_ecrite_rep[3]="A";
    _liste_ecrite_rep[4]="C";
    _liste_ecrite_rep[5]="B";
    _liste_ecrite_rep[6]="C";
    _liste_ecrite_rep[7]="A";
    _liste_ecrite_rep[8]="B";
    _liste_ecrite_rep[9]="A";
    _liste_ecrite_rep[11]="C";
    _liste_ecrite_rep[12]="B";
    _liste_ecrite_rep[13]="A";
    _liste_ecrite_rep[14]="A";
    _liste_ecrite_rep[15]="C";
    _liste_ecrite_rep[16]="B";
    _liste_ecrite_rep[17]="B";
    _liste_ecrite_rep[18]="C";
    _liste_ecrite_rep[19]="B";
    _liste_ecrite_rep[20]="A";
    _liste_ecrite_rep[21]="A";
    _liste_ecrite_rep[22]="C";
    _liste_ecrite_rep[23]="B";
    _liste_ecrite_rep[24]="A";
    _liste_ecrite_rep[25]="A";
    _liste_ecrite_rep[26]="B";
    _liste_ecrite_rep[27]="C";
    _liste_ecrite_rep[28]="C";
    _liste_ecrite_rep[29]="A";
    _liste_ecrite_rep[30]="A";


}



std::string Reponses::recuperation_reponses(int numero_question, int mode)
{
    std::string rep;
    

    rep=get_liste_ecrite_rep(numero_question); //récupère la réponse
    
    return(rep);
}


Reponses::~Reponses(){}
