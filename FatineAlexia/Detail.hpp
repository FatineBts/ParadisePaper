//
//  Detail.hpp
//  Cpp
//
//  Created by Fatine Bentires on 08/01/2018.
//  Copyright © 2018 Fatine Bentires. All rights reserved.
//

#ifndef Detail_hpp
#define Detail_hpp

#include <stdio.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_events.h>
#include "Score.hpp"

/*
 La classe détail permet de:
- Une classe initialisation() qui charge les chemins
- Une fonction détail qui donne les chemins
- Une fonction verification qui vérifie si la personne à vu la question ou pas 
 
 */


class Detail: public Score
{
public:
    Detail();
    ~Detail();
    void mise_a_jour();
    void initialisation();
    std::string get_detail(int i){return _detail[i];}
    bool verification(int i);
    
private:
    std::string _detail[50]; // va contenir les chemins des images détails
    Score _score;
    bool _a_vu[50];
};




#endif /* Detail_hpp */
