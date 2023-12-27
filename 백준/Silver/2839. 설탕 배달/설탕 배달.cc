#include <string>
#include <vector>
#include<iostream>
#include<map>
using namespace std;

int main()
{
	int num = 0;
	int ans = 0;
	cin >> num;
	while (num >= 0) {
		if (num % 5 == 0) {
			ans += num / 5;
			cout << ans << endl;
			return 0;
		}
		num -= 3;
		ans++;
	}
	cout << -1 << endl;
}