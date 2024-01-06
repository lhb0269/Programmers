#include <string>
#include <vector>
#include<algorithm>
#include<map>
#include<iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	map<int, int>m;
	vector<int>c;
	int N, M;
	cin >> N;
	for (int i = 0; i < N; ++i) {
		int curr;
		cin >> curr;
		if (m.find(curr) != m.end())m[curr]++;
		else m.insert({ curr, 1 });
	}
	cin >> M;
	for (int i = 0; i < M; ++i) {
		int curr;
		cin >> curr;
		c.push_back(m[curr]);
	}

	for (auto& a : c) {
		cout << a << " ";
	}
}