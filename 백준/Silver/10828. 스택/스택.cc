#include<iostream>
#include<vector>
#include<stack>
#include<sstream>
#include<string>
using namespace std;

int main()
{
	int cnt;
	cin >> cnt;
	stack<int>s;
	vector<int>v;
	for (int i = 0; i < cnt; ++i) {
		string st;
		cin >> st;
		if (st == "pop") {
			if (s.empty())
				cout << -1 << endl;
			else {
				cout << s.top() << endl;
				s.pop();
			}
		}
		if (st == "size")
			cout << s.size() << endl;
		if (st == "empty") {
			if (s.empty())
				cout << 1 << endl;
			else
				cout << 0 << endl;
		}
		if (st == "top") {
			if (s.empty())
				cout << -1 << endl;
			else
				cout << s.top() << endl;
		}
		if (st == "push") {
			int num;
			cin >> num;
			s.push(num);
		}
	}
}