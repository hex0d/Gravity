#include "GameOverScreen.h"

GameOverScreen::GameOverScreen()
{
    //ctor
}

GameOverScreen::~GameOverScreen()
{
    //dtor
}
void GameOverScreen::Update(){

}


void GameOverScreen::Draw(ALLEGRO_DISPLAY *display){
    al_draw_bitmap(go,0,0,NULL);

}
