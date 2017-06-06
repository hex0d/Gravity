#pragma once
//#include "PPC.h"


class Player;
class GameOver//: public PPC
{
    public:
        GameOver();
        ~GameOver();
        void setPlayer(Player *player);
        bool isDougrasDead();
        bool gameOver;
//        void setScreen(ScreenManager *screen);

    protected:

    private:
        Player *pl;
        //ScreenManager::GetInstance() screen;
};

