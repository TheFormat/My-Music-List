#include "Functions.hpp"    // 보통 헤더파일을 구현하는 소스파일에서는 해당 헤더파일을 가장 위에 include 해줌

#include <iostream>     // 그리고나서 보통 한줄 띄고 필요한 헤더들을 include 해줌
#include <random>

using namespace std;    // cpp파일에서는 using namespace를 사용해도 헤더파일을 include하는 파일에서 영향을 안받기 때문에 해줘도 좋음 

// 나는 using 구문 이후로 두줄정도 떼고 본문 작성하는 편임. include 부분이랑 본문이랑 구분감이 생겨서 좋은듯
void print(string line) {
    printf("%s\n", line.c_str()); // printf하고 줄바꾸는 걸 하기 위해. 그리고 c_str은 c 스타일의 string이다.
}

void Functions::showMusicList() {
    for(int i = 0; i < num_of_musics; ++i) {
        m[i].showSong();
    }
}

void Functions::todayRec() {
    random_device rd;   
    mt19937 gen(rd());
    uniform_int_distribution<int> dis(0,num_of_musics - 1);
    cout << "**********    Recommendation    **********" << endl;
    m[dis(gen)].showSong();
    cout << "**********    Recommendation    **********" << endl;
}

void Functions::filterArtist(string artist_) {
    print("**********  Artist : " + artist_ + " **********"); // 이런식으로 가능하다!
    for(int i = 0; i < num_of_musics; ++i) {
        if(m[i].getArtist() == artist_) {
            m[i].showSong();
        }
    }
    print("**********  Artist : " + artist_ + " **********");
}

void Functions::filterMyRating(unsigned int my_rating_) {
    print("**********      My Rating : " + to_string(my_rating_) + "      **********"); // int를 string으로!
    for(int i = 0; i < num_of_musics; ++i) {
        if(m[i].getMyRating() == my_rating_) {
            m[i].showSong();
        }
    }
    print("**********      Rating : " + to_string(my_rating_) + "      **********");
}
