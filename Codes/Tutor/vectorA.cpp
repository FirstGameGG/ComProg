/*Simple Array Sum*/


#include <iostream>
#include <vector>
using namespace std;

int simpleArraySum(vector<int> ar)
{
    int total = 0;
    for (int i = 0; i < ar.size(); i++){
        total += ar[i];
    }
    return total;
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

    int result = simpleArraySum(ar);
    cout << result << endl;
    return 0;
}
