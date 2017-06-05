#include "Projectiles.h"
#include "Includes.h"
#include <math.h>
#include <cstdlib>
#include <time.h>


Projectiles::Projectiles()
{
    velx = vely = 7;
    active =false;
    quadr = 1;//rand() %8;
    switch(quadr)
    {
    case 0:
        posx = SCREENW+50;
        posy = rand() % (SCREENH/2);
        finalposy = rand() % SCREENH;
        finalposx = 0;

    case 1:
        posx = rand() % (SCREENW/2) + (SCREENW/2);
        posy = -50;
        finalposy = SCREENH;
        finalposx = rand() % SCREENW;

    case 2:
        posx = rand() % (SCREENW/2);
        posy = -50;
        finalposy = SCREENH;
        finalposx = rand() % SCREENW;
    case 3:
        posx = SCREENW+50;
        posy = rand() % (SCREENH/2);
        finalposy = rand() % SCREENH;
    case 4:
        posx = SCREENW+50;
        posy = rand() % (SCREENH/2);
        finalposy = rand() % SCREENH;
    case 5:
        posx = rand() % (SCREENW/2);
        posy = SCREENH +50;
        finalposy = 0;
        finalposx = rand() % SCREENW;
    case 6:
        posx = rand() % (SCREENW/2)+(SCREENW/2);
        posy = SCREENH+50;
        finalposy = 0;
        finalposx = rand() % SCREENW;
    case 7:
        posx = SCREENW+50;
        posy = rand() % (SCREENH/2);
        finalposy = rand() % SCREENH;

    }


}

Projectiles::~Projectiles()
{
    //dtor
}

void Projectiles::LoadContent()
{




}
void Projectiles::Update(ALLEGRO_EVENT ev)
{
    posx -= 7;
    posy += 2;





}

void Projectiles::Draw(ALLEGRO_DISPLAY *display){
    al_draw_bitmap(proj,posx,posy,NULL);


}
