#include <iostream>
#include <string>
using namespace std;

int main() {
  string S = "AtCoder";
  cout << S.size() << endl;

  string T = "Contest";
  cout << S + T << endl;

  cout << S.substr(1) << endl;
  cout << S.substr(0, S.size()-2) << endl;
}
