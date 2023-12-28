#include <string>
#include <vector>
using namespace std;

int solution(string s) {
    int answer = 0;
	string st = {};
	for (int i = 0; i < s.size();) {
		switch (s[i])
		{
		case 'z':
			st += '0';
			i += 4;
			break;
		case 'o':
			st += '1';
			i += 3;
			break;
		case 't':
			if (s[i + 1] == 'w') {
				st += '2';
				i += 3;
			}
			else {
				st += '3';
				i += 5;
			}
			break;
		case 'f':
			if (s[i + 1] == 'o') {
				st += '4';
				i += 4;
			}
			else {
				st += '5';
				i += 4;
			}
			break;
		case 's':
			if (s[i + 1] == 'i') {
				st += '6';
				i += 3;
			}
			else {
				st += '7';
				i += 5;
			}
			break;
		case 'e':
			st += '8';
			i += 5;
			break;
		case 'n':
			st += '9';
			i += 4;
			break;
		default:
			st += s[i];
			i++;
			break;
		}
    }
	answer =stoi(st);
    return answer;
}