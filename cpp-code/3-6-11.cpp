#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<vector<int>> A = {{1, 2, 3}, {4, 5}, {6, 7, 8, 9}};
  for (auto v : A) {
    for (auto a : v) {
      cout << a << " ";
    }
    cout << endl;
  }
}
