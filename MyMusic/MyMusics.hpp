#ifndef MYMUSICS_H
#define MYMUSICS_H

#include "Functions.hpp"
#include <string>

class MyMusics {
    private :
        std::string title;
        std::string artist;
        unsigned int my_rating;

    public :
        void Info(std::string title, std::string artist, unsigned int my_rating);

};

class MyMusicList {
    private :
        MyMusics m[100];
        int num_of_musics = 0;

        void addMusic(std::string title, std::string artist, unsigned int my_rating);

    public :
        void makeMusicList();
};

#endif
