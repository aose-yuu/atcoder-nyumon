#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  int H, W;
  cin >> H >> W;
  vector<vector<int>> vs(H, vector<int>(W));
  vector<vector<char>> vs2(H, vector<char>(W));

  for (int i = 0; i < H; ++i) {
    string name;
    cin >> name;
    for (int j = 0; j < W; ++j) {
      vs.at(i).at(j) = name[j];
    }
  }

  for (int i = 0; i < H; ++i) {
    for (int j = 0; j < W; ++j) {
      if (vs.at(i).at(j) == '#') {
        vs.at(i-1).at(j-1) += 1;
        vs.at(i-1).at(j) += 1;
        vs.at(i-1).at(j+1) += 1;
        vs.at(i).at(j-1) += 1;
        vs.at(i).at(j+1) += 1;
        vs.at(i+1).at(j-1) += 1;
        vs.at(i+1).at(j) += 1;
        vs.at(i+1).at(j+1) += 1;
      }
    }
  }

  for (int i = 0; i < H; ++i) {
    for (int j = 0; j < W; ++j) {
      if (vs.at(i).at(j) == 35) vs2.at(i).at(j) = '#';
      if (vs.at(i).at(j) == 46) vs2.at(i).at(j) = '0';
      if (vs.at(i).at(j) == 47) vs2.at(i).at(j) = '1';
      if (vs.at(i).at(j) == 48) vs2.at(i).at(j) = '2';
    }
  }

  for (int i = 0; i < H; ++i) {
    for (int j = 0; j < W; ++j) {
      cout << vs2.at(i).at(j) << "";
    }
    cout << endl;
  }
}
