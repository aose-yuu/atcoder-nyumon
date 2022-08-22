#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> A = {3, 1, 4, 1, 5, 9, 2};
  cout << A[0] << endl;
  cout << A[2] << endl;
  cout << A[A.size()-1] << endl;
  cout << A[A.size()-2] << endl;
  A[2] = 10;
  cout << A[2] << endl;
}
