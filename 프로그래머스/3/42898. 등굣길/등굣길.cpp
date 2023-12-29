#include <string>
#include <vector>

using namespace std;

int solution(int m, int n, vector<vector<int>> puddles) {
    vector<vector<int>> v(n, vector<int>(m, 0));
    vector<vector<int>> puddllist(n, vector<int>(m, 0));
    for (auto& a : puddles) {
        puddllist[a[1] - 1][a[0] - 1] = 1;
    }
    v[0][0] = 1;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (puddllist[i][j] == 1)
                v[i][j] = 0;
            else {
                if (j > 0) {
                    v[i][j] += (v[i][j - 1] % 1000000007);
                }
                if (i > 0) {
                    v[i][j] += (v[i - 1][j] % 1000000007);
                }
            }
        }
    }
    return v[n-1][m-1] % 1000000007;
}