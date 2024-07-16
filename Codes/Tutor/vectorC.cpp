#include <iostream>
#include <vector>
using namespace std;

int diagonalDifference(vector<vector<int>> arr) {
    int x1, y, x2, SumA = 0, SumB = 0;
    const int size = arr.size();
    for (x1 = 0, y = 0, x2 = size - 1; y < size; x1++, y++, x2--){
        SumA += arr[y][x1];
        SumB += arr[y][x2];
    }
    return abs(SumA- SumB);
}

int main() {
    int n;
    cin >> n;
    vector<vector<int>> arr(n);

    for (int i = 0; i < n; ++i) {
        arr[i].resize(n);
        for (int j = 0; j < n; ++j) {
            int temp;
            cin >> temp;
            arr[i][j] = temp;
        }
    }

    int result = diagonalDifference(arr);
    cout << result << endl;
    return 0;
}