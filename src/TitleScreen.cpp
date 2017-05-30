#include "TitleScreen.h"

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
    font = al_load_font("1.ttf",26,0);
    menu.LoadContent("Title");
}
void TitleScreen::UnloadContent()
{
    al_destroy_font(font);
    menu.UnloadContent();
}

void TitleScreen::Update(ALLEGRO_EVENT ev)
{
/*    if (input.IsKeyPressed(ev,ALLEGRO_KEY_ENTER))
    {
        ScreenManager::GetInstance().AddScreen(new SplashScreen);
    }
    menu.Update(ev,input);
*/
}
void TitleScreen::Draw(ALLEGRO_DISPLAY *display)
{
   // al_draw_text(font, al_map_rgb(255,0,0),100,100,NULL, "TiutleScren");
    menu.Draw(display);
}
