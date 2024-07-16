#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

int main(){
    char buffer[100], name[100];
    double salary;
    double input;
    double sales;
    int i = 0;

    cin >> name;
    cin >> salary;
    while (i < 12){
        cin >> input;
        sales += input * 15 / 100;
        i++;
    }
    sprintf(buffer, "%s %.02lf", name, (salary * 12 + sales));
    cout << buffer;
}