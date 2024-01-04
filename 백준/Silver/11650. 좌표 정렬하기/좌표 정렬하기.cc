#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>

using namespace std;

class POINT {
public:
	int x;
	int y;
	POINT(int a, int b) { x = a; y = b; }
};

bool compare(POINT& a, POINT& b) {
	if (a.x < b.x) {
		return true;
	}
	if (a.x == b.x) {
		if (a.y < b.y) return true;
	}
	return false;
}

int main()
{
	int n;
	cin >> n;
	vector<POINT>v;
	for (int i = 0; i < n; ++i) {
		int a, b;
		cin >> a >> b;
		POINT p(a,b);
		v.push_back(p);
	}
	sort(v.begin(), v.end(), compare);
	for (auto& a : v) {
		cout << a.x << " " << a.y << "\n";
	}
}