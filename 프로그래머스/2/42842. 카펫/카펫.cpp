#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    int sum = brown + yellow;
    for (int height = 3;; ++height) {
        if (!(sum % height)) {
            int weight = sum / height;
            if (((height - 2) * (weight - 2)) == yellow) {
                answer.push_back(weight);
                answer.push_back(height);
                break;
            }
        }
    }
    return answer;
}
///////////////////////////////////////////////////////////////////////////////
//약수를 구하는 방식으로 접근했었음 테스트 케이스 4,6,7번 실패로 다른 방법으로 접근//
///////////////////////////////////////////////////////////////////////////////
vector<int> answer;
vector<int>num;

for (int i = 1; i <= brown + yellow; ++i) {
    if ((brown + yellow) % i == 0) {
        num.push_back(i);
    }
}
int curr = num.size() / 2;
for (int i = 0; i <= curr; ++i) {
    if (num[curr] * num[curr + i] == brown + yellow) {
        
        answer.push_back(num[curr+i]);
        answer.push_back(num[curr]);
        return answer;
    }
    if (num[curr] * num[curr - i] == brown + yellow) {
        answer.push_back(num[curr]);
        answer.push_back(num[curr - i]);
        return answer;
    }
}
///////////////////////////////////////////////////
