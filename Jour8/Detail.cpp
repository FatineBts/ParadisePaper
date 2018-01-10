//
//  Detail.cpp
//  Cpp
//
//  Created by Fatine Bentires on 08/01/2018.
//  Copyright © 2018 Fatine Bentires. All rights reserved.
//

#include "Detail.hpp"

Detail::Detail():Score()
{
    for (int i=0; i<50; i++)
        _a_vu[i]="false"; //on met tout à faux
    
} // par défaut


void Detail::mise_a_jour()
{
    for (int i=0; i<50; i++)
        _a_vu[i]="false"; //on met tout à faux

}
void Detail::initialisation() //mettre ici les chemins 
{    
    _detail[0]="/Users/fatine/Desktop/Cpp/Cpp/IMG/d1.jpg";
    _detail[1]="/Users/fatine/Desktop/Cpp/Cpp/IMG/d2.jpg";
    _detail[2]="/Users/fatine/Desktop/Cpp/Cpp/IMG/d3.jpg";
    _detail[4]="/Users/fatine/Desktop/Cpp/Cpp/IMG/d5.jpg";
    _detail[6]="/Users/fatine/Desktop/Cpp/Cpp/IMG/d7.jpg";
    _detail[8]="/Users/fatine/Desktop/Cpp/Cpp/IMG/d9.jpg";
    _detail[9]="/Users/fatine/Desktop/Cpp/Cpp/IMG/d10.jpg";
    
    _detail[11]="/Users/fatine/Desktop/Cpp/Cpp/IMG/d11.jpg";
    _detail[12]="/Users/fatine/Desktop/Cpp/Cpp/IMG/d12.jpg";
    _detail[14]="/Users/fatine/Desktop/Cpp/Cpp/IMG/d14.jpg";
    _detail[18]="/Users/fatine/Desktop/Cpp/Cpp/IMG/d18.jpg";
    _detail[20]="/Users/fatine/Desktop/Cpp/Cpp/IMG/d20.jpg";
    _detail[22]="/Users/fatine/Desktop/Cpp/Cpp/IMG/d22.jpg";
    
}


bool Detail::verification(int i) // va donner si la question a un détail ou pas 
{
    bool tmp;
    
    if(_detail[i]!="" && _a_vu[i]==true) // si la question possède du détail et que l'utilisateur n'a pas vu la réponse
        tmp=false;
    
    return tmp;
    
}


Detail::~Detail(){}
