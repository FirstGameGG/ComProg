#include <iostream>
#include <cmath>
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <string>

using namespace std;

int main(){
    //namespace
    //cout : console output
    int number;
    string text;
    string txt = "Hello";
    txt += "C++"; //strcat()

    bool isEASY = true;

    cout << "Hello C++";
    cout << endl; //end line
    cout << 1234 << 'a' << 88.8 << endl;
    cin >> number >> text;
    cout << "Number: " << number << endl << "Text: " << text << endl;
    cout << text << txt + "abc" << endl;
    cout << text << txt + "abc" << endl;


    for (int i = 0; i < text.size(); i++){
        cout << "[" << text[i] << "]";
    }
    double area = M_PI * 10 * 10;

    return 0;
}