#include <iostream>
#include <random>

using namespace std;

class MyMusic {
    private :
        string title;
        string artist;
        unsigned int rating;
    
    public :
        void setInfo(string title, string artist, unsigned int rating) {
            this -> title = title; // private 안의 변수와 public 안 변수가 이름이 같을 때, this포인터 사용 
            this -> artist = artist; // 하지만 변수 이름이 다르다면 굳이 할 필요가 없다.
            this -> rating = rating; // ex) title_로 해놓고 title = title_하면 된다.
        }
        
        void showSong() {
            cout << "This song is " << title << " by " << artist << "." << endl;
            cout << "My rating is " << rating << "!" << endl;
        }
        // 필터링하기..근데 어케하지 void filterTitle() {
            
};


class EveryMusicList {
    private :
        MyMusic m[100];
        int music_list_size = 0;
        
        void addMusic(string title, string artist, int rating) {
            m[music_list_size].setInfo(title, artist, rating);
            music_list_size += 1;
            
        }
    
    public : 
        void setMusicList() {
            addMusic("AHHA", "Nate Ruess", 8);
            addMusic("Runaway", "Kanye West", 9);
            addMusic("Grace Kelly", "MIKA", 7);
            addMusic("Gansta's Paradise", "Coolio", 8);
            addMusic("Sunday Candy", "Chance the Rapper", 8);
            addMusic("Fuck You", "Cee Lo Green", 8);
            addMusic("Summertime Sadness", "Lana Del Rey", 8);
            addMusic("In Your Eyes", "The Weeknd", 9);
            addMusic("Boulevard of Broken Dreams", "Green Day", 7);
            addMusic("Snow(Hey oh)", "Red Hot Chili Peppers", 9);
            addMusic("Kids", "MGMT", 8);
            addMusic("Erase your Social", "Lil Uzi Vert", 8);
            addMusic("I Miss You", "blink-182", 9);
        }
        
        void showMusicList() {
            for(int i = 0; i < music_list_size; ++i) {
                m[i].showSong();
            }
        }
        void todayRec() {
            random_device rd;   
            mt19937 gen(rd());
            uniform_int_distribution<int> dis(0,music_list_size);
            cout << "*****Reccomendation*****" << endl;
            m[dis(gen)].showSong();
        }
};




void magicFunction() {
    EveryMusicList my_music_list;
    
    my_music_list.setMusicList();
    my_music_list.showMusicList();
    
    my_music_list.todayRec();
}

int main() {
    magicFunction();

    return 0;
}
