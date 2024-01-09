#include <string>
#include <vector>
#include<algorithm>
#include<queue>
#include<math.h>
#include<numeric>
#include<iostream>
using namespace std;


int main()
{
	cin.tie(NULL)->ios::sync_with_stdio(false);
	cout.tie(NULL);
	int N;
	float f = 0.15f;
	cin >> N;
	if (!N) {
		cout << "0";
		return 0;
	}
	float af = round(N * f);
	int avr = 0;
	int result = 0;
	vector<int>v;
	for (int i = 0; i < N; ++i) {
		int num;
		cin >> num;
		v.push_back(num);
	}
	sort(v.begin(), v.end());
	double sum = 0;
	for (int i = af;i< N - af; ++i) {
		sum += v[i];
	}
	avr = round(sum / (N - (2 * af)));
	cout << avr;
}