#include <iostream>
#include <random>

using namespace std;

void print(string line) {
    printf("%s\n", line.c_str());
}

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
        } // 노래, 아티스트, 점수 보여주기
        
        string getArtist() {
            return artist;
        } // 아티스트 필터 getter
        
        int getRating() {
            return rating;
        } // 점수 필터 getter
        
        void setArtist(string artist) {
            this->artist = artist;
        } // 아티스트 필터 setter
        
        void setRating(unsigned int rating) {
            this->rating = rating; // 점수 필터 setter
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
            addMusic("AHHA", "Nate Ruess", 8);
            addMusic("Runaway", "Kanye West", 9);
            addMusic("Grace Kelly", "MIKA", 4);
            addMusic("Gansta's Paradise", "Coolio", 6);
            addMusic("Sunday Candy", "Chance the Rapper", 6);
            addMusic("Fuck You", "Cee Lo Green", 6);
            addMusic("Summertime Sadness", "Lana Del Rey", 6);
            addMusic("In Your Eyes", "The Weeknd", 8);
            addMusic("Boulevard of Broken Dreams", "Green Day", 3);
            addMusic("Snow(Hey oh)", "Red Hot Chili Peppers", 5);
            addMusic("Kids", "MGMT", 5);
            addMusic("Erase your Social", "Lil Uzi Vert", 7);
            addMusic("I Miss You", "blink-182", 6);
            addMusic("There's a good reason these tables are numbered", "Panic! at the disco", 7);
            addMusic("Numb", "Linkin Park", 5);
            addMusic("Finesse", "Bruno Mars", 6);
            addMusic("Pursuit of Happiness", "Kid Cudi", 8);
            addMusic("La La Land", "Demi Lovato", 4);
            addMusic("She Knows", "J.Cole", 6);
            addMusic("Taco Tuesday", "Migos", 4);
            addMusic("Less than Zero", "The Weeknd", 8);
            addMusic("Bittersweet Poetry", "Kanye West", 9);
            addMusic("Through the Wire", "Kanye West", 8);
            addMusic("Two Words", "Kanye West", 7);
            addMusic("Is there Someone Else?", "The Weeknd", 8);
            addMusic("She doesn't get it", "The Format", 5);
            addMusic("The First Single", "The Format", 8);
            addMusic("Famous Last Words", "My Chemical Romance", 9);
            addMusic("My Shot", "Hamilton: The Musical", 10);
            addMusic("Cool for the Summer", "Demi Lovato", 7);
            addMusic("Helena", "My Chemical Romance", 10);
            addMusic("Scott Mescudi Vs. The World", "Kid Cudi", 8);
            addMusic("Man on the Moon", "Kid Cudi", 9);
            addMusic("Dear Jealousy", "MIKA", 5);
            addMusic("Headlights", "Eminem", 7);
            addMusic("Armed and Dangerous", "Juice Wrld", 7);
            addMusic("Topanga", "Trippie Redd", 7);
            addMusic("Roses", "OutKast", 6);
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
            cout << "**********    Recommendation    **********" << endl;
            m[dis(gen)].showSong();
            cout << "**********    Recommendation    **********" << endl;
        }
        
        void filterArtist(string artist_) {
            print("**********  Artist : " + artist_ + " **********"); // 이런식으로 가능하다!
            for(int i = 0; i < music_list_size; ++i) {
                if(m[i].getArtist() == artist_) {
                    m[i].showSong();
                }
            }
            print("**********  Artist : " + artist_ + " **********");
        }
        
        void filterRating(unsigned int rating_) {
            print("**********      Rating : " + to_string(rating_) + "      **********"); // int를 string으로!
            for(int i = 0; i < music_list_size; ++i) {
                if(m[i].getRating() == rating_) {
                    m[i].showSong();
                }
            }
            print("**********      Rating : " + to_string(rating_) + "      **********");
        }
};




void magicFunction() {
    EveryMusicList my_music_list;
    
    my_music_list.setMusicList();
    my_music_list.todayRec();
    my_music_list.filterArtist("The Weeknd");
    my_music_list.filterRating(5);
}

int main() {
    magicFunction();
    

    return 0;
}
