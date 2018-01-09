#include "Questions.hpp"

Questions::Questions(){_num_question=0;} // on initialise la question à 0



void Questions::initialisation() //initialise les questions -> charge les images 
{

    _question[0]="/Users/fatine/Desktop/Cpp/Cpp/IMG/q1.jpg";
    _question[1]="/Users/fatine/Desktop/Cpp/Cpp/IMG/q2.jpg";
    _question[2]="/Users/fatine/Desktop/Cpp/Cpp/IMG/q3.jpg";
    _question[3]="/Users/fatine/Desktop/Cpp/Cpp/IMG/q4.jpg";
    _question[4]="/Users/fatine/Desktop/Cpp/Cpp/IMG/q5.jpg";
    _question[5]="/Users/fatine/Desktop/Cpp/Cpp/IMG/q6.jpg";
    _question[6]="/Users/fatine/Desktop/Cpp/Cpp/IMG/q7.jpg";
    _question[7]="/Users/fatine/Desktop/Cpp/Cpp/IMG/q8.jpg";
    _question[8]="/Users/fatine/Desktop/Cpp/Cpp/IMG/q9.jpg";
    _question[9]="/Users/fatine/Desktop/Cpp/Cpp/IMG/q10.jpg";
    _question[10]="/Users/fatine/Desktop/Cpp/Cpp/IMG/fini.jpeg"; //contient la page qui dit de cliquer sur la flèche du bas pour avoir les réponses
    _question[11]="/Users/fatine/Desktop/Cpp/Cpp/IMG/q11.jpg";
    _question[12]="/Users/fatine/Desktop/Cpp/Cpp/IMG/q12.jpg";
    _question[13]="/Users/fatine/Desktop/Cpp/Cpp/IMG/q13.jpg";
    _question[14]="/Users/fatine/Desktop/Cpp/Cpp/IMG/q14.jpg";
    _question[15]="/Users/fatine/Desktop/Cpp/Cpp/IMG/q15.jpg";
    _question[16]="/Users/fatine/Desktop/Cpp/Cpp/IMG/q16.jpg";
    _question[17]="/Users/fatine/Desktop/Cpp/Cpp/IMG/q17.jpg";
    _question[18]="/Users/fatine/Desktop/Cpp/Cpp/IMG/q18.jpg";
    _question[19]="/Users/fatine/Desktop/Cpp/Cpp/IMG/q19.jpg";
    _question[20]="/Users/fatine/Desktop/Cpp/Cpp/IMG/q20.jpg";
    _question[21]="/Users/fatine/Desktop/Cpp/Cpp/IMG/q21.jpg";
    _question[22]="/Users/fatine/Desktop/Cpp/Cpp/IMG/q22.jpg";
    _question[23]="/Users/fatine/Desktop/Cpp/Cpp/IMG/q23.jpg";
    _question[24]="/Users/fatine/Desktop/Cpp/Cpp/IMG/q24.jpg";
    _question[25]="/Users/fatine/Desktop/Cpp/Cpp/IMG/q25.jpg";
    _question[26]="/Users/fatine/Desktop/Cpp/Cpp/IMG/q26.jpg";
    _question[27]="/Users/fatine/Desktop/Cpp/Cpp/IMG/q27.jpg";
    _question[28]="/Users/fatine/Desktop/Cpp/Cpp/IMG/q28.jpg";
    _question[29]="/Users/fatine/Desktop/Cpp/Cpp/IMG/q29.jpg";
    _question[30]="/Users/fatine/Desktop/Cpp/Cpp/IMG/q30.jpg";

}

int Questions::compteur_question() //permet de passer d'une question à l'autre
{
    _num_question+=1; // on ajoute 1
    return(_num_question);
}


Questions::~Questions(){}

