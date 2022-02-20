import random

class MyMusic:
    def __init__(self, title, artist, rating):
        self.title = title
        self.artist = artist
        self.rating = rating

    def Rec(self):
        self.rating += 1;
        print("Recommended! -> " + self.title + "\n\n\n");


m = [
    MyMusic("AHHA", "Nate Ruess", 8),
    MyMusic("Runaway", "Kanye West", 9),
    MyMusic("Grace Kelly", "MIKA", 7),
    MyMusic("Gansta's Paradise", "Coolio", 8),
    MyMusic("Sunday Candy", "Chance the Rapper", 8),
    MyMusic("Fuck You", "Cee Lo Green", 8),
    MyMusic("Summertime Sadness", "Lana Del Rey", 8),
    MyMusic("In Your Eyes", "The Weeknd", 9),
    MyMusic("Boulevard of Broken Dreams", "Green Day", 7),
    MyMusic("Snow(Hey oh)", "Red Hot Chili Peppers", 9)
]

m[5].Rec()

print("Today's song is \"" + m[random.randrange(0, len(m))].title + "\"" + "\n\n\n")

for i in m:
    print(i.title + "\n" + str(i.rating) + "\n")
