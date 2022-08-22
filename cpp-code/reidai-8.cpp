#include <algorithm>
#include <cctype>
#include <iostream>
#include <string>
using namespace std;

bool check_bool(string S);

int main() {
  string S;
  cin >> S;
  (check_bool(S)) ? cout << "AC" << endl : cout << "WA" << endl;
}

bool check_bool(string S) {
  if (S[0] != 'A') return false;

  if (S.substr(2, S.size()-1).find('C') == string::npos) return false;

  int counter1 = 0;
  for (char s : S.substr(2, S.size()-1)) if (s == 'C') ++counter1;
  if (counter1 > 1) return false;

  if (isupper(S[1]) || isupper(S[S.size()-1])) return false;

  int counter2 = 0;
  for (char s : S) if (s != 'A' || s != 'C') if (islower(s)) ++counter2;
  if (counter2 != S.size()-2) return false;
  return true;
}
