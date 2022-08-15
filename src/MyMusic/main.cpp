#include <iostream>
#include "MyMusics.hpp"
#include "Functions.hpp"

using namespace std;
void magicFunction() {
    Functions function;
    
    function.my_music_list.makeMusicList();
    function.todayRec();
    function.filterArtist("Kid Cudi");
    function.filterMyRating(4);
}

int main() {
    magicFunction();
    
    return 0;
}