#pragma once
#include "InputManager.h"
#include "FileManager.h"
#include "SpriteSheetAnimation.h"
#include "Physics.h"
#include "GameOver.h"

class Projectiles
{
    public:
        Projectiles();
        virtual ~Projectiles();
        void LoadContent();
        void Update(ALLEGRO_EVENT ev);
        void Draw(ALLEGRO_DISPLAY *display);


    protected:

    private:
        int finalposx;
        int finalposy;
        int quadr;
        int posx;
        int posy;
        int velx;
        int vely;
        bool active;
        ALLEGRO_BITMAP *proj = al_load_bitmap("proj.png");
};


