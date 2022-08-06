#ifndef MYMUSIC_H
#define MYMUSIC_H

void print(string line) {
    
} // 출력 함수

class MyMusic {
    private :
        string title;
        string artist;
        unsigned int rating;
    
    public :
        void setInfo(string title, string artist, unsigned int rating) {
            
        }// 노래 설정
        
        void showSong() {

        } // 노래, 아티스트, 점수 보여주기
        
        string getArtist() {

        } // 아티스트 필터 getter
        
        int getRating() {

        } // 점수 필터 getter
        
        void setArtist(string artist) {

        } // 아티스트 필터 setter
        
        void setRating(unsigned int rating) {

        } // 점수 필터 setter
};


class EveryMusicList {
    private :
        MyMusic m[100];
        int music_list_size = 0;
        
        void addMusic(string title, string artist, int rating) {

        } // 노래 리스트에 노래 추가
    
    public : 
        void setMusicList() {

        } // 노래 리스트 추가
        
        void showMusicList() {

        } // 노래 보여주기
        
        void todayRec() {

        } // 오늘의 추천
        
        void filterArtist(string artist_) {

        } // 아티스트 검색
        
        void filterRating(unsigned int rating_) {

        } // 점수 별 검색
};

#endif