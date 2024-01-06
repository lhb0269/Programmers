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
	queue<int>q;
	for (int i = 1; i <= N; ++i) {
		q.push(i);
	}
	while (q.size() > 1) {
		q.pop();
		int a = q.front();
		q.pop();
		q.push(a);
	}
	cout << q.front();
}