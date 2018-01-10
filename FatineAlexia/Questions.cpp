#include "Questions.hpp"

Questions::Questions(){_num_question=0;} // on initialise la question à 0


void Questions::mise_a_jour(){_num_question=0;}


void Questions::initialisation() //initialise les questions -> charge les images 
{

    _question[0]="/~/FatineAlexia/IMG/q1.jpg";
    _question[1]="~/FatineAlexia/IMG/q2.jpg";
    _question[2]="~/FatineAlexia/IMG/q3.jpg";
    _question[3]="~/FatineAlexia/IMG/q4.jpg";
    _question[4]="~/FatineAlexia/IMG/q5.jpg";
    _question[5]="~/FatineAlexia/IMG/q6.jpg";
    _question[6]="~/FatineAlexia/IMG/q7.jpg";
    _question[7]="~/FatineAlexia/IMG/q8.jpg";
    _question[8]="~/FatineAlexia/IMG/q9.jpg";
    _question[9]="~/FatineAlexia/IMG/q10.jpg";
    _question[10]="~/FatineAlexia/IMG/fini.jpeg"; //contient la page qui dit de cliquer sur la flèche du bas pour avoir les réponses
    _question[11]="~/FatineAlexia/IMG/q11.jpg";
    _question[12]="~/FatineAlexia/IMG/q12.jpg";
    _question[13]="~/FatineAlexia/IMG/q13.jpg";
    _question[14]="~/FatineAlexia/IMG/q14.jpg";
    _question[15]="~/FatineAlexia/IMG/q15.jpg";
    _question[16]="~/FatineAlexia/IMG/q16.jpg";
    _question[17]="~/FatineAlexia/IMG/q17.jpg";
    _question[18]="~/FatineAlexia/IMG/q18.jpg";
    _question[19]="~/FatineAlexia/IMG/q19.jpg";
    _question[20]="~/FatineAlexia/IMG/q20.jpg";
    _question[21]="~/FatineAlexia/IMG/q21.jpg";
    _question[22]="~/FatineAlexia/IMG/q22.jpg";
    _question[23]="~/FatineAlexia/IMG/q23.jpg";
    _question[24]="~/FatineAlexia/IMG/q24.jpg";
    _question[25]="~/FatineAlexia/IMG/q25.jpg";
    _question[26]="~/FatineAlexia/IMG/q26.jpg";
    _question[27]="~/FatineAlexia/IMG/q27.jpg";
    _question[28]="~/FatineAlexia/IMG/q28.jpg";
    _question[29]="~/FatineAlexia/IMG/q29.jpg";
    _question[30]="~/FatineAlexia/IMG/q30.jpg";

}

int Questions::compteur_question() //permet de passer d'une question à l'autre
{
    _num_question+=1; // on ajoute 1
    return(_num_question);
}


Questions::~Questions(){}

