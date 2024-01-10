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
	vector<long long>v;
	v.push_back(0);
	v.push_back(1);
	for (int i = 2; i <= N; ++i) {
		v.push_back(v[i - 2] + v[i - 1]);
	}
	cout << v[v.size()-1] << endl;
}