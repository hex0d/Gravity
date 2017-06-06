#include "GameOverScreen.h"
#include "ScreenManager.h"

GameOverScreen::GameOverScreen()
{
    //ctor
}

GameOverScreen::~GameOverScreen()
{
    //dtor
}
void GameOverScreen::Update(ALLEGRO_EVENT ev,InputManager &input){
    input.Update();
    if(input.IsKeyDown(ALLEGRO_KEY_ENTER)){
        ScreenManager::GetInstance().AddScreen("GameplayScreen");
    }


}


void GameOverScreen::Draw(ALLEGRO_DISPLAY *display){
    input.Update();
    if(input.IsKeyDown(ALLEGRO_KEY_ENTER)){
        ScreenManager::GetInstance().currentScreen->UnloadContent();
        ScreenManager::GetInstance().AddScreen("TitleScreen");

    }
    if((input.IsKeyDown(ALLEGRO_KEY_R))){
        ScreenManager::GetInstance().currentScreen->UnloadContent();
        ScreenManager::GetInstance().AddScreen("WaitScreen");

    }
    al_draw_bitmap(go,250,200,NULL);

}
