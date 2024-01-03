#include <string>
#include <vector>
#include<iostream>
using namespace std;

long long solution(int n) {
    long long answer = 0;
    long long arr[2001];
    arr[0] = 1;
    arr[1] = 1;
    for (int i = 2; i <= n; ++i) {
        arr[i] = (arr[i - 1] + arr[i - 2]) % 1234567;
    }
    return arr[n];
}
