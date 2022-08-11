#include <iostream>
#include <string>
using namespace std;

int calc(int n);

int main() {
  int N, A, B;
  cin >> N >> A >> B;

  int result = 0;
  for (int i = 1; i <= N; ++i) {
    int sum = calc(i);
    if (sum >= A && sum <= B) result += i;
  }
  cout << result <<endl;
}

int calc(int n) {
  string str = to_string(n);
  int res = 0;
  for (auto c : str) {
    res += c - '0';
  }
  return res;
}
