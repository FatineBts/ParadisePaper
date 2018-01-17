#include "Affiche.hpp"
#define IMG_PATH "/users/cao/brejon/FatineAlexia/IMG/paradise.jpeg"

Affiche::Affiche():Ecran(){}


Affiche::Affiche(SDL_Window *win,SDL_Renderer *renderer,SDL_Texture *img,int l,int h,const std::string screen_name, std::string PATH):Ecran(win,renderer,img,l,h,screen_name,PATH){}


int Affiche::Init(Ecran* ecran)
{

    int WIDTH=ecran->get_l();
    
    int HEIGHT=ecran->get_h();
    SDL_Window* win=ecran->get_window();
    SDL_Renderer* renderer=ecran->get_renderer();
    SDL_Texture* img=ecran->get_img();
    
    if (SDL_Init(SDL_INIT_VIDEO) < 0) //initialisation
        return 1;
    
    win = SDL_CreateWindow(ecran->get_screen_name().c_str(), 100, 100, WIDTH, HEIGHT, 0); // cree la fenetre - c.str() pour récupérer le str
    renderer = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED); // cree le renderer

    
    img = IMG_LoadTexture(renderer,ecran->get_path().c_str()); // charge l'image
    SDL_QueryTexture(img, NULL, NULL,&WIDTH, &HEIGHT); // recuperer la longueur et largeur


    return 0;
}

void Affiche::destruction(SDL_Renderer* renderer,SDL_Window* win,SDL_Texture* img)
{
    // pour détruire toutes les fenetres, normalement devraient être dans le déstructeur on verra ça après
    SDL_DestroyTexture(img);
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(win);

}


Affiche::~Affiche(){}
