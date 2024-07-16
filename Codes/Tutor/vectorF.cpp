#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int birthdayCakeCandles(vector<int> candles) {
    int maxCandle = 0;
    int count = 0;
    for (int elem : candles){
        if (elem > maxCandle) maxCandle = elem;
    }
    for (int elem : candles){
        if (elem == maxCandle) count++;
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    vector<int> ar(n);

    for (int i = 0; i < n; ++i) {
        int temp;
        cin >> temp;
        ar[i] = temp;
    }

    int result = birthdayCakeCandles(ar);
    cout << result << endl;
    return 0;
}