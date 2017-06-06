#include "TitleScreen.h"
#include "ScreenManager.h"

TitleScreen::TitleScreen()
{
    //ctor
}

TitleScreen::~TitleScreen()
{
    //dtor
}


void TitleScreen::LoadContent()
{
    GameScreen::UnloadContent();
    font = al_load_font("1.ttf",60,0);
    menu.LoadContent("Title");
}
void TitleScreen::UnloadContent()
{
    al_destroy_font(font);
    menu.UnloadContent();
}

void TitleScreen::Update(ALLEGRO_EVENT ev)
{
    /*if (input.IsKeyPressed(ev,ALLEGRO_KEY_ENTER))
    {
        ScreenManager::GetInstance().AddScreen("TitleScreen");
    }*/
    menu.Update(ev,input);

}
void TitleScreen::Draw(ALLEGRO_DISPLAY *display)
{
    al_draw_bitmap(bg,0,0,NULL);
    menu.Draw(display);
}
