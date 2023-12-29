#include <string>
#include <vector>
#include<iostream>
using namespace std;


int main()
{
	int num = 0;
	cin >> num;
	vector<int>dp(num,0);
	vector<int>array1;
	for (int i = 0; i < num; ++i) {
		int curr;
		cin >> curr;
		array1.push_back(curr);
	}
	if (num > 0) {
		dp[0] = array1[0];
	}
	if (num > 1) {
		dp[1] = array1[1] + array1[0];
	}
	if (num > 2) {
		dp[2] = max(array1[0] + array1[2], array1[1] + array1[2]);
	}
	for (int i = 3; i < num; ++i) {
		dp[i] = max(array1[i] + array1[i - 1] + dp[i - 3], array1[i] + dp[i - 2]);
	}
	cout << dp[num - 1];
}