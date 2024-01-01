#include <string>
#include <vector>
#include<sstream>
#include<iostream>
#include<algorithm>
using namespace std;

vector<int> solution(vector<string> park, vector<string> routes) {
	vector<int> answer;
	int H = park[0].size();
	int W = park.size();
	int num = 0;
	for (auto& a : park) {
		if (find(a.begin(), a.end(), 'S') != a.end()) {
			answer.push_back(num);
			answer.push_back(find(a.begin(), a.end(), 'S') - a.begin());
		}
		num++;
	}
	for (auto& a : routes) {
		stringstream ss(a);
		string first, second;
		ss >> first >> second;
		bool b = true;
		int curr = stoi(second);
		if (first == "E") {
			if (answer[1] + curr < H) {
				for (int i = 1; i <= curr; ++i) {
					if (park[answer[0]][answer[1] + i] == 'X') {
						b = false;
						break;
					}
				}
				if (b)
					answer[1] += curr;
			}
		}
		if (first == "W") {
			if (answer[1] - curr >= 0) {
				for (int i = 1; i <= curr; ++i) {
					if (park[answer[0]][answer[1] - i] == 'X') {
						b = false;
						break;
					}
				}
				if (b)
					answer[1] -= curr;
			}
		}
		if (first == "N") {
			if (answer[0] - curr >= 0) {
				for (int i = 1; i <= curr; ++i) {
					if (park[answer[0] - i][answer[1]] == 'X') {
						b = false;
						break;
					}
				}
				if (b)
					answer[0] -= curr;
			}
		}
		if (first == "S") {
			if (answer[0] + curr < W) {
				for (int i = 1; i <= curr; ++i) {
					if (park[answer[0] + i][answer[1]] == 'X') {
						b = false;
						break;
					}
				}
				if (b)
					answer[0] += curr;
			}
		}
	}
	cout << answer[0] << answer[1];
	return answer;
}