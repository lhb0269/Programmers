#include <string>
#include <vector>
#include<algorithm>
#include<map>
#include<iostream>
using namespace std;

map<long long, int>m;
int main()
{
	cin.tie(NULL)->ios::sync_with_stdio(false);
	
	int N, M;
	vector<bool>b;
	cin >> N;
	for (int i = 0; i < N; ++i) {
		long long curr;
		cin >> curr;
		if (m.find(curr) != m.end())m[curr]++;
		else m.insert({ curr,1 });
	}
	cin >> M;
	for (int i = 0; i < M; ++i) {
		long long curr;
		cin >> curr;
		if (m.find(curr) != m.end())b.push_back(1);
		else b.push_back(0);
	}
	for (int i = 0; i < b.size();++i) {
		cout << b[i] << '\n';
	}
}