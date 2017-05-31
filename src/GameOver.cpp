#include "GameOver.h"
#include "Player.h"
#include "ScreenManager.h"


GameOver::GameOver(){
    gameOver = false;
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
    gameOver = false;
    if(pl->pAnimation.position[1] >= 700 || pl->pAnimation.position[1] <= 0
       || pl->pAnimation.position[0] >= 700 || pl->pAnimation.position[0] <= 0)
    {
        cout << "PERDEU VIADO";
        ScreenManager::GetInstance().AddScreen("GameOverScreen");

    }
}

