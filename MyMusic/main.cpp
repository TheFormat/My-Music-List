#include <iostream>
#include "MyMusics.hpp"
#include "Functions.hpp"

using namespace std;
void magicFunction() {
    MyMusicList my_music_list;
    
    my_music_list.makeMusicList();
    my_music_list.todayRec();
    my_music_list.filterArtist("The Weeknd");
    my_music_list.filterMyRating(5);
}

int main() {
    magicFunction();
    
    return 0;
}
