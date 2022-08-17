#include <iostream>
using namespace std;

int main() {
  int a, b, result;
  cin >> a >> b;
  result = a * b;
  result % 2 == 0 ? cout << "Even" << endl : cout << "Odd" << endl;
}
