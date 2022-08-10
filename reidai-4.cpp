#include <iostream>
using namespace std;

bool check_ok(int i, int K);

int main() {
  int K, A, B;
  cin >> K >> A >> B;
  bool flag = false;
  for (int i = A; i < B; ++i) {
    if (check_ok(i, K)) flag = true;
  }
  flag ? cout << "OK" << endl : cout << "NG" << endl;

}

bool check_ok(int i, int K) {
  return i % K == 0 ? true : false;
}
