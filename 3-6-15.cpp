#include <iostream>
#include <vector>
#include <string>
using namespace std;

// 0: down, 1: right, 2: up, 3: left, 4:right-down, 5: right-up, 6: left-up, 7: left-down
vector<int> DX = {0, 1, 0, -1, 1, 1, -1, -1};
vector<int> DY = {1, 0, -1, 0, 1, -1, -1, 1};

int main() {
  int H, W;
  cin >> H >> W;
  vector<string> S(H);
  for (auto& row : S) {
    cin >> row;
  }

  for (int i = 0; i < H; ++i) {
    for (int j = 0; j < W; ++j) {
      if (S[i][j] != '.') {
        continue;
      }

      int counter = 0;
      for (int d = 0; d < 8; ++d) {
        int ni = i + DY[d];
        int nj = j + DX[d];

        if (ni < 0 || ni >= H || nj < 0 || nj >= W) {
          continue;
        }

        if (S[ni][nj] == '#') ++counter;
      }
      S[i][j] = '0' + counter;
    }
  }

  for (auto row : S) {
    cout << row << endl;
  }
}
