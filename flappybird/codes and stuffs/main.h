//main.h

#ifndef sdl2_testing_main_h
#define sdl2_testing_main_h
#include<SDL2/SDL.h>
#include<SDL2/SDL_image.h>
#include<SDL2/SDL_mixer.h>
#include<stdbool.h>
typedef struct
{
 float x, y ,dy;
 bool jump;
 short life;
 int animframe;
 char *name;

}Bird;
typedef struct
{
    int x,y1,y2,w,h1,h2;
}Wall;
typedef struct
{
    float scrollx;
    Wall walls[500];
    //the bird
    Bird fbird;
    //renderer
    SDL_Renderer *renderer;
    //time for animations
    int time;
    //images
    SDL_Texture *ground;
    SDL_Texture *bird1;
    SDL_Texture *bird2;
    SDL_Texture *wall;
    //sounds
    int musicChannel;
    Mix_Chunk *bgMusic ,*jumpSound, *wallColi;


}GameState;



#endif // sdl2_testing_main_h
