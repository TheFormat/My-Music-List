#include "MyMusics.hpp"

#include <iostream>

using namespace std;


void MyMusic::setInfo(std::string title, std::string artist, unsigned int my_rating, unsigned int year){
	this->title = title;
	this->artist = artist;
	this->my_rating = my_rating;
	this->year = year;
}

void MyMusic::showSong() {
	cout << "This song is " << title << " by " << artist << "." << endl;
    cout << "I knew this song in " << year << ", and " << "My rating is " << my_rating << "!" << endl << endl;
}

std::string MyMusic::getArtist() {
	return artist;
}

int MyMusic::getMyRating() {
	return my_rating;
}

int MyMusic::getYear() {
	return year;
}

void MyMusic::setArtist(string artist) {
	this->artist = artist;
}

void MyMusic::setMyRating(unsigned int my_rating) {
	this->my_rating = my_rating;
}

void MyMusic::setYear(unsigned int year) {
	this->year = year;
}

void MyMusicList::addMusic(string title, string artist, unsigned int my_rating, unsigned int year) {
	m[num_of_musics].setInfo(title, artist, my_rating, year);
	num_of_musics += 1;
}

void MyMusicList::makeMusicList() {
	addMusic("AHHA", "Nate Ruess", 8, 2015);
    addMusic("Runaway", "Kanye West", 9, 2019);
    addMusic("Grace Kelly", "MIKA", 4, 2015);
    addMusic("Gansta's Paradise", "Coolio", 6, 2020);
    addMusic("Sunday Candy", "Chance the Rapper", 6, 2020);
    addMusic("Fuck You", "Cee Lo Green", 6, 2019);
    addMusic("Summertime Sadness", "Lana Del Rey", 6, 2021);
    addMusic("In Your Eyes", "The Weeknd", 8, 2020);
    addMusic("Boulevard of Broken Dreams", "Green Day", 3, 2014);
    addMusic("Snow(Hey oh)", "Red Hot Chili Peppers", 5, 2022);
    addMusic("Kids", "MGMT", 5, 2022);
    addMusic("Erase your Social", "Lil Uzi Vert", 7, 2020);
    addMusic("I Miss You", "blink-182", 6, 2022);
    addMusic("There's a good reason these tables are numbered", "Panic! at the disco", 7, 2021);
    addMusic("Numb", "Linkin Park", 5, 2014);
    addMusic("Finesse", "Bruno Mars", 6, 2017);
    addMusic("Pursuit of Happiness", "Kid Cudi", 8, 2020);
    addMusic("La La Land", "Demi Lovato", 4, 2008);
    addMusic("She Knows", "J.Cole", 6, 2021);
    addMusic("Taco Tuesday", "Migos", 4, 2020);
    addMusic("Less than Zero", "The Weeknd", 8, 2022);
    addMusic("Bittersweet Poetry", "Kanye West", 9, 2020);
    addMusic("Through the Wire", "Kanye West", 8, 2020);
    addMusic("Two Words", "Kanye West", 7, 2020);
    addMusic("Is there Someone Else?", "The Weeknd", 8, 2022);
    addMusic("She doesn't get it", "The Format", 5, 2019);
    addMusic("The First Single", "The Format", 8, 2019);
    addMusic("Famous Last Words", "My Chemical Romance", 9, 2008);
    addMusic("My Shot", "Hamilton: The Musical", 10, 2017);
    addMusic("Cool for the Summer", "Demi Lovato", 7, 2015);
    addMusic("Helena", "My Chemical Romance", 10, 2008);
    addMusic("Scott Mescudi Vs. The World", "Kid Cudi", 8, 2021);
    addMusic("Man on the Moon", "Kid Cudi", 9, 2021);
    addMusic("Dear Jealousy", "MIKA", 5, 2020);
    addMusic("Headlights", "Eminem", 7, 2015);
    addMusic("Armed and Dangerous", "Juice Wrld", 7, 2018);
    addMusic("Topanga", "Trippie Redd", 7, 2019);
    addMusic("Roses", "OutKast", 6, 2020);
    addMusic("Save your Tears", "The Weeknd", 8, 2020);
    addMusic("Scared to Live", "The Weeknd", 7, 2020);
    addMusic("Hardest to Love", "The Weeknd", 6, 2020);
    addMusic("Sky Might Fall", "Kid Cudi", 8, 2022);
    addMusic("Simple as..", "Kid Cudi", 5, 2022);
    addMusic("Heart of a Lion", "Kid Cudi", 7, 2022);
    addMusic("Stars in the Sky", "Kid Cudi", 7, 2022);
    addMusic("Up Up & Away", "Kid Cudi", 7, 2022);
    addMusic("All Along", "Kid Cudi", 5, 2022);
    addMusic("Mojo so Dope", "Kid Cudi", 7, 2021);
    addMusic("Trapped in my Mind", "Kid Cudi", 7, 2021);
    addMusic("GHOST!", "Kid Cudi", 7, 2021);
    addMusic("Marijuana", "Kid Cudi", 6, 2021);
    addMusic("Mr.Brightside", "The Killers", 8, 2022);
    addMusic("Love you like a Love Song", "Selena Gomez", 3, 2014);
    addMusic("I Write Sins Not Tragedies", "Panic! at the disco", 8, 2021);
    addMusic("Lying is the Most Fun a Girl can Have without Taking her Clothes Off", "Panic! at the disco", 7, 2021);
    addMusic("LA Devotee", "Panic! at the disco", 4, 2022);
    addMusic("Work out", "J.Cole", 4, 2022);
    addMusic("Can't Take Enough", "J.Cole", 4, 2022);
    addMusic("Washington's on Your Side", "Hamilton: The Musical", 9, 2017);
    addMusic("7 Things", "Miley Cyrus", 7, 2008);
    addMusic("We Can't Stop", "Miley Cyrus", 4, 2015);
    addMusic("Wrecking Ball", "Miley Cyrus", 3, 2015);
    addMusic("Cementry Drive", "My Chemical Romance", 5, 2021);
    addMusic("Far Too Yound to Die", "Panic! at the disco", 4, 2022);
    addMusic("So Appalled", "Kanye West", 7, 2021);
    addMusic("Spaceship", "Kanye West", 4, 2020);
    addMusic("All Falls Down", "Kanye West", 5, 2020);
    addMusic("Never Let Me Down", "Kanye West", 8, 2008);
    addMusic("i", "Kendrick Lamar", 9, 2021);
	addMusic("Mr.Rager", "Kid Cudi", 6, 2020);
	addMusic("Erase Me", "Kid Cudi", 7, 2020);
}