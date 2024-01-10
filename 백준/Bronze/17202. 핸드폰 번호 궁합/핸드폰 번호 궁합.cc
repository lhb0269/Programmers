#include <string>
#include <vector>
#include<algorithm>
#include<queue>
#include<math.h>
#include<numeric>
#include<iostream>
using namespace std;


int main()
{
	cin.tie(NULL)->ios::sync_with_stdio(false);
	cout.tie(NULL);
	vector<vector<int>>v(2, vector<int>(8, 0));
	vector<int>v2;
	vector<vector<int>>dp(15);
	for (int i = 0; i < 2; ++i) {
		string s;
		cin >> s;
		for (int j = 0; j < s.length(); ++j) {
			int num = int(s[j]) - '0';
			v[i][j] = num;
		}
	}
	for (int i = 0; i < 8; ++i) {
		v2.push_back(v[0][i]);
		v2.push_back(v[1][i]);
	}
	dp[0] = v2;
	for (int i = 1; i < 15; ++i) {
		for (int j = 0; j < dp[i - 1].size() - 1; ++j) {
			dp[i].push_back((dp[i - 1][j] + dp[i - 1][j + 1]) % 10);
		}
	}
	cout << dp[dp.size()-1][0]<< dp[dp.size() - 1][1];
}