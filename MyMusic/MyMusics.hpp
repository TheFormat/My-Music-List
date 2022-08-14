#ifndef MYMUSICS_H
#define MYMUSICS_H

#include <string>

class MyMusic {
    private :
        std::string title;
        std::string artist;
        unsigned int my_rating;

    public :
        void Info(std::string title, std::string artist, unsigned int my_rating);
        void showSong();
        std::string getArtist();
        int getRating();
        void setArtist(std::string artist);
        void setRating(unsigned int my_rating);
};

class MyMusicList {
    private :
        MyMusic m[100];
        int num_of_musics = 0;

        void addMusic(std::string title, std::string artist, unsigned int my_rating);

    public :
        void makeMusicList();
};

#endif
