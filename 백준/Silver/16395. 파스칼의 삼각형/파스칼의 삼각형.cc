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
	int n;
	int k;
	cin >> n >> k;
	vector<vector<int>>dp(n+1);
	dp[0].push_back(1);
	dp[1].push_back(1);
	dp[1].push_back(1);
	for (int i = 2; i < n; ++i) { 
		dp[i].push_back(1);
		for (int j = 1; j < i; ++j) {
			if (j >= k)continue;
			dp[i].push_back(dp[i - 1][j - 1] + dp[i - 1][j]);
		}
		dp[i].push_back(1);
	}
	cout << dp[n - 1][k - 1];
}