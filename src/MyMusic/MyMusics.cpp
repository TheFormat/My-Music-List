#include "MyMusics.hpp"

#include <iostream>

using namespace std;


void MyMusic::setInfo(std::string title, std::string artist, unsigned int my_rating){
	this->title = title;
	this->artist = artist;
	this->my_rating = my_rating;
}

void MyMusic::showSong() {
	cout << "This song is " << title << " by " << artist << "." << endl;
    cout << "My rating is " << my_rating << "!" << endl;
}

std::string MyMusic::getArtist() {
	return artist;
}

int MyMusic::getMyRating() {
	return my_rating;
}

void MyMusic::setArtist(string artist) {
	this->artist = artist;
}

void MyMusic::setMyRating(unsigned int my_rating) {
	this->my_rating = my_rating;
}

void MyMusicList::addMusic(string title, string artist, unsigned int my_rating) {
	m[num_of_musics].setInfo(title, artist, my_rating);
	num_of_musics += 1;
}

void MyMusicList::makeMusicList() {
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