#pragma once
#include "GOSound.h"
//#include "PPC.h"


class Player;
class GameOver//: public PPC
{
    public:
        //ALLEGRO_SAMPLE *gos;
        GameOver();
        ~GameOver();
        void setPlayer(Player *player);
        bool isDougrasDead();
        bool gameOver;
        //GOSound GOS;
//        void setScreen(ScreenManager *screen);

    protected:

    private:
        Player *pl;
        //ScreenManager::GetInstance() screen;
};

