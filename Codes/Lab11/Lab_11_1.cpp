#include <iostream>
#include <string>
using namespace std;

class MusicPlaylist{
private:
    string music[20];
    int currentTrack;

public:
    MusicPlaylist() {};
    void add(string name){
        int i = 0;
        while (music[i] != "\0") i++;
        music[i] = name;
    }
    void setCurrentTrack(int i){
        this->currentTrack = i;
    }
    string play(){
        return music[currentTrack - 1];
    }
};


int main()
{
    MusicPlaylist mp;
    mp.add("Shape of You");
    mp.add("That's What I Like");
    mp.add("Humble");
    mp.setCurrentTrack(1);
    cout << mp.play() << endl; // แสดงเพลงลำดับที่ 1 คือ Shape of You
}