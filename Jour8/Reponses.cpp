#include "Reponses.hpp"
#include "Questions.hpp"

Reponses::Reponses(){}

Reponses::Reponses(Questions question){_num_reponse=0;_question=question;} //on initialise le numéro de la réponse à 0

void Reponses::mise_a_jour(){_num_reponse=0;}


void Reponses::initialisation() //initialisation des réponses associées aux questions
{
    _liste_rep[0]="/Users/fatine/Desktop/Cpp/Cpp/IMG/r1.jpg";
    _liste_rep[1]="/Users/fatine/Desktop/Cpp/Cpp/IMG/r2.jpg";
    _liste_rep[2]="/Users/fatine/Desktop/Cpp/Cpp/IMG/r3.jpg";
    _liste_rep[3]="/Users/fatine/Desktop/Cpp/Cpp/IMG/r4.jpg";
    _liste_rep[4]="/Users/fatine/Desktop/Cpp/Cpp/IMG/r5.jpg";
    _liste_rep[5]="/Users/fatine/Desktop/Cpp/Cpp/IMG/r6.jpg";
    _liste_rep[6]="/Users/fatine/Desktop/Cpp/Cpp/IMG/r7.jpg";
    _liste_rep[7]="/Users/fatine/Desktop/Cpp/Cpp/IMG/r8.jpg";
    _liste_rep[8]="/Users/fatine/Desktop/Cpp/Cpp/IMG/r9.jpg";
    _liste_rep[9]="/Users/fatine/Desktop/Cpp/Cpp/IMG/r10.jpg";
    _liste_rep[11]="/Users/fatine/Desktop/Cpp/Cpp/IMG/r11.jpg";
    _liste_rep[12]="/Users/fatine/Desktop/Cpp/Cpp/IMG/r12.jpg";
    _liste_rep[13]="/Users/fatine/Desktop/Cpp/Cpp/IMG/r13.jpg";
    _liste_rep[14]="/Users/fatine/Desktop/Cpp/Cpp/IMG/r14.jpg";
    _liste_rep[15]="/Users/fatine/Desktop/Cpp/Cpp/IMG/r15.jpg";
    _liste_rep[16]="/Users/fatine/Desktop/Cpp/Cpp/IMG/r16.jpg";
    _liste_rep[17]="/Users/fatine/Desktop/Cpp/Cpp/IMG/r17.jpg";
    _liste_rep[18]="/Users/fatine/Desktop/Cpp/Cpp/IMG/r18.jpg";
    _liste_rep[19]="/Users/fatine/Desktop/Cpp/Cpp/IMG/r19.jpg";
    _liste_rep[20]="/Users/fatine/Desktop/Cpp/Cpp/IMG/r20.jpg";
    _liste_rep[21]="/Users/fatine/Desktop/Cpp/Cpp/IMG/r21.jpg";
    _liste_rep[22]="/Users/fatine/Desktop/Cpp/Cpp/IMG/r22.jpg";
    _liste_rep[23]="/Users/fatine/Desktop/Cpp/Cpp/IMG/r23.jpg";
    _liste_rep[24]="/Users/fatine/Desktop/Cpp/Cpp/IMG/r24.jpg";
    _liste_rep[25]="/Users/fatine/Desktop/Cpp/Cpp/IMG/r25.jpg";
    _liste_rep[26]="/Users/fatine/Desktop/Cpp/Cpp/IMG/r26.jpg";
    _liste_rep[27]="/Users/fatine/Desktop/Cpp/Cpp/IMG/r27.jpg";
    _liste_rep[28]="/Users/fatine/Desktop/Cpp/Cpp/IMG/r28.jpg";
    _liste_rep[29]="/Users/fatine/Desktop/Cpp/Cpp/IMG/r29.jpg";
    _liste_rep[30]="/Users/fatine/Desktop/Cpp/Cpp/IMG/r30.jpg";
    
    
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
