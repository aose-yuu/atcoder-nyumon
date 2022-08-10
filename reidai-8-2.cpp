#include <cctype>
#include <iostream>
#include <string>
using namespace std;

bool isAC(string S);

int main() {
  string S;
  cin >> S;

  isAC(S) ? cout << "AC" << endl : cout << "WA" << endl;
}

bool isAC(string S) {
  if (S[0] != 'A') return false;

  int num_c = 0;
  for (char c : S.substr(2, S.size()-3)) if (c == 'C') ++num_c;
  if (num_c != 1) return false;

  int num_big = 0;
  for (char c : S) if (isupper(c)) ++num_big;
  if (num_big != 2) return false;

  return true;
}
