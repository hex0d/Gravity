#pragma once
#include "InputManager.h"
#include "FileManager.h"
#include "SpriteSheetAnimation.h"
#include "Physics.h"
#include <cstdlib>
#include <ctime>
#include <GameOver.h>

class GameplayScreen;

class Projectiles
{
    public:
        Projectiles();
        virtual ~Projectiles();
        void LoadContent();
        void Update(ALLEGRO_EVENT ev);
        void Draw(ALLEGRO_DISPLAY *display);
        float randomizer(int i);
        bool active;
        void cria();

        friend GameplayScreen;
        friend GameOver;


    protected:

    private:
        float seed = time(0);
        float finalposx;
        float finalposy;
        int quadr;
        float posx;
        float posy;
        float velx;
        float vely;

        ALLEGRO_BITMAP *proj = al_load_bitmap("proj.png");
};


