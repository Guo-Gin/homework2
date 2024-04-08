#include<iostream>
using namespace std;
#include<limits.h>
int main() {
	int nums[100];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> nums[i];
	}
	int result = INT_MIN;
	long long int count = 0;
	for (int i = 0; i < n; i++) {
		count = 0;
		for (int j = i; j < n; j++) {
			count += nums[j];
			result = count > result ? count : result;
		}
	}
	cout<<max(0,result); 
	return 0;
}
/*
3
3 2 1
2
-2147483648 -2
4
-3 -2 -4 -6
4
1 2 -4 0
*/
