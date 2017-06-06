#pragma once

#include<allegro5/allegro.h>
#include <vector>
#include <string>
#include "InputManager.h"
#include "FileManager.h"
#include "SpriteSheetAnimation.h"
#include "Physics.h"
#include "GameOver.h"
//#include "PPC.h"
#include "Timer.h"

using namespace std;

class Player
{
    public:
        Player();
        virtual ~Player();
        void LoadContent();
        void UnloadContent();
        void Update(ALLEGRO_EVENT ev, InputManager input);
        void Draw(ALLEGRO_DISPLAY *display);
        friend Physics;
        friend GameOver;
      //  friend PPC;
        ALLEGRO_BITMAP *playerImage;
        Animation pAnimation;
    protected:

    private:
        FileManager fm;

        float position[2] = {100,100};
        int xSpeed;
        int ySpeed;
        Physics ph;
        GameOver go;
        //Timer timer;

        vector<vector<string > > attributes;
        vector<vector<string > > contents;

        SpriteSheetAnimation ssAnimation;
        enum Direction {Right,Left};
        Direction direction;
};
