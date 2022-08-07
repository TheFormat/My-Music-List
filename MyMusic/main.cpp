#include <iostream>
#include "MyMusic.hpp"

using namespace std;
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
