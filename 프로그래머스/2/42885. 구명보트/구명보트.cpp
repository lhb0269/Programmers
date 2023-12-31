#include <string>
#include <vector>
#include<algorithm>

using namespace std;

int solution(vector<int> people, int limit) {
    int answer = 0;
    sort(people.begin(), people.end());
    int n = 0;
    while (n < people.size()) {
        int back = people.back();
        people.pop_back();
        if (people[n] + back <= limit) {
            answer++;
            n++;
        }
        else
            answer++;
    }
    return answer;
}