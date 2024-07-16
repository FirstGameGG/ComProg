#include <iostream>
#include <vector>
#include <iomanip>
#include <cstdio>
using namespace std;

void signedRatio(vector<int> arr) {
    vector<int> arrCount(3, 0);
    for (int i = 0; i < arr.size(); i++){
        if (arr[i] > 0) arrCount[0] += 1;
        else if (arr[i] == 0) arrCount[1] += 1;
        else arrCount[2] += 1;
    }
    printf("%.06f\n", (double)arrCount[0]/(double)arr.size());
    printf("%.06f\n", (double)arrCount[2]/(double)arr.size());
    printf("%.06f\n", (double)arrCount[1]/(double)arr.size());
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

    signedRatio(ar);
    return 0;
}
