#include <stdio.h>
#include <stdlib.h>
#include <time.h>


typedef struct {
    char title[100];
    char artist[100];
    unsigned int rating;
} MyMusic;

void Rec(MyMusic* i) {
    i->rating += 1; // (*i).rating보다 표현하기 쉬운 방법.
    printf("Recommended! -> %s\n\n", i->title);
}


int main() {
    MyMusic m[] = { //m[] 숫자 없애면 배열 개수 지알아서 
        {
            .title = "AHHA",
            .artist = "Nate Ruess",
            .rating = 8
        },
        {
            .title = "Runaway",
            .artist = "Kanye West",
            .rating = 9
        },
        {
            .title = "Grace Kelly",
            .artist = "MIKA",
            .rating = 7
        },
        {
            .title = "Gansta's Paradise",
            .artist = "Coolio",
            .rating = 8
        },
        {
            .title = "Sunday Candy",
            .artist = "Chance the Rapper",
            .rating = 8
        },
        {
            .title = "Fuck You",
            .artist = "Cee Lo Green",
            .rating = 8
        },
        {
            .title = "Summertime Sadness",
            .artist = "Lana Del Rey",
            .rating = 8
        },
        {
            .title = "In Your Eyes",
            .artist = "The Weeknd",
            .rating = 9
        },
        {
            .title = "Boulevard of Broken Dreams",
            .artist = "Green Day",
            .rating = 7
        },
        {
            .title = "Snow(Hey oh)",
            .artist = "Red Hot Chili Peppers",
            .rating = 9
        },
        {
            .title = "Kids",
            .artist = "MGMT",
            .rating = 8
        },
        {
            .title = "Erase your Social",
            .artist = "Lil Uzi Vert",
            .rating = 8
        },
        {
            .title = "I Miss You",
            .artist = "blink-182",
            .rating = 9
        },
        {
            .title = "I write Sins, not Tragedies",
            .artist = "Panic! at the Disco",
            .rating = 9
        }
    };

    /*
    // other way... 
    m[0].title = "AHHA",
    m[0].artist = "Nate Ruess",
    m[0].rating = 8
    
    m[1].title = "Runaway",
    m[1].artist = "Kanye West",
    m[1].rating = 9->이런 형식으로 해야한다..
    */
    Rec(&m[5]);//추천
    
    srand(time(NULL));
    printf("Today's song is \"%s\"\n\n\n", m[rand()%10].title);//랜덤하게
    
    for(int i = 0; i < 10; ++i) {
        printf("%s\n%d\n\n",m[i].title,m[i].rating);
    }
    
    return 0;
}
