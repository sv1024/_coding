#include <cstdlib>
#include <iostream>
#include <locale>
#include <random>
#include <string>
#include <vector>

using namespace std;
int main() {
  long long n;
  bool is_permutable = true;
  cin >> n;
  vector<long long> permutations_vec;
  vector<long long> sorted_nums;

  for (long long i = 0; i < n; i++) {
    sorted_nums.push_back(i + 1);
  }

  permutations_vec.push_back(sorted_nums[0]);
  sorted_nums.erase(sorted_nums.begin());
  while (is_permutable) {

    for (long long i = 0; i < sorted_nums.size(); i++) {
      if (abs(permutations_vec[permutations_vec.size() - 1] - sorted_nums[i]) !=
          1) {
        permutations_vec.push_back(sorted_nums[i]);
        sorted_nums.erase(sorted_nums.begin() + i);
        i = sorted_nums.size();
      } else {
        if (i == sorted_nums.size() - 1) {
          is_permutable = false;
        }
      }
    }
  }
  for (long long i = 0; i < permutations_vec.size(); i++) {
    cout << permutations_vec[i] << " ";
  }
  return 0;
}

// https://cses.fi/problemset/task/1070
//*(&nums_arr + 1) - nums_arr
