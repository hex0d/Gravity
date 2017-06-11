#ifndef GSOD_H
#define GSOD_H
#include <allegro5/allegro.h>
#include <allegro5/allegro_audio.h>


class GSod
{
    public:
        GSod();
        virtual ~GSod();
        void playSound(ALLEGRO_SAMPLE *CS);
       // ALLEGRO_SAMPLE *CS = al_load_sample("CS.wav")


    protected:

    private:
};

#endif // GSOD_H
