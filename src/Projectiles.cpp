#include "Projectiles.h"#include "Projectiles.h"#include "Projectiles.h"
#include "Includes.h"
#include <math.h>
#include <cstdlib>
#include <ctime>
float Projectiles::randomizer(int i){
    int k;
    srand(time(NULL));
    for(int j = 0; j<i;j++){
       k = rand()%8;
    }
    return k;

}

Projectiles::Projectiles()
{
    posx = -100;
    posy = -200;

}

Projectiles::~Projectiles()
{
    //dtor
}
void Projectiles::cria(){
    /* (int p=0; p<7; p++)
    {
        if(!projectile[p].active)
        {
            if(rand()%500 == 0){
                projectile[p].LoadContent();
                cout << "PROJ" << p<<endl;
                projectile[p].active = true;
                break;

            }
        }
    }*/





}
void Projectiles::LoadContent()
{
        //srand(time(0));
    //velx = vely = 7;
    active = false;
    quadr = rand()%8;
    cout<<quadr;
    switch(quadr)
    {
    case 0:
        //srand(time(0));
        posx = SCREENW+50;
        posy = rand() % (SCREENH/2) + 1;
        finalposy = rand() % SCREENH + 3;
        finalposx = 0;
        break;

    case 1:
        //srand(time(0));
        posx = rand()%(SCREENW/2) + (SCREENW/2);
        posy = -50;/*    for (int p=0; p<7; p++)
    {
        if(!projectile[p].active)
        {
            if(rand()%500 == 0){
                projectile[p].LoadContent();
                cout << "PROJ" << p<<endl;
                projectile[p].active = true;
                break;

            }
        }
    }*/
        finalposy = SCREENH;
        finalposx = (rand() % SCREENW) - 200 ;
        break;
    case 2:
        //srand(time(0));
        posx = rand() % (SCREENW/2);
        posy = -50;
        finalposy = SCREENH;
        finalposx = rand() % SCREENW;
                break;
    case 3:
        //srand(time(0));
        posx = -50;
        posy = (rand() % (SCREENH/2));
        finalposy = rand() % SCREENH;
        finalposx = SCREENW + 50;
            break;
    case 4:
       // srand(time(0));
        posx = -50;
        posy = (rand() % (SCREENH/2)) + SCREENH/2 ;
        finalposy = rand() % SCREENH;
        finalposx = SCREENW + 50;
                break;
    case 5:
        posx = rand() % (SCREENW/2);
        posy = SCREENH +50;
        finalposy = 0;
        finalposx = rand() % SCREENW;
                break;
    case 6:
        posx = rand() % (SCREENW/2)+(SCREENW/2);
        posy = SCREENH+50;
        finalposy = 0;
        finalposx = rand() % SCREENW;
                break;
    case 7:
        posx = SCREENW+50;
        posy = rand() % (SCREENH/2) + (SCREENH/2) ;
        finalposy = rand() % SCREENH;
        finalposx = -50;

        break;

    }
    velx = (finalposx - posx)/120;
    vely = (finalposy - posy)/120;






}
void Projectiles::Update(ALLEGRO_EVENT ev)
{
        //srand(time(0));
    //velx = vely = 7;
    //active =false;
    //quadr = rand()%8;
    /*switch(quadr)
    {
    case 0:
        //srand(time(0));*/
        posx += velx;
        posy += vely;
        /*break;

    case 1:
        //srand(time(0));
        posx = rand()%(SCREENW/2) + (SCREENW/2);
        posy = -50;
        finalposy = SCREENH;
        finalposx = (rand() % SCREENW) - 200 ;
        break;
    case 2:
        //srand(time(0));
        posx = rand() % (SCREENW/2);
        posy = -50;
        finalposy = SCREENH;
        finalposx = rand() % SCREENW;
                break;
    case 3:
        //srand(time(0));
        posx = -50;
        posy = (rand() % (SCREENH/2));
        finalposy = rand() % SCREENH;
        finalposx = SCREENW + 50;
            break;
    case 4:
       // srand(time(0));
        posx = -50;
        posy = (rand() % (SCREENH/2)) + SCREENH/2 ;
        finalposy = rand() % SCREENH;
        finalposx = SCREENW + 50;
                break;
    case 5:
        posx = rand() % (SCREENW/2);
        posy = SCREENH +50;
        finalposy = 0;
        finalposx = rand() % SCREENW;
                break;
    case 6:
        posx = rand() % (SCREENW/2)+(SCREENW/2);
        posy = SCREENH+50;
        finalposy = 0;
        finalposx = rand() % SCREENW;
                break;
    case 7:
        posx = SCREENW+50;
        posy = rand() % (SCREENH/2) + (SCREENH/2) ;
        finalposy = rand() % SCREENH;
        finalposx = -50;

        break;

    }*/








}

void Projectiles::Draw(ALLEGRO_DISPLAY *display){
    al_draw_bitmap(proj,posx,posy,NULL);


}
