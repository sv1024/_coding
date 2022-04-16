#include <iostream>
#include <string>
using namespace std;
int main() {
  long long n;
  cin >> n;
  long long sum = 0, sum_cin = 0, num;
  for (long long i = 0; i < n - 1; i++) {
    sum += i + 1;
	cin>> num; 
	sum_cin += num;
  }
  
  sum += n;
  cout<<sum - sum_cin;
  return 0;
}
//https://cses.fi/problemset/task/1083