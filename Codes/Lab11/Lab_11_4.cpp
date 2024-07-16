#include <iostream>
using namespace std;

class Animal
{
protected:
    int happiness;
    int energy;
    int fullness;
    const int MAX_HAPPINESS = 100;
    const int MAX_ENERGY = 100;
    const int MAX_FULLNESS = 100;
    void limitStat();
public:
    Animal(int, int, int);
    int getHappiness();
    int getEnergy();
    int getFullness();
    void eat(int);
    void play(int);
    void sleep(int);
};

class Bird: public Animal
{
public:
    Bird(int, int, int);
    void fly(int);
    void sing();
};

Animal::Animal(int happiness, int energy, int fullness): happiness(happiness), energy(energy), fullness(fullness) {limitStat();};

void Animal::limitStat(){
    int *attList[3] = {&happiness, &energy, &fullness};
    for (int i = 0; i < 3; i++){
        if (*attList[i] > 100) *attList[i] = 100;
        else if (*attList[i] < 0) *attList[i] = 0;
        }
    };

int Animal::getHappiness() {return happiness;};
int Animal::getEnergy() {return energy;};
int Animal::getFullness() {return fullness;};

void Animal::eat(int food){
    if (food >= 0) fullness += food;
    if (fullness > MAX_FULLNESS) happiness -= 10;
    limitStat();
};
void Animal::play(int hour){
        if (fullness > 0 && fullness > 0 && hour >= 0) {
            energy -= hour * 10;
            fullness -= hour * 20;
            happiness += hour * 5;
            limitStat();
        }
    
};
void Animal::sleep(int hour){
    while (hour > 0){
        energy += 10;
        fullness -= 10;
        hour -= 1;
        limitStat();
    }
};


Bird::Bird(int happiness, int energy, int fullness): Animal(happiness, energy, fullness) {};
void Bird::fly(int hour){
    if (hour >= 0) energy -= 5 * hour;
    limitStat();
};
void Bird::sing() {
    happiness += 5;
    limitStat();
    };

void print(Animal a){
  cout << "happiness -> " << a.getHappiness() << endl;
  cout << "energy -> " << a.getEnergy() << endl; 
  cout << "fullness -> " << a.getFullness() << endl;
  cout << "==================================" << endl;
}
int main()
{
    Animal a(4,3,5);
    print(a);
    a.eat(566);
    print(a);
    a.sleep(4);
    print(a);
    a.play(5);
    print(a);
    a.play(5);
    print(a);
}