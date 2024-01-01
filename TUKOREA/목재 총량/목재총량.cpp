#include <iostream>
#include<vector>
using namespace std;
//R = [] # M행 X N열 2차원 배열 나무
//Q[r][c] : (0,0)에서 (r,c) 직사각형 목재 총량
//[r1,c1,r2,c2] 목재총량 = Q[r2][c2] - Q[r1-1][c2] - Q[r2][c1-1] + Q[r1-1][c1-1]

int main()
{
	int M, N;
	vector<vector<int>>R;
	cin >> M >> N;
	vector<vector<int>>Q(N,vector<int>(M,0));
	for (int i = 0; i < N; ++i) {
		vector<int>s;
		for (int j = 0; j < M; ++j) {
			int curr;
			cin >> curr;
			s.push_back(curr);
		}
		R.push_back(s);
		s.clear();
	}
	Q[0][0] = R[0][0];
	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < M; ++j) {
			if (i == 0 && j > 0) {
				Q[i][j] = Q[i][j - 1] + R[i][j];
			}
			if (j == 0 && i > 0) {
				Q[i][j] = Q[i - 1][j] + R[i][j];
			}
			if (i > 0 && j > 0) {
				Q[i][j] = Q[i][j - 1] + Q[i - 1][j] - Q[i - 1][j - 1] + R[i][j];
			}
		}
	}
	int cnt;
	cin >> cnt;

	for (int i = 0; i < cnt; ++i) {
		int r1, c1, r2, c2;
		cin >> r1 >> c1 >> r2 >> c2;
		r1--; c1--; r2--; c2--;
		int sum = Q[r2][c2];
		if (r1 > 0)
			sum -= Q[r1 - 1][c2];
		if (c1 > 0)
			sum -= Q[r2][c1 - 1];
		if (r1 > 0 && c1 > 0)
			sum += Q[r1 - 1][c1 - 1];
		cout << sum << endl;
	}
}
