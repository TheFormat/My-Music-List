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
            this->title = title; // private 안의 변수와 public 안 변수가 이름이 같을 때, this포인터 사용 
            this->artist = artist; // 하지만 변수 이름이 다르다면 굳이 할 필요가 없다.
            this->rating = rating; // ex) title_로 해놓고 title = title_하면 된다.
        }
        
        void showSong() {
            cout << "This song is " << title << " by " << artist << "." << endl;
            cout << "My rating is " << rating << "!" << endl;
        }
        
        string getArtist() {
            return artist;
        }
        
        int getRating() {
            return rating;
        }
        
        void setArtist(string artist) {
            this->artist = artist;
        } // setter는 언제쓰는거지..여기서 필요하나
        
        void setRating(unsigned int rating) {
            this->rating = rating;
        }
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
            addMusic("AHHA", "Nate Ruess", 7);
            addMusic("Runaway", "Kanye West", 9);
            addMusic("Grace Kelly", "MIKA", 4);
            addMusic("Gansta's Paradise", "Coolio", 6);
            addMusic("Sunday Candy", "Chance the Rapper", 6);
            addMusic("Fuck You", "Cee Lo Green", 7);
            addMusic("Summertime Sadness", "Lana Del Rey", 7);
            addMusic("In Your Eyes", "The Weeknd", 8);
            addMusic("Boulevard of Broken Dreams", "Green Day", 3);
            addMusic("Snow(Hey oh)", "Red Hot Chili Peppers", 4);
            addMusic("Kids", "MGMT", 6);
            addMusic("Erase your Social", "Lil Uzi Vert", 7);
            addMusic("I Miss You", "blink-182", 6);
            addMusic("There's a good reason these tables are numbered", "Panic! at the disco", 7);
            addMusic("Numb", "Linkin Park", 5);
            addMusic("Finesse", "Bruno Mars", 6);
            addMusic("Pursuit of Happiness", "Kid Cudi", 8);
            addMusic("I Miss You", "blink-182", 6);
            addMusic("La La Land", "Demi Lovato", 5);
            addMusic("She Knows", "J.Cole", 6);
            addMusic("Taco Tuesday", "Migos", 4);
            addMusic("Less than Zero", "The Weeknd", 8);
        }
        
        void showMusicList() {
            for(int i = 0; i < music_list_size; ++i) {
                m[i].showSong();
            }
        }
        
        void todayRec() {
            random_device rd;   
            mt19937 gen(rd());
            uniform_int_distribution<int> dis(0,music_list_size - 1);
            cout << "**********Recommendation**********" << endl;
            m[dis(gen)].showSong();
            cout << "**********Recommendation**********" << endl;
        }
        
        void filterArtist(string artist_) {
            for(int i = 0; i < music_list_size; ++i) {
                if(m[i].getArtist() == artist_) {
                    m[i].showSong();
                }
            }
        }
        
        void filterRating(unsigned int rating_) {
            for(int i = 0; i < music_list_size; ++i) {
                if(m[i].getRating() == rating_) {
                    m[i].showSong();
                }
            }
        }
};




void magicFunction() {
    EveryMusicList my_music_list;
    
    my_music_list.setMusicList();
    my_music_list.todayRec();
    my_music_list.filterArtist("The Weeknd");
    my_music_list.filterRating(7);
}

int main() {
    magicFunction();
    

    return 0;
}
