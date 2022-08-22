#include <iostream>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  bool flag = a * b % 2 == 0;
  string ans = "";
  flag ? ans = "Even" : ans = "Odd";
  cout << ans << endl;
}
