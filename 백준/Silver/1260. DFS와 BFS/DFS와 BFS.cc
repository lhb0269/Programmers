#include <string>
#include <vector>
#include<iostream>
#include<stack>
#include<deque>
#include<queue>
using namespace std;

void dfs(int x,vector<bool>&visited, vector<vector<int>>&graph,int n)
{
	visited[x] = true;
	cout << x << ' ';
	for (int i = 1; i <= n; i++) {
		if (!visited[i] && graph[x][i])
			dfs(i,visited,graph,n);
	}
}
void dfs2(int x, vector<bool>& visited, vector<vector<int>>& graph, int n)
{
	stack<int>s;
	s.push(x);
	visited[x]=true;
	cout << x << " ";
	while (!s.empty()) {
		int current = s.top();
		s.pop();
		if (!visited[current]) {
			cout << current << " ";
			visited[current] = true;
		}
		for (int i = n; i > 0; --i) {
			if (!visited[i] && graph[current][i]) {
				s.push(i);
			}
		}
	}
}
void bfs(int x, vector<bool>& visited, vector<vector<int>>& graph, int n)
{
	queue<int>q;
	q.push(x);
	visited[x] = true;
	cout << x << " ";
	while (!q.empty()) {
		int curr = q.front();
		q.pop();
		if (!visited[curr]) {
			cout << curr << " ";
			visited[curr] = true;
		}
		for (int i = 0; i <= n;++i) {
			if (!visited[i] && graph[curr][i]) {
				q.push(i);
			}
		}
	}
}
int main()
{
	int N, M, V;
	cin >> N >> M >> V;
	vector<vector<int>>graph(N+1, vector<int>(N+1, 0));
	vector<bool>visited1(N + 1,false);
	vector<bool>visited2(N + 1,false);
	for (int i = 0; i < M; ++i) {
		int a, b;
		cin >> a >> b;
		graph[a][b] = true;
		graph[b][a] = true;
	}
	dfs2(V, visited1, graph,N);
	cout << endl;
	bfs(V, visited2, graph, N);
}