import random #include 랜덤이랑 같은 것임

class MyMusic:
    def __init__(self, title : str, artist : str, rating : int):
        self.title : str = title
        self.artist : str = artist
        self.rating : int = int(rating) #생성자 뭐시기

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
] # 리스트

m[random.randrange(0, len(m))].Rec() #랜덤추천으로 바꿈, "리스트 안에 있는 요소"."함수" 이렇게 쓴다.->이것이 객체지향프로그래밍

print("Today's song is \"" + m[random.randrange(0, len(m))].title + "\"\n\n\n")

for i in m:
    print(i.title + "\n" + str(i.rating) + "\n")
