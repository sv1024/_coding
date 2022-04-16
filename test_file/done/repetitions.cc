#include <iostream>
#include <string>
using namespace std;
int main() {
  string chain;
  long long n = 0, temp = 1;
  cin >> chain;

  for (long long i = 0; i < chain.length(); i++) {
    if (i + 1 < chain.length() && chain[i] == chain[i + 1]) {
      temp++;
    } else {
      temp = 1;
    }
    if (temp > n) {
      n = temp;
    };
  }
  cout << n;
  return 0;
}
// https://cses.fi/problemset/task/1069