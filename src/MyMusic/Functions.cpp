#include "Functions.hpp"    // 보통 헤더파일을 구현하는 소스파일에서는 해당 헤더파일을 가장 위에 include 해줌

#include <iostream>     // 그리고나서 보통 한줄 띄고 필요한 헤더들을 include 해줌
#include <random>

using namespace std;    // cpp파일에서는 using namespace를 사용해도 헤더파일을 include하는 파일에서 영향을 안받기 때문에 해줘도 좋음 

// 나는 using 구문 이후로 두줄정도 떼고 본문 작성하는 편임. include 부분이랑 본문이랑 구분감이 생겨서 좋은듯
void print(string line) {
    printf("%s\n", line.c_str()); // printf하고 줄바꾸는 걸 하기 위해. 그리고 c_str은 c 스타일의 string이다.
}

void Functions::showMusicList() {
    for(auto e : my_music_list.musics) {
		e -> showSong(); // 자료구조 배열에서 리스트로 변경, e는 포인터니까 ->로 접근
	}
}

MyMusic* Functions::getRandomMusic() const {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> dis(0, my_music_list.musics.size() - 1);
    return getMusicAt(dis(gen));
}

MyMusic* Functions::getMusicAt(unsigned int index) const {
    int cnt = 0;
    for(auto e : my_music_list.musics) {
        if(cnt == index) {
            return e;
        }
        cnt++;
    }
    return nullptr;
}
	
void Functions::todayRec() {
    cout << "**********    Recommendation    **********" << endl << endl;
	getRandomMusic() -> showSong();
    cout << "**********    Recommendation    **********" << endl << endl;
}

void Functions::filterArtist(string artist_) {
    print("**********  Artist : " + artist_ + " **********\n"); // 이런식으로 가능하다!
    for(auto e : my_music_list.musics) {
        if(e->getArtist() == artist_) {
            e->showSong();
        }
    }
    print("**********  Artist : " + artist_ + " **********\n");
}

void Functions::filterMyRating(unsigned int my_rating_) {
    print("**********      My Rating : " + to_string(my_rating_) + "      **********\n"); // int를 string으로!
    for(auto e : my_music_list.musics) {
        if(e->getMyRating() == my_rating_) {
            e->showSong();
        }
    }
    print("**********      Rating : " + to_string(my_rating_) + "      **********\n");
}

void Functions::filterYear(unsigned int year_) {
	print("**********      Year : " + to_string(year_) + "      **********\n");
    for(auto e : my_music_list.musics) {
        if(e->getYear() == year_) {
            e->showSong();
        }
    }
	print("**********      Year : " + to_string(year_) + "      **********\n");
}