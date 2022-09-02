#ifndef MYMUSICS_H
#define MYMUSICS_H

#include <string>

class MyMusic {
    private :
        std::string title;
        std::string artist;
        unsigned int my_rating;
	unsigned int year;

    public :
        void setInfo(std::string title, std::string artist, unsigned int my_rating, unsigned int year);
        void showSong();
        std::string getArtist();
        int getMyRating();
	int getYear();
        void setArtist(std::string artist);
        void setMyRating(unsigned int my_rating);
	void setYear(unsigned int year);
};

class MyMusicList {
	friend class Functions;
    private :
        MyMusic m[100];
        int num_of_musics = 0;

        void addMusic(std::string title, std::string artist, unsigned int my_rating, unsigned int year);

    public :
        void makeMusicList();
	
	
};

#endif
