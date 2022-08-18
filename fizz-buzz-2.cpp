#include <iostream>
using namespace std;

int main() {
  int N;
  cin >> N;
  for (int i = 1; i <= N; ++i) {
    i % 3 == 0 && i % 5 == 0
    ? cout << "FizzBuzz" << endl
    : i % 5 == 0
      ? cout << "Buzz" << endl
      : i % 3 == 0
        ? cout << "Fizz" << endl
        : cout << i << endl;
  }
}
