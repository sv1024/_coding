#include <iostream>
#include <string>
#include <vector>

using namespace std;
int main() {
  long long n = 0;
  cin >> n;
  vector<long long> nums_vec;
  vector<long long> sorted_nums;
  for (long long i = 0; i < n; i++) {
    nums_vec.push_back(i + 1);
  }
  sorted_nums.push_back(nums_vec[0]);
  nums_vec.pop_back();
  cout << nums_vec.size();
  for (int i = 0; i < n; i++) {
  };

  return 0;
}
// https://cses.fi/problemset/task/1070
//*(&nums_arr + 1) - nums_arr
