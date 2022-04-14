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
        /*TodayRec() {
            random_device rd;   
            mt19937 gen(rd());
            uniform_int_distribution<int> dis();
            cout << "Today's song is ->" << MyMusic.title << endl;
        }
        사실 이부분 어케할지 좀 고민중...*/
};


class MusicList {
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
        }
        
        void showMusicList() {
            for(int i = 0; i < music_list_size; ++i) {
                m[i].showSong();
            }
        }
};

void magicFunction() {
    MusicList my_music_list;
    
    my_music_list.setMusicList();
    my_music_list.showMusicList();
}

int main() {
    magicFunction();

    return 0;
}
int main() {
    MyMusic m1;
    MyMusic m2;
    m1.SetInfo("AHHA", "Nate Ruess", 8);
    m2.SetInfo("Runaway", "Kanye West", 9);
    m1.ShowSong();
    m2.ShowSong();


    return 0;
}
