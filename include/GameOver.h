#pragma once


class Player;
class GameOver
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

