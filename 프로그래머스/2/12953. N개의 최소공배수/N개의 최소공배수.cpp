#include <string>
#include <vector>
#include<iostream>

using namespace std;

int solution(vector<int> arr) {
	int answer = 0;
	int N = arr.size() - 1;
	for (int i = 1; i >= 1; ++i) {
		int cnt = 0;
		for (int j = 0; j < arr.size(); ++j) {
			if ((arr[N] * i) % arr[j] == 0) {
				cnt++;
			}
		}
		if (cnt == N+1) {
			answer = arr[N] * i;
			cout << answer;
			return answer;
		}
	}
}