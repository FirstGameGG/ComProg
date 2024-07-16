#include <iostream>
using namespace std;

class Transportation
{
public:
 virtual double fare() = 0;
};

class Taxi : public Transportation
{
private:
    double distance;
public:
    void setDistance(double distance){
        if (distance >= 0) this->distance = distance;
    }
    double fare(){
        double fare = 35 + 2 * distance;
        return fare;
    }
};

class BmtaBus : public Transportation
{
public:
    double fare(){
        double fare = 6.50;
        return fare;
    }
};

class BTS : public Transportation
{
private:
    int station;
public:
    void setStation(int station){
        this-> station = station;
    }
    double fare(){
        double fare = 15 + 5 * station;
        return fare;
    }
};

class Passenger 
{
private:
    double totalFare;
public:
    Passenger() : totalFare(0) {};
    void (addTransportation(Transportation &typeTrans)){
        totalFare += typeTrans.fare();
    }
    double getTotalFare(){
        return totalFare;
    }
};

int main()
{
    Passenger passenger;
    while(1) {
        char transportType;
        cin >> transportType;
        if (transportType == 'A') {
            Taxi *taxi = new Taxi();
            double distance;
            cin >> distance;
            taxi->setDistance(distance);
            passenger.addTransportation(*taxi);
        } else if (transportType == 'B') {
            BmtaBus *bus = new BmtaBus();
            passenger.addTransportation(*bus);
        } else if (transportType == 'C') {
            BTS *bts = new BTS();
            int station;
            cin >> station;
            bts->setStation(station);
            passenger.addTransportation(*bts);
        } else {
            break;
        }
    }
    cout << "Total Fare: " << passenger.getTotalFare() << endl;
}