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

class Detail : public Score
{
public:
    Detail();
    ~Detail();
    void initialisation();
    std::string get_detail(int i){return _detail[i];}
    bool verification(int i);
    
private:
    std::string _detail[50]; // va contenir les chemins des images détails
    Score _score;
    bool _a_vu[50];
};




#endif /* Detail_hpp */
