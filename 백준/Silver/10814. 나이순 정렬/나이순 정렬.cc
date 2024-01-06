#include <string>
#include <vector>
#include<algorithm>
#include<tuple>
#include<iostream>
using namespace std;

bool compare(const tuple<int,string> &a,const tuple<int, string>& b) {
	return get<0>(a) < get<0>(b);
}

int main()
{
	int cnt;
	cin >> cnt;
	vector < tuple<int, string>>v;
	for (int i = 0; i < cnt; ++i) {
		int age; string name;
		cin >> age >> name;
		v.emplace_back(age, name);
	}
	stable_sort(v.begin(), v.end(),compare);
	for (auto& a : v) {
		cout << get<0>(a) << " " << get<1>(a) << '\n';
	}
}