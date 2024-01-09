#include <string>
#include <vector>
#include<algorithm>
#include<queue>
#include<iostream>
using namespace std;


int main()
{
	cin.tie(NULL)->ios::sync_with_stdio(false);
	cout.tie(NULL);
	queue<int>q;
	int N, K;
	cin >> N >> K;

	for (int i = 1; i <= N; ++i) {
		q.push(i);
	}
	cout << "<";
	while (q.size()!=1) {
		for (int i = 1; i < K; ++i) {
			int front = q.front();
			q.pop();
			q.push(front);
		}
		cout << q.front()<<", ";
		q.pop();
	}
	cout << q.front() << ">";
	q.pop();
}