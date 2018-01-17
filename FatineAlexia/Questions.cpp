#include "Questions.hpp"

Questions::Questions(){_num_question=0;} // on initialise la question à 0


void Questions::mise_a_jour(){_num_question=0;}


void Questions::initialisation() //initialise les questions -> charge les images 
{

    _question[0]="/users/cao/brejon/FatineAlexia/IMG/q1.jpg";
    _question[1]="/users/cao/brejon/FatineAlexia/IMG/q2.jpg";
    _question[2]="/users/cao/brejon/FatineAlexia/IMG/q3.jpg";
    _question[3]="/users/cao/brejon/FatineAlexia/IMG/q4.jpg";
    _question[4]="/users/cao/brejon/FatineAlexia/IMG/q5.jpg";
    _question[5]="/users/cao/brejon/FatineAlexia/IMG/q6.jpg";
    _question[6]="/users/cao/brejon/FatineAlexia/IMG/q7.jpg";
    _question[7]="/users/cao/brejon/FatineAlexia/IMG/q8.jpg";
    _question[8]="/users/cao/brejon/FatineAlexia/IMG/q9.jpg";
    _question[9]="/users/cao/brejon/FatineAlexia/IMG/q10.jpg";
    _question[10]="/users/cao/brejon/FatineAlexia/IMG/fini.jpeg"; //contient la page qui dit de cliquer sur la flèche du bas pour avoir les réponses
    _question[11]="/users/cao/brejon/FatineAlexia/IMG/q11.jpg";
    _question[12]="/users/cao/brejon/FatineAlexia/IMG/q12.jpg";
    _question[13]="/users/cao/brejon/FatineAlexia/IMG/q13.jpg";
    _question[14]="/users/cao/brejon/FatineAlexia/IMG/q14.jpg";
    _question[15]="/users/cao/brejon/FatineAlexia/IMG/q15.jpg";
    _question[16]="/users/cao/brejon/FatineAlexia/IMG/q16.jpg";
    _question[17]="/users/cao/brejon/FatineAlexia/IMG/q17.jpg";
    _question[18]="/users/cao/brejon/FatineAlexia/IMG/q18.jpg";
    _question[19]="/users/cao/brejon/FatineAlexia/IMG/q19.jpg";
    _question[20]="/users/cao/brejon/FatineAlexia/IMG/q20.jpg";
    _question[21]="/users/cao/brejon/FatineAlexia/IMG/q21.jpg";
    _question[22]="/users/cao/brejon/FatineAlexia/IMG/q22.jpg";
    _question[23]="/users/cao/brejon/FatineAlexia/IMG/q23.jpg";
    _question[24]="/users/cao/brejon/FatineAlexia/IMG/q24.jpg";
    _question[25]="/users/cao/brejon/FatineAlexia/IMG/q25.jpg";
    _question[26]="/users/cao/brejon/FatineAlexia/IMG/q26.jpg";
    _question[27]="/users/cao/brejon/FatineAlexia/IMG/q27.jpg";
    _question[28]="/users/cao/brejon/FatineAlexia/IMG/q28.jpg";
    _question[29]="/users/cao/brejon/FatineAlexia/IMG/q29.jpg";
    _question[30]="/users/cao/brejon/FatineAlexia/IMG/q30.jpg";

}

int Questions::compteur_question() //permet de passer d'une question à l'autre
{
    _num_question+=1; // on ajoute 1
    return(_num_question);
}


Questions::~Questions(){}

