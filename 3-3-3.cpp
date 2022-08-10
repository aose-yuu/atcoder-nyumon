#include <iostream>
using namespace std;

int main() {
  int H, A;
  cin >> H >> A;

  int counter = 0;
  while (H > 0) {
    H -= A;
    ++counter;
  }

  cout << counter <<endl;
}
