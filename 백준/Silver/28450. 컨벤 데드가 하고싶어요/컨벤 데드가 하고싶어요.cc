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
	int N, M;
	cin >> N >> M;
	vector<vector<long long>>v;
	vector<vector<long long>>dp;
	for (int i = 0; i < N; ++i) {
		vector<long long>curr;
		for (int j = 0; j < M; ++j) {
			int num;
			cin >> num;
			curr.push_back(num);
		}
		v.push_back(curr);
	}
	dp = v;
	int cpn;//은신력
	cin >> cpn;
	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < M; ++j) {
			if (i == 0 && j > 0)
				dp[i][j] = dp[i][j - 1] + v[i][j];
			if (j == 0 && i > 0)
				dp[i][j] = dp[i - 1][j] + v[i][j];
			if (i > 0 && j > 0)
				dp[i][j] = min(dp[i - 1][j], dp[i][j - 1]) + v[i][j];
		}
	}
	if (dp[N - 1][M - 1] > cpn) {
		cout << "NO";
		return 0;
	}
	cout << "YES" << '\n';
	cout << dp[N - 1][M - 1];
}