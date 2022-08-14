#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include "MyMusics.hpp"
#include <string>

// using namespace std;를 지운 이유는, main.cpp에서 이 파일을 include 하면 의도치 않게 using namespace std;를 사용한 꼴이 됨. 따라서 헤더파일에서는 해당 구문 사용 자제.

void print(std::string line); // 출력 함수

class Functions {
    private :
        MyMusics m[100];
        int num_of_musics = 0;
        
    public : 
        void showMusicList(); // 노래 보여주기
        void todayRec(); // 오늘의 추천
        void filterArtist(std::string artist_); // 아티스트 검색
        void filterMyRating(unsigned int my_rating_); // 점수 별 검색
};

#endif