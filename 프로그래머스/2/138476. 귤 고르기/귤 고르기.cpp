#include <string>
#include <vector>
#include<map>
#include<algorithm>
#include<iostream>

using namespace std;

int solution(int k, vector<int> tangerine) {
    int answer = 0;
    vector<int> v;
    sort(tangerine.begin(), tangerine.end());
    map<int, int>m;
    for (int i = 0; i < tangerine.size(); ++i) {
        m[tangerine[i]]++;
    }
    for (auto& a : m) {
        v.push_back(a.second);
   }
    sort(v.begin(), v.end(), greater<int>());
    int cnt = 0;
    for (int i = 0; i < v.size(); ++i) {
        if (cnt >= k)
            break;
        answer++;
        cnt += v[i];
    }
    return answer;
}