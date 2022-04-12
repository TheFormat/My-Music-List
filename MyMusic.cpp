#include <iostream>
#include <random>

using namespace std;

class MyMusic {
    private :
        string title;
        string artist;
        unsigned int rating;
    
    public :
        void SetInfo(string title_, string artist_, unsigned int rating_ ) {
            this -> title = title_;
            this -> artist = artist_;
            this -> rating = rating_;
        }
        
        void ShowSong() {
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





int main() {
    MyMusic m1;
    MyMusic m2;
    m1.SetInfo("AHHA", "Nate Ruess", 8);
    m2.SetInfo("Runaway", "Kanye West", 9);
    m1.ShowSong();
    m2.ShowSong();


    return 0;
}
