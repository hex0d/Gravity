#pragma once
#include "GameScreen.h"
#include "Player.h"
#include "BG.h"
#include "Projectiles.h"


class GameplayScreen : public GameScreen
{
    public:
        GameplayScreen();
        virtual ~GameplayScreen();
        void LoadContent();
        void UnloadContent();
        void Update(ALLEGRO_EVENT ev);
        void Draw(ALLEGRO_DISPLAY *display);

    protected:

    private:
        Player player;
        BG bg;
        Projectiles projectile;
};
