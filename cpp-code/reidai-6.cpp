#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  for (auto& a : A) cin >> a;

  bool flag = false;
  int counter = 0;

  while (true) {
    for (int i = 0; i < N; ++i) {
      A[i] % 2 == 0 ? A[i] /= 2 : flag = true;
    }
    if (flag) break;
    ++counter;
  }

  cout << counter << endl;
}
