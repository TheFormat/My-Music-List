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
    cout << "My rating is " << rating << "!" << endl;
}

std::string MyMusic::getArtist() {
	return artist;
}

int MyMusic::getRating() {
	return my_rating;
}


