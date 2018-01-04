//
//  Ecran.cpp
//  Cpp
//
//  Created by Fatine Bentires on 03/01/2018.
//  Copyright © 2018 Fatine Bentires. All rights reserved.
//

#include "Ecran.hpp"

Ecran::Ecran():_win(NULL),_renderer(NULL),_img(NULL),_l(900),_h(600),_screen_name(""),_PATH(""){} // constructeur par défaut

Ecran::Ecran(SDL_Window *win,SDL_Renderer *renderer,SDL_Texture *img,int l,int h,const std::string screen_name,std::string PATH):_win(win),_renderer(renderer),_img(img),_l(l),_h(h),_screen_name(screen_name),_PATH(PATH){} //contructeur qui initialise les éléments d'affichage

Ecran ::~Ecran()
{
    // clear the screen
    SDL_RenderClear(_renderer);
}

