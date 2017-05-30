#include "Physics.h"
#include "Player.h"

Physics::Physics(){}

Physics::~Physics(){}

void Physics::setPlayer(Player *player)
{
    pl = player;
}
void Physics::playerMove(int vx, int vy, int dir)
{
    switch(dir)
    {
    case 0:
        pl->direction = Player::Right;
        if(pl->pAnimation.position[1] > 0)
            pl->pAnimation.position[1] -= vy;
        if(pl->pAnimation.position[0] < 725)
            pl->pAnimation.position[0] += vx;
        break;
    case 1:
        pl->direction = Player::Left;
        if(pl->pAnimation.position[1] > 0)
            pl->pAnimation.position[1] -= vx;
        if(pl->pAnimation.position[0] > 0)
            pl->pAnimation.position[0] -= vy;
        break;
    case 2:
        if(pl->pAnimation.position[1] > 0)
            pl->pAnimation.position[1] -= vy;
        break;
    case 3:
        pl->direction = Player::Right;
        if(pl->pAnimation.position[0] < 725)
            pl->pAnimation.position[0] += vx;
        break;
    case 4:
        pl->direction = Player::Left;
        if(pl->pAnimation.position[0] > 0)
            pl->pAnimation.position[0] -= vx;
        break;
    default:
        pl->pAnimation.isActive = true;
        pl->direction = Player::Right;
        pl->pAnimation.position[1] += 7;
        break;
    }
}
