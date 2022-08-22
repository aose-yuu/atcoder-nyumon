#include <iostream>
using namespace std;

int main() {
  int H, A, count;
  cin >> H >> A;
  H % A == 0 ? count = H / A : count = H / A + 1;
  cout << count << endl;
}
