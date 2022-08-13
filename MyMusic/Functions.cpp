#include "Functions.hpp"    // 보통 헤더파일을 구현하는 소스파일에서는 해당 헤더파일을 가장 위에 include 해줌

#include <iostream>     // 그리고나서 보통 한줄 띄고 필요한 헤더들을 include 해줌
#include <random>

using namespace std;    // cpp파일에서는 using namespace를 사용해도 헤더파일을 include하는 파일에서 영향을 안받기 때문에 해줘도 좋음 

// 나는 using 구문 이후로 두줄정도 떼고 본문 작성하는 편임. include 부분이랑 본문이랑 구분감이 생겨서 좋은듯
void print(string line) {
    printf("%s\n", line.c_str()); // printf하고 줄바꾸는 걸 하기 위해. 그리고 c_str은 c 스타일의 string이다.
}

void MyMusic::setInfo(string title, string artist, unsigned int rating) { // :: 로 클래스 접근
    this->title = title; // private 안의 변수와 public 안 변수가 이름이 같을 때, this포인터 사용 
    this->artist = artist; // 하지만 변수 이름이 다르다면 굳이 할 필요가 없다.
    this->rating = rating; // ex) title_로 해놓고 title = title_하면 된다.
}

void MyMusic::showSong() {
    cout << "This song is " << title << " by " << artist << "." << endl;
    cout << "My rating is " << rating << "!" << endl;
} // 노래, 아티스트, 점수 보여주기

string MyMusic::getArtist() {
    return artist;
} // 아티스트 필터 getter

int MyMusic::getRating() {
    return rating;
} // 점수 필터 getter

void MyMusic::setArtist(string artist) {
    this->artist = artist;
} // 아티스트 필터 setter

void MyMusic::setRating(unsigned int rating) {
    this->rating = rating; // 점수 필터 setter
}


void EveryMusicList::addMusic(string title, string artist, int rating) {
    m[music_list_size].setInfo(title, artist, rating);
    music_list_size += 1;
    
}

void EveryMusicList::setMusicList() {
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
    addMusic("Save your Tears", "The Weeknd", 8);
    addMusic("Scared to Live", "The Weeknd", 7);
    addMusic("Hardest to Love", "The Weeknd", 6);
    addMusic("Sky Might Fall", "Kid Cudi", 8);
    addMusic("Simple as..", "Kid Cudi", 5);
    addMusic("Heart of a Lion", "Kid Cudi", 7);
    addMusic("Stars in the Sky", "Kid Cudi", 7);
    addMusic("Up Up & Away", "Kid Cudi", 7);
    addMusic("All Along", "Kid Cudi", 5);
    addMusic("Mojo so Dope", "Kid Cudi", 7);
    addMusic("Trapped in my Mind", "Kid Cudi", 7);
    addMusic("GHOST!", "Kid Cudi", 7);
    addMusic("Marijuana", "Kid Cudi", 6);
    addMusic("Mr.Brightside", "The Killers", 8);
    addMusic("Love you like a Love Song", "Selena Gomez", 3);
    addMusic("I Write Sins Not Tragedies", "Panic! at the disco", 8);
    addMusic("Lyin is the Most Fun a Girl can Have without Taking her Clothes Off", "Panic! at the disco", 7);
    addMusic("LA Devotee", "Panic! at the disco", 4);
    addMusic("Work out", "J.Cole", 4);
    addMusic("Can't Take Enough", "J.Cole", 4);
    addMusic("Washington's on Your Side", "Hamilton: The Musical", 9);
    addMusic("7 Things", "Miley Cyrus", 7);
    addMusic("We Can't Stop", "Miley Cyrus", 4);
    addMusic("Wrecking Ball", "Miley Cyrus", 3);
    addMusic("Cementry Drive", "My Chemical Romance", 5);
    addMusic("Far Too Yound to Die", "Panic! at the disco", 4);
    addMusic("So Appalled", "Kanye West", 7);
    addMusic("Spaceship", "Kanye West", 4);
    addMusic("All Falls Down", "Kanye West", 5);
    addMusic("Never Let Me Down", "Kanye West", 8);
    addMusic("i", "Kendrick Lamar", 9);

}

void EveryMusicList::showMusicList() {
    for(int i = 0; i < music_list_size; ++i) {
        m[i].showSong();
    }
}

void EveryMusicList::todayRec() {
    random_device rd;   
    mt19937 gen(rd());
    uniform_int_distribution<int> dis(0,music_list_size - 1);
    cout << "**********    Recommendation    **********" << endl;
    m[dis(gen)].showSong();
    cout << "**********    Recommendation    **********" << endl;
}

void EveryMusicList::filterArtist(string artist_) {
    print("**********  Artist : " + artist_ + " **********"); // 이런식으로 가능하다!
    for(int i = 0; i < music_list_size; ++i) {
        if(m[i].getArtist() == artist_) {
            m[i].showSong();
        }
    }
    print("**********  Artist : " + artist_ + " **********");
}

void EveryMusicList::filterRating(unsigned int rating_) {
    print("**********      Rating : " + to_string(rating_) + "      **********"); // int를 string으로!
    for(int i = 0; i < music_list_size; ++i) {
        if(m[i].getRating() == rating_) {
            m[i].showSong();
        }
    }
    print("**********      Rating : " + to_string(rating_) + "      **********");
}
