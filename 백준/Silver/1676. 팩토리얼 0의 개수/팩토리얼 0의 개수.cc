#include <string>
#include <vector>
#include<algorithm>
#include<queue>
#include<iostream>
using namespace std;

int main()
{
	cin.tie(NULL)->ios::sync_with_stdio(false);

	int N;
	cin >> N;
	int cnt = 0;
	for (int i = 5; i <= N; i *= 5) {
		cnt += (N / i);
	}
	cout << cnt << endl;
}