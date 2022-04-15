#include <iostream>
#include <string> 
using namespace std;
long long operateNumber(long long number){
	if(number % 2 == 0){
		return number / 2;
	}
	return number * 3 + 1;
}

int main(){
	long long n = 0;
	string nums;
	cin>> n;
	while(n != 1){
		nums.append(to_string(n)+ " ");
		n = operateNumber(n);
	}
	if(n == 1){nums.append(to_string(n));}

	cout<<nums;
	return 0;
}


/* even 
----
2 
odd * 3 + 1
n = 3 
3 - 10 - 5 - 16 - 8 - 4 - 2 1
3 * 3 + 1 - 10 / 2 --- 5 * 3 + 1  */

