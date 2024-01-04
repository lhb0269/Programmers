#include<stack>
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int cnt;
	cin >> cnt;
	stack<int> s;
	vector<int>v;
	vector<char>ch;
	int number = 1;
	for (int i = 0; i < cnt; ++i) {
		int a;
		cin >> a;
		if (!s.empty() && s.top() == a) {
			s.pop();
			ch.push_back('-');
		}
		else if (number <= a) {
			while (number <= a) {
				s.push(number++);
				ch.push_back('+');
			}
			s.pop();
			ch.push_back('-');
		}
		else if (!s.empty() && s.top() > a) {
			cout << "NO";
			return 0;
		}
	}
	for (auto& a : ch) {
		cout << a << '\n';
	}
	return 0;
}