#include <string>
#include <vector>
#include<map>
using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    map<int, int>m;
    for (int i = 0; i < numbers.size(); ++i) {
        for (int j = 0; j < numbers.size(); ++j) {
            if (i != j) {
                m.insert({ numbers[i] + numbers[j], 1 });
            }
        }
    }
    for (auto& a : m) {
        answer.push_back(a.first);
    }
    return answer;
}