#pragma once
#include "GameScreen.h"
#include "Player.h"
#include "BG.h"
#include "Projectiles.h"
#include "PPC.h"
#include "Timer.h"

class Player;

class GameplayScreen : public GameScreen
{
    public:
        GameplayScreen();
        virtual ~GameplayScreen();
        void LoadContent();
        void UnloadContent();
        void Update(ALLEGRO_EVENT ev);
        void Draw(ALLEGRO_DISPLAY *display);
        Projectiles projectile[9];
        void liberaProjetil(ALLEGRO_EVENT ev);
        void checaColisao();

        //static void setFase(int _fase);
        //static int getFase();
        static int fase;

//        friend PPC;

    protected:

    private:

        Timer timer;
        Player player;
        BG bg;
        PPC ppc;

        //void newProj();
};

