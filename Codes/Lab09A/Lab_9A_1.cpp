#include <iostream>
using namespace std;

int main() {
  int input, i;

  cin >> input;

  for (i = 0; input > 0; i++) {
    if (input % 2 == 0) input /= 2;
    else input -= 1;
  
}
  cout << i;
}