#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  for (int i = 1; i <= n; ++i) {
    i % 5 == 0 && i % 3 == 0 ? cout << "FizzBuzz" << endl :
    i % 5 == 0 ? cout << "Buzz" << endl :
    i % 3 == 0 ? cout << "Fizz" << endl :
    cout << i << endl;
  }
}
