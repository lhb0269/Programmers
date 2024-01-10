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
	int N;
	cin >> N;
	vector<vector<int>>v;
	vector<vector<int>>dp(N,vector<int>(3,0));
	int result = 0;
	for (int i = 0; i < N; ++i) {
		vector<int>vc;
		for (int j = 0; j < 3; ++j) {
			int num;
			cin >> num;
			vc.push_back(num);
		}
		v.push_back(vc);
	}
	int curr = 0;//번째
	curr = min_element(v[0].begin(), v[0].end()) - v[0].begin();
	dp[0] = v[0];
	for (int i = 1; i < v.size(); ++i) {
		dp[i][0] += v[i][0] + min(dp[i-1][1], dp[i-1][2]);
		dp[i][1] += v[i][1] + min(dp[i-1][0], dp[i-1][2]);
		dp[i][2] += v[i][2] + min(dp[i-1][0], dp[i-1][1]);
	}
	cout << *min_element(dp[dp.size() - 1].begin(), dp[dp.size() - 1].end());
	/*cout << result << endl;*/
}