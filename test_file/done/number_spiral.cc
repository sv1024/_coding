#include <iostream>

using namespace std;
int main() {
  long long n, row, column;
  cin >> n;

  while (n--) {
    cin >> row >> column;
    if (row == column) {
      cout << row * row - row + 1 << endl;
    } else {
      if (column > row) {
        if (column % 2 == 0) {
          cout << (column - 1) * (column - 1) + row << endl;
        } else {
          cout << column * column - row + 1 << endl;
        }
      } else {
        if (row % 2 == 0) {
          cout << row * row - column + 1 << endl;
        } else {
          cout << (row - 1) * (row - 1) + column << endl;
        }
      }
    }
  }

  return 0;
}

// https://cses.fi/problemset/task/1071
//*(&nums_arr + 1) - nums_arr