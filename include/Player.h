#pragma once

#include<allegro5/allegro.h>
#include <vector>
#include <string>
#include "InputManager.h"
#include "FileManager.h"
#include "SpriteSheetAnimation.h"
#include "Physics.h"
#include "GameOver.h"

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

    protected:

    private:
        FileManager fm;
        ALLEGRO_BITMAP *playerImage;
        float position[2] = {100,100};
        int xSpeed;
        int ySpeed;
        Physics ph;
        GameOver go;

        vector<vector<string > > attributes;
        vector<vector<string > > contents;
        Animation pAnimation;
        SpriteSheetAnimation ssAnimation;
        enum Direction {Right,Left};
        Direction direction;
};
