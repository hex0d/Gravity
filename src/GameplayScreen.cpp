#include "GameplayScreen.h"
#include "Includes.h"
#include "ScreenManager.h"
/*void GameplayScreen::newProj(){
    for (int i = 0 ; i<7 ; i++){
        projectile[i] = new Projectiles;
    }
}*/
GameplayScreen::GameplayScreen()
{
    //projectile[9].LoadContent()

//    running = false

}

GameplayScreen::~GameplayScreen()
{
    //dtor
}
void GameplayScreen::LoadContent()
{
    player.LoadContent();
}





void GameplayScreen::UnloadContent()
{
    GameScreen::UnloadContent();
    for(int i = 0 ; i < 9 ; i++){
        projectile[i].active = false;
        projectile[i].posx = -200;
        projectile[i].posy = -200;
    }
    cout<<"DFASDFHIASDHJFASJDFKJASDKFJAS"<<endl<<"DFASDFHIASDHJFASJDFKJASDKFJAS"<<endl<<"DFASDFHIASDHJFASJDFKJASDKFJAS"<<endl<<"DFASDFHIASDHJFASJDFKJASDKFJAS"<<endl<<"DFASDFHIASDHJFASJDFKJASDKFJAS"<<endl<<"DFASDFHIASDHJFASJDFKJASDKFJAS"<<endl<<"DFASDFHIASDHJFASJDFKJASDKFJAS"<<endl<<"DFASDFHIASDHJFASJDFKJASDKFJAS"<<endl<<"DFASDFHIASDHJFASJDFKJASDKFJAS"<<endl;
}

void GameplayScreen::Update(ALLEGRO_EVENT ev)
{




    for (int i=0; i<9; i++)
    {
        if(projectile[i].active)
        {
            projectile[i].Update(ev);
            if (projectile[i].posx >= SCREENW+70|| projectile[i].posx <= -70|| projectile[i].posy >= SCREENH + 50 || projectile[i].posy <= -50)
                projectile[i].active = false;

        }

    }
    for(int i = 0 ; i < 9 ; i++){
    if(ppc.colision(player.playerImage,projectile[i].proj,player.pAnimation.position[0],player.pAnimation.position[1],projectile[i].posx,projectile[i].posy)){
    cout << "PERDEU VIADO";
        ScreenManager::GetInstance().AddScreen("GameOverScreen");
        ScreenManager::GetInstance().currentScreen->UnloadContent();

        //ScreenManager::GetInstance().AddScreen("GameOverScreen");
        }
    }
    player.Update(ev,input);
}


void GameplayScreen::Draw(ALLEGRO_DISPLAY *display)
{

    bg.Draw(display);
        player.Draw(display);


    for (int p=0; p<9; p++)
        {
        if(!projectile[p].active)
            {
            if(rand()%150 == 0){
                projectile[p].LoadContent();
                cout << "PROJ" << p<<endl;
                projectile[p].active = true;
                break;

            }
        }
    }
//    cout<<projectile[i].posx<<endl;
    for (int i=0; i<9; i++)
    {
        /*if(projectile[i].active)
        {*/

    projectile[i].Draw(display);
/*
        }*/
    }

/*        if(!running){
    input.Update();

        if(input.IsKeyDown(ALLEGRO_KEY_ENTER)){
        running = true;
        }
    }*/

}
