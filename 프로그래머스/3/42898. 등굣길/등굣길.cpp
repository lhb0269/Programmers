#include <string>
#include <vector>

using namespace std;

int solution(int m, int n, vector<vector<int>> puddles) {
    vector<vector<int>>v(n, vector<int>(m, 0));
    vector<vector<int>>puddlist(n, vector<int>(m, 0));
    for (auto& a : puddles) {
        puddlist[a[1] - 1][a[0] - 1] = 1;
    }
    v[0][0] = 1;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (puddlist[i][j] == 1)
                v[i][j] = 0;
            else {
                if (i > 0) {
                    v[i][j] += (v[i - 1][j] % 1000000007);
                }
                if (j > 0) {
                    v[i][j] += (v[i][j-1] % 1000000007);
                }
            }
        }
    }
    return v[n-1][m-1] % 1000000007;
}