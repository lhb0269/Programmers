#include <string>
#include <vector>
#include<iostream>
using namespace std;

int solution(int n) {
    int answer = 0;
    vector<int>v;
    v.push_back(0);
    v.push_back(1);
    for (int i = 2; i <= n; ++i) {
        int curr = (v[i - 1] + v[i - 2]) % 1234567;
        v.push_back(curr);
    }
    cout << v[n] % 1234567;
    return v[n]% 1234567;
}