#include <string>
#include <vector>
#include<sstream>
using namespace std;

string solution(string s) {
    int min = 100000;
    int max = -100000;
    vector<string>st;
    stringstream ss(s);
    string answer = "";
    string word;
    while (getline(ss, word, ' ')) {
        int num = stoi(word);
        if (num < min)
            min = num;
        if (num > max)
            max = num;
    }
    answer += to_string(min) + " " + to_string(max);
    return answer;
}
int main()
{
    solution("1 2 3 4");
}