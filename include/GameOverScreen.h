#pragma once
#include "GameScreen.h"
#include "FadeAnimation.h"
#include "Animation.h"



class GameOverScreen : public GameScreen
{
    public:
        GameOverScreen();
        virtual ~GameOverScreen();
        //void LoadContent();
        //void UnloadContent();
        void Update(ALLEGRO_EVENT ev,InputManager &input);
        void Draw(ALLEGRO_DISPLAY *display);
        ALLEGRO_BITMAP *go = al_load_bitmap("go.png");

    protected:

    private:
};

