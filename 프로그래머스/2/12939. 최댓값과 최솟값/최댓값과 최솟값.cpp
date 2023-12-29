#include <string>
#include <vector>
#include<sstream>
#include<algorithm>
using namespace std;

string solution(string s) {
    vector<string>st;
    vector<int>v;
    stringstream ss(s);
    string answer = "";
    string word;
    while (getline(ss, word, ' ')) {
        int num = stoi(word);
        v.push_back(num);
    }
    sort(v.begin(),v.end());
    answer += to_string(v.front()) + " " + to_string(v.back());
    return answer;
}