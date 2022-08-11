#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
  vector<string> vs = {"banana", "orange", "apple", "grape", "cherry"};
  sort(vs.begin(), vs.end());
  for (auto s : vs) {
    cout << s <<endl;
  }
}
