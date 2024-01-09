#include <string>
#include <vector>
#include<algorithm>
#include<queue>
#include<iostream>
using namespace std;

bool compare(const pair<int ,int> &a, const pair<int, int>& b) {
	if (a.second == b.second)
		return a.first < b.first;
	return a.second < b.second;
}

int main()
{
	cin.tie(NULL)->ios::sync_with_stdio(false);
	vector<pair<int, int>>v;
	int cnt;
	cin >> cnt;
	for (int i = 0; i < cnt; ++i) {
		int a, b;
		cin >> a >> b;
		v.push_back({ a,b });
	}
	sort(v.begin(), v.end(), compare);
	for (auto& a : v) {
		cout << a.first << " " << a.second << '\n';
	}
}