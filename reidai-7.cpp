#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> a(N);
  for (auto& i : a) cin >> i;
  sort(a.begin(), a.end(), greater<int>());
  int result = 0;
  for (int i = 0; i < N; ++i) i % 2 == 0 ? result += a[i] : result -= a[i];
  cout << result << endl;
}

