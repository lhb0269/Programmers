#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> triangle) {
    int L = triangle.size();
    for (int i = L - 2; i > -1; --i) {
        for (int j = 0; j < triangle[i].size(); ++j) {
            triangle[i][j] += max(triangle[i + 1][j], triangle[i + 1][j + 1]);
        }
    }
    return triangle[0][0];
}