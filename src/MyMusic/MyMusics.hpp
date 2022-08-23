#ifndef MYMUSICS_H
#define MYMUSICS_H

#include <string>
#include <list>

class MyMusic {
    private :
        std::string title;
        std::string artist;
        unsigned int my_rating;
		unsigned int year;

    public :
		MyMusic(std::string title, std::string artist, unsigned int my_rating, unsigned int year); // 생성자 만듬
        void editInfo(std::string title, std::string artist, unsigned int my_rating, unsigned int year);
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

        void addMusic(std::string title, std::string artist, unsigned int my_rating, unsigned int year);
    public :
		std::list<MyMusic*> musics; // 배열 MyMusic m[100]에서 포인터를 저장해주는 리스트로 바꿈.	
	
        void makeMusicList();
	
	
};

#endif
