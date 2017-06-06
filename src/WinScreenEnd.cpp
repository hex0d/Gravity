#include "WinScreenEnd.h"

WinScreenEnd::WinScreenEnd()
{
    //ctor
}

WinScreenEnd::~WinScreenEnd()
{
    //dtor
}
void WinScreenEnd::Update(ALLEGRO_EVENT ev,InputManager &input){
    /*input.Update();
    if(input.IsKeyDown(ALLEGRO_KEY_ENTER)){
        ScreenManager::GetInstance().AddScreen("GameplayScreen");
    }*/


}


void WinScreenEnd::Draw(ALLEGRO_DISPLAY *display){
    /*input.Update();
    if(input.IsKeyDown(ALLEGRO_KEY_ENTER)){
        ScreenManager::GetInstance().currentScreen->UnloadContent();
        ScreenManager::GetInstance().AddScreen("TitleScreen");

    }
    if((input.IsKeyDown(ALLEGRO_KEY_R))){
        ScreenManager::GetInstance().currentScreen->UnloadContent();
        ScreenManager::GetInstance().AddScreen("GameplayScreen");*/

    //}
    al_draw_bitmap(go,250,200,NULL);

}
