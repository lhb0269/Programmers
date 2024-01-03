#include <string>
#include <vector>
#include<iostream>
#include<map>
#include<algorithm>

using namespace std;
vector<string> answer;
vector<vector<string>> ticket;
bool check[1001];
bool isAnswer;

void dfs(string start, int ticketCnt)
{
    answer.push_back(start);
    if (ticketCnt == ticket.size()) {
        isAnswer = true;
    }
    for (int i = 0; i < ticket.size(); ++i) {
        if (check[i])continue;
        if (ticket[i][0] == start) {
            check[i] = true;
            dfs(ticket[i][1], ticketCnt + 1);

            if (!isAnswer) {
                answer.pop_back();
                check[i] = false;
            }
        }
    }
}

vector<string> solution(vector<vector<string>> tickets) {
    sort(tickets.begin(), tickets.end());
    ticket = tickets;
    dfs("ICN", 0);
    for (auto& a : answer) {
        cout << a << " ";
    }
    cout << endl;
    return answer;
}
