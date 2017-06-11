#include "GameOver.h"
#include "Player.h"
#include "ScreenManager.h"
#include "Includes.h"
#define MAX_Y 800
#define MAX_X 600
#include "PPC.h"




GameOver::GameOver(){

}

GameOver::~GameOver(){}

void GameOver::setPlayer(Player *player)
{
    pl = player;
}
/*void GameOver::setScreen(ScreenManager *screen){
    screen = scren;

}*/

bool GameOver::isDougrasDead()
{
    //gameOver = false;
    if(pl->pAnimation.position[1] >= SCREENH || pl->pAnimation.position[1] <= -PLAYERSIZE
       || pl->pAnimation.position[0] >= SCREENW || pl->pAnimation.position[0] <= -PLAYERSIZE)
    {
        //gos = al_load_sample("GOS.wav");
        //GOS.playSong(gos);
        cout << "PERDEU VIADO";
        ScreenManager::GetInstance().AddScreen("GameOverScreen");
    }
//    if(PPC::colision(PPC::playerImage))
}
