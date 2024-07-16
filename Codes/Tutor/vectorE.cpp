#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void miniMaxSum(vector<int> arr, long *minSum, long &maxSum) {
    *minSum = 9999999;
    maxSum = -9999999;

    vector<int> arrSum(5);

    for (int i = 0; i < arr.size(); i++){
        int sum = 0;
        for(int elem : arr) sum += elem;
        arrSum[i] = sum - arr[i];
    }

    for (int elem : arrSum){
        if (elem <= *minSum) *minSum = elem;
        if (elem >= maxSum) maxSum = elem;
    }
}

int main() {
    int n = 5;
    long min, max;
    vector<int> ar;

    for (int i = 0; i < n; ++i) {
        long temp;
        cin >> temp;
        ar.push_back(temp);
    }

    miniMaxSum(ar, &min, max);
    cout << min << " " << max << endl;
    return 0;
}