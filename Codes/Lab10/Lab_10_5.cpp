#include <iostream>
#include <cstdlib>
#include <sstream>
#include <cmath>
#include <string>
#include <iomanip>

using namespace std;

class Time
{
private:
    int hour;
    int minute;
    int second;
public:
    Time(int hour, int minute, int second){
        this->hour = hour;
        this->minute = minute;
        this->second = second;
    }
    Time(int duration){
        if (duration >= (60 * 60 * 24)) duration %= (60* 60 * 24);
            hour = duration / 3600;
            minute = (duration % 3600) / 60;
            second = duration % 60;
    }
    void setHour(int hour) {
        this->hour = hour;
    }
    void setMinute(int minute) {
        this->minute = minute;
    }
    void setSecond(int second) {
        this->second = second;
    }

    int getHour() const{
        return hour;
    }
    int getMinute() const{
        return minute;
    }
    int getSecond() const{
        return second;
    } 
    int getDuration(){
        int totalSeconds = (hour * 3600) + (minute * 60) + second;
        return totalSeconds;
        }
    Time add(Time other){
        int totalSeconds = getDuration() + other.getDuration();
        return Time(totalSeconds);
    }
    int	subtract(Time other){
        int totalSeconds;
        if (getDuration() >= other.getDuration()) totalSeconds = getDuration() - other.getDuration();
        else totalSeconds = (60 * 60 * 24) - other.getDuration() + getDuration();
        return totalSeconds;
    }
    int	equals(Time other){
        if (getDuration() == other.getDuration()) return 1;
        else return 0;
    }
    string toString(){
        char output[8];
        sprintf(output, "%02d:%02d:%02d", hour, minute, second);
        return output;
    }
};

int main()
{
   Time time(0,0,0);
   cout << time.toString() << endl;

   Time a(0, 0, 1);
   Time b(23, 59, 59);

   cout << a.subtract(b);
}
