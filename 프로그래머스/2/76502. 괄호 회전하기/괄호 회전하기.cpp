#include <string>
#include <vector>
#include<stack>
#include<iostream>
using namespace std;

int solution(string s) {
	int answer = 0;
	for (int i = 0; i < s.length(); ++i) {
		stack<char>st;
		bool flag = false;
		for (int j = 0; j < s.length(); ++j) {
			if (s[j] == '[' || s[j] == '{' || s[j] == '(') {
				st.push(s[j]);
				flag = true;
			}
			else {
 				if (s[j] == ']' &&!st.empty() && st.top() == '[') { st.pop(); }
				if (s[j] == '}' && !st.empty() && st.top() == '{') {st.pop();}
				if (s[j] == ')' && !st.empty() && st.top() == '(') {st.pop();}
			}
		}
		if (st.empty() && flag) answer++;
		char c = s.front();
		s.erase(s.begin());
		s.push_back(c);
	}
	cout << answer << endl;
	return answer;
}
