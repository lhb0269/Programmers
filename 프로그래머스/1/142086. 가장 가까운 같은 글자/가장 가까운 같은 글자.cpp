#include <string>
#include <vector>
#include<iostream>
#include<map>
using namespace std;

vector<int> solution(string s) {
    map<char, int>m;
    vector<int> answer;
    for (int i = 0; i < s.size(); ++i) {
        if (i == 0) {
            m.insert({ s[i], i });
            answer.push_back(-1);
        }
        else {
            if (m.find(s[i])!= m.end()) {
                answer.push_back(i- m[s[i]]);
                m[s[i]] = i;
            }
            else {
                m.insert({ s[i], i });
                answer.push_back(-1);
            }
        }
    }
    for (auto& a : answer)
        cout << a << endl;
    return answer;
}