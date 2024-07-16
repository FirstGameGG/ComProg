#include <iostream>
using namespace std;

typedef struct Word_ {
    char word[20];
    int count;
} Word;

int main() {
    string input;
    int i, last_word = 0, find = 0;
    Word data[20];

    while (true) {
        cin >> input;
        if (input == "exit") {
            break;
        }
        else {
            find = 0;
            for (i = 0; i < last_word; i++){
            if (data[i].word == input) {
                find = 1;
                break;
                }
            }
        }
        if (find) data[i].count += 1;
        else{
            int j = 0;
            while (input[j] != '\0') {
                data[i].word[j] = input[j];
                j++;
            }
            data[i].word[j] = '\0';
            data[i].count = 1;
            last_word++;
        }
    }

    cout << "Output:" << endl;

    for (int i = 0; i < last_word; i++){
        cout << data[i].word << " = " << data[i].count << endl;
    }

    return 0;
}