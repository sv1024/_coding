#include <cmath>
#include <iostream>
#include <iterator>
#include <ostream>
#include <string>
#include <vector>

using namespace std;
int main() {
  long long n;
  cin >> n;

  vector<long long> even_vec;
  vector<long long> odd_vec;

  for (long long i = 0; i < n; i++) {
    if ((i + 1) % 2 == 0) {
      even_vec.push_back(i + 1);
    } else {
      odd_vec.push_back(i + 1);
    }
  }
  if (even_vec.size() > 0 && odd_vec.size() > 0) {
    if (abs(even_vec[even_vec.size() - 1] - odd_vec[0]) != 1) {
      for (int i = 0; i < even_vec.size(); i++) {
        cout << even_vec[i] << " ";
      }
      for (int i = 0; i < odd_vec.size(); i++) {
        cout << odd_vec[i] << " ";
      }
    } else {
      cout << "NO SOLUTION";
    }
  } else {
    if (n == 1) {
      cout << 1;
    }
  }
  return 0;
}

// https://cses.fi/problemset/task/1070
//*(&nums_arr + 1) - nums_arr