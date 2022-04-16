#include <iostream>
#include <string>
using namespace std;
int main() {
  long long n = 0, cont = 0;
  cin >> n;
  long long nums_arr[n];
  for (long long i = 0; i < n; i++) {
    cin >> nums_arr[i];
  }

  for (long long int i = 0; i < n; i++) {
    if (i + 1 < n) {
      if (nums_arr[i] > nums_arr[i + 1] ) {
        cont += nums_arr[i] - nums_arr[i + 1];
		nums_arr[i + 1 ] += nums_arr[i] - nums_arr[i + 1];
      }
    }
  }
  cout << cont;
  return 0;
}
// https://cses.fi/problemset/task/1094
//*(&nums_arr + 1) - nums_arr
