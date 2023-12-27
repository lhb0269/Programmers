#include <string>
#include <vector>
#include<iostream>
#include<map>
using namespace std;

vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo) {
    map<string, int> m;
    vector<int> answer;
    for (int i = 0; i < name.size(); ++i)
    {
        m.insert({ name[i], yearning[i] });
    }
    for (auto& v : photo) {
        int num = 0;
        for (int i = 0; i < v.size(); ++i) {
            if (m.find(v[i]) != m.end())
                num += m.find(v[i])->second;
        }
        answer.push_back(num);
        cout << num << endl;
    }
    return answer;
}