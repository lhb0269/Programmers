#include <string>
#include <vector>
#include<algorithm>
#include<stack>
#include<iostream>
using namespace std;

int main()
{
	int cnt;
	cin >> cnt;
	for (int i = 0; i < cnt; ++i) {
		string s;
		cin >> s;
		stack<char>st;
		bool flag = false;
		for (int j = 0; j < s.size(); ++j) {
			if (s[j] == '(') {
				st.push(s[j]);
				flag = true;
			}
			else {
				if (s[j] == ')' && !st.empty() && st.top() == '(') {
					st.pop();
				}
				else {
					flag = false;
					st.push(s[j]);
				}
			}
		}
		if (st.empty() && flag)cout << "YES" << '\n';
		else cout << "NO" << '\n';
	}
}