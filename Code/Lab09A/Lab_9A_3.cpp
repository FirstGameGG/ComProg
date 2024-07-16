#include <iostream>
#include <vector>


using namespace std;

int main(){
    int n = 0;
    int max = 0;
    int j = 0;

    cin >> n;
    vector<int> criminal(n);

    for (int i = 0; i < n; i++){
        cin >> criminal[i];
        if (criminal[i] > max) max = criminal[i];
    }

    for (int i = 0; i < criminal.size() - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (criminal[j] > criminal[j + 1]) {
                swap(criminal[j], criminal[j + 1]);
            }
        }
    }

    for (int i = 0; i < max; i++, j++){
        if (criminal[i] != j + 1 && criminal[i] != 0){
            criminal.insert(criminal.begin() + i, 0);
            continue;
        }
    }

    for (int i = 0; i < criminal.size(); i++){
        if (criminal[i] == 0 && i % 2 == 0) printf("%d ", i + 1);
        }
    printf("\n");
    for (int i = 0; i < criminal.size(); i++){
        if (criminal[i] == 0 && i % 2 != 0) printf("%d ", i + 1);
        }
    printf("\n");
    }
