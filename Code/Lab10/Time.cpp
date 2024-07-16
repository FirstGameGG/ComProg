#include <sstream>
#include <iomanip>


using namespace std;

class Time 
{
private:
    int hour, minute, second;

public:
    Time(int h, int m, int s) : hour(h), minute(m), second(s) {}
    Time(int duration) : hour(duration / 3600), minute((duration % 3600) / 60), second((duration % 3600) % 60) {}

    int getHour() const { return hour; }
    int getMinute() const { return minute; }
    int getSecond() const { return second; }

    void setHour(int h) { hour = h; }
    void setMinute(int m) { minute = m; }
    void setSecond(int s) { second = s; }

    int getDuration() const { return hour * 3600 + minute * 60 + second; }
    Time add(const Time& other) const { return Time(getDuration() + other.getDuration()); }
    int subtract(const Time& other) const { return abs(getDuration() - other.getDuration()); }
    int equals(const Time& other) const { return getDuration() == other.getDuration(); }
    string toString() const {
        stringstream ss;
        ss << setw(2) << setfill('0') << hour << ":"
           << setw(2) << setfill('0') << minute << ":"
           << setw(2) << setfill('0') << second;
        return ss.str();
    }
};
