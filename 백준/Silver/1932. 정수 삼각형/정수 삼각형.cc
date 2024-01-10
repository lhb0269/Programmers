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
	cin >> n;
	vector<vector<int>>v;
	vector<vector<int>>dp(n);
	for (int i = 0; i < n; ++i) {
		vector<int>curr;
		for (int j = 0; j <= i; ++j) {
			int num;
			cin >> num;
			curr.push_back(num);
		}
		v.push_back(curr);
	}
	dp[n-1] = v[n-1];
	for (int i = n - 2; i >= 0; --i) { 
		for (int j = 0; j < v[i].size(); ++j) {
			dp[i].push_back(v[i][j] + max(dp[i + 1][j], dp[i + 1][j + 1]));
		}
	}
	cout << dp[0][0] << endl;
}